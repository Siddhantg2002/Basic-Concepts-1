import matplotlib.pyplot as plt
import numpy as np
from numpy import random

y = np.array([35, 25, 25, 15])
mylabels = ["Apples", "Bananas", "Cherries", "Dates"]
myexplode = [0.2, 0.1, 0.15, 0.2]
c=["hotpink","blue","green","orange"]
plt.pie(y, labels = mylabels, explode = myexplode,shadow=True,colors=c,)
plt.legend(title="FOUR FRUITS")
plt.show()