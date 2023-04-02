import sys
import matplotlib.pyplot as plt
import numpy as np
from numpy import random
font1 = {'family':'serif','color':'blue','size':20}
font2 = {'family':'serif','color':'darkred','size':15}
#PLOT 1
x1=random.randint(25,size=(5))
y1=random.randint(25,size=(5))
x2=random.randint(25,size=(5))
y2=random.randint(25,size=(5))
plt.subplot(2,1,1)
plt.xlabel("MUSCLE MASS",loc='left')
plt.ylabel("TIME")
plt.title("POWER",fontdict=font1)
plt.grid()
plt.plot(x1,y1)
plt.plot(x2,y2)
#PLOT 2
x=random.randint(100,size=(5))
y=random.randint(100,size=(5))
plt.subplot(2,1,2)
plt.xlabel("MASS",loc='left')
plt.ylabel("TIME")
plt.title("MUSCLE HYPERTROPHY",fontdict=font1)
plt.grid(axis='x',color='green',ls='dotted')
plt.plot(x,y,marker='o',mec='black',ms=5,mfc='hotpink',lw=2,ls='dotted',color='red')
plt.show()