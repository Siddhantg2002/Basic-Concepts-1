import sys
import pandas as pd
df = pd.read_csv('/Users/siddhant/Desktop/SID/CODES/PYTHON/Pandas/data.csv')
print(df.info()) 
print(df.head()) 
print(df.tail()) 
print(df.corr())

