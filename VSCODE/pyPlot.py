
from email import header
from os import sep
import pandas as pd
import matplotlib.pyplot as plt
import sklearn
from sklearn.model_selection import train_test_split
from sklearn import linear_model
from sklearn.utils import shuffle
from sklearn import preprocessing
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

# PRE-PROCESSING OF DATA
file = pd.read_excel(r'E:\masters\Complete_job_docs\Projects\bionic arm\VSCODE\BIONIC_ARM\NEHA\pinch_relax.xlsx')
feature_names = ['Sensor1', 'Sensor2', 'Sensor3']
X = file[feature_names]
y = file['Grasp']


# remove nan error
import pandas as pd
X=X.replace([np.inf,-np.inf])
X = X.apply (pd.to_numeric, errors='coerce')
X = X.dropna()

y=y.replace([np.inf,-np.inf])
y = y.dropna()

# TESTING AND TRAINING
X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=5)
from sklearn.preprocessing import MinMaxScaler
scaler = MinMaxScaler()
X_train = scaler.fit_transform(X_train)
X_test = scaler.transform(X_test)



#3d plot
#fig=plt.figure(figsize=(6,6))
#plot3d=fig.add_subplot(111,projection='3d')
#plot3d.scatter(X_train[0],X_train[1],X_train[2],linewidths=1,alpha=.7,edgecolor='k',s=200)


#feature1
X_sum=X_train.sum(axis=1)
#print(len(y_train))
#print(len(X_sum))
#plt.scatter(X_sum,y_train)


#plt.show()