#!/usr/bin/env python

import numpy as np
import matplotlib.pyplot as plt

singleData=np.loadtxt("singlefloat.csv", delimiter=",")
doubleData=np.loadtxt("doublefloat.csv", delimiter=",")


graph, ax =plt.subplots(1, 1)
ax.set_yscale('log')
ax.set_xscale('log')

ax.plot(singleData[:,0], singleData[:,1], "-.", lw=2, label="Single precision float")
ax.plot(doubleData[:,0], doubleData[:,1], "-.", lw=2, label="Double precision float")
plt.legend()
#plt.show()
plt.savefig("precision.png")
