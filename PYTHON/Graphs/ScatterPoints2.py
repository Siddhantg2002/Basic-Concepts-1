import sys
import matplotlib.pyplot as plt
import numpy as np
from numpy import random
font1 = {'family':'serif','color':'blue','size':20}
font2 = {'family':'serif','color':'darkred','size':15}
x=random.randint(100,size=(50))
y=random.randint(100,size=(50))
colors=random.randint(100,size=(50))
sizes=5*random.randint(100,size=(50))
plt.scatter(x,y,s=sizes,c=colors,alpha=0.5,cmap='nipy_spectral')
plt.colorbar()
plt.title("AVERAGE INCOME GROWTH",fontdict=font1)#,loc(locationoftitle)='left')
plt.xlabel("SALARY",fontdict=font2)
plt.ylabel("TIIME",fontdict=font2)
plt.grid()
plt.show()