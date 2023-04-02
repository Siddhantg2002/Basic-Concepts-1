from sklearn import datasets
import warnings
warnings.filterwarnings("ignore")
import pandas as pd
#loading data
Boston=datasets.load_boston()
x=Boston.data
y=Boston.target
print(type(x))
print(x.shape)
df= pd.DataFrame(x)
print(Boston.feature_names)
df.coloumns=Boston.feature_names
df.describe()