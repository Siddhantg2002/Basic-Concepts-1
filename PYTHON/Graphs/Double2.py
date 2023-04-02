import matplotlib.pyplot as plt
import numpy as np

x1 = np.array([0, 1, 2, 3])
y1 = np.array([3, 8, 1, 10])
x2 = np.array([0, 1, 2, 3])
y2 = np.array([6, 2, 7, 11])

font1 = {'family':'serif','color':'blue','size':20}
font2 = {'family':'serif','color':'darkred','size':15}
plt.grid(axis='x',color='green',lw=1,ls='dotted')
plt.plot(x1, y1, x2, y2)
plt.title("AVERAGE INCOME GROWTH",fontdict=font1)#,loc(locationoftitle)='left')
plt.xlabel("SALARY",fontdict=font2)
plt.ylabel("TIIME",fontdict=font2)
plt.show()