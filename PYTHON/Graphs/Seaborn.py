import sys
import matplotlib.pyplot as plt
import numpy as np
from numpy import random
import seaborn as sns
sns.distplot(random.normal(size=1000), hist=False)
plt.show()