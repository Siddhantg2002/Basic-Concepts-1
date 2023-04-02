import sys
import matplotlib.pyplot as plt
import numpy as np
from numpy import random
#PLOT 1
x=random.randint(100,size=(25))
y=random.randint(100,size=(25))
colors=random.randint(100,size=(25))
plt.scatter(x,y,c=colors,cmap='viridis')
plt.colorbar()
#PLOT
x=random.randint(100,size=(25))
y=random.randint(100,size=(25))
colors=random.randint(100,size=(25))
plt.scatter(x,y,c=colors,cmap='Oranges')
plt.colorbar()
plt.grid()
plt.show()