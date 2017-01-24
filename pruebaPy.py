#!/usr/bin/env python
import numpy as np
import matplotlib.pyplot as plt

#expected filename: numlist.csv

numlist = np.loadtxt("numlist.csv")

#Create histogram
plt.hist(numlist)
plt.gcf()
plt.savefig("histogram.pdf")
