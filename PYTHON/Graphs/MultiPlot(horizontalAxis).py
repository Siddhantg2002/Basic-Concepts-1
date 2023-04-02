import sys
import matplotlib.pyplot as plt
import numpy as np
from numpy import random
#PLOT 1
x1=random.randint(25,size=(5))
y1=random.randint(25,size=(5))
x2=random.randint(25,size=(5))
y2=random.randint(25,size=(5))
plt.subplot(2,1,1)
plt.plot(x1,y1)
plt.plot(x2,y2)
#PLOT 2
x=random.randint(100,size=(5))
y=random.randint(100,size=(5))
plt.subplot(2,1,2)
plt.plot(x,y)
plt.show()