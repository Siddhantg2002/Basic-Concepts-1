import sys
import numpy as np
import matplotlib.pyplot as plt 
ypoints1 =([3, 8, 1, 10])
ypoints2 =([6, 2, 7, 11])
plt.plot(ypoints1,marker ='o',ms=10,mec='black',mfc='green',ls='dashed',lw=3,color='hotpink');
plt.plot(ypoints2,marker ='*',ms=10,mec='black',mfc='red',ls='dotted',lw=3,color='green');
plt.xlabel("Salary")
plt.ylabel("TIIME")
plt.show()
