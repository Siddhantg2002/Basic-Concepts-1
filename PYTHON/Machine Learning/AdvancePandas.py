import sys
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
iris=pd.read_csv('/Users/siddhant/Desktop/SID/CODES/PYTHON/Machine Learning/iris.csv')
print(type(iris))
df=iris.copy()
df.columns=['sl','sw','pl','pw','Flower_type']
print('\nHEAD:\n')
print(df.head(5))
print('\nTAIL:\n')
print(df.tail(5))
print('\nINFORMATION:\n')
print(df.info())
print('\nSHAPE:\n')
print(df.shape)
print('\nDESCRIPTION:\n')
print(df.describe)