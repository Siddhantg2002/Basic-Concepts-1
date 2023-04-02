import sys
import matplotlib.pyplot as plt
import numpy as np
from numpy import random
#PLOT 1
y1=np.array([10,90,40,80,30,50])
x=np.array(["A","B","C","D","E","F"])
y2=np.array([20,30,60,100,10,50])
plt.subplot(1,2,1)
w1=0.5
plt.bar(x,y1,width=w1)
plt.bar(x,y2,width=w1)
#PLOT 2
# x=random.randint(100,size=(5))
# y=random.randint(100,size=(5))
# plt.subplot(2,1,2)
# plt.plot(x,y)
plt.show()