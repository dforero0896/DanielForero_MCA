#!/usr/bin/env python
import numpy as np
import matplotlib.pyplot as plt
import os
x_i=np.array([3., 5., 12.])
x_j=np.array([1.5, 1.7, 2.])
def P(x, l):
	if(l<0.1):
		return 0
	else:
		res=1.
		Z= -l*(np.exp(-20./l) - np.exp(-1./l))
		for i in range(len(x)):
			res*=np.exp(-x[i]/l)/Z
		return res

P_l=0.5*np.ones(100)

lam=np.linspace(0.1, 10, 100)
P_res=[]
for k in range(len(lam)):
	
	P_res.append(P_l[k]*P(x_j, lam[k]))

P_res=np.asarray(P_res)

plt.plot(lam, P_res)
print lam[P_res==max(P_res)]
plt.scatter(lam[P_res==max(P_res)], max(P_res), s=100, c='r')





plt.gcf()
plt.savefig('P_plot.png')
#os.system('xdg-open P_plot.png')

x_walk = np.empty((0)) #this is an empty list to keep all the steps
x_0 = 10.0*(((np.random.random())+0.1)/1.1) #this is the initialization
x_walk = np.append(x_walk,x_0)
print x_walk

n_iterations = 200000 #this is the number of iterations I want to make
for i in range(n_iterations):
    x_prime = np.random.normal(x_walk[i], .1) #0.1 is the sigma (std. dev) in the normal distribution
    alpha = 0.5*P(x_j, x_prime)/(0.5*P(x_j, x_walk[i]))

    if(alpha>=1.0):
        x_walk  = np.append(x_walk,x_prime)
    else:
        beta = np.random.random()
        if(beta<=alpha):
            x_walk = np.append(x_walk,x_prime)
        else:
            x_walk = np.append(x_walk,x_walk[i])

plt.hist(x_walk, 1000, normed=True)
plt.gcf()
plt.savefig('hist.png')
os.system('xdg-open hist.png')
