import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ codigo.cpp -o codigo.x")
os.system("./codigo.x > datos.dat")

data = np.loadtxt("datos.dat")

plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("datos.png")
