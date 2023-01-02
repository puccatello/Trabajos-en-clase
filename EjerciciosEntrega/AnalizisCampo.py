#!/usr/bin/env python
# coding: utf-8

# In[10]:


import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from scipy.optimize import curve_fit


# In[11]:


df=pd.read_csv('CampoMagnéticoLineal.csv', sep=';')
df


# In[12]:


ColNames = df.columns
for column in ColNames: df[column] = df[column].str.replace(',','.').astype(float)
df = df.drop(columns='B1')
df = df.drop(columns='B2')
df = df.drop(columns='B3')
df = df.drop(columns='B4')
df


# In[13]:


plt.scatter(df.I, df.B, label='Datos Experimentales')


# In[40]:


p=4*np.pi*10**-7
def CampoM(I,p):
     return (p*I*1000)/(2*np.pi*0.0178)


# In[42]:


I_data=df['I'].values
B_data=df['B'].values
popt,_=curve_fit(CampoM, I_data, B_data)
p=popt[0]
B_pred=CampoM(I_data,p)

print(p)


# In[16]:


plt.scatter(I_data, B_data, color='blue', label='Datos experimentales')
plt.plot(I_data, B_pred, color='red', label=r'$\mu_0=8.5x10^{-7}$')
plt.title('Campo Magnético vs Corriente, Hilo Infinito') 
plt.xlabel(r'$I$(A)') 
plt.ylabel(r'$B$(mT)')
plt.savefig('Campo Magnético del Hilo Infinito.pdf')
plt.legend();


# In[17]:


df=pd.read_csv('CampoMagnéticoCircular.csv', sep=';')
df


# In[18]:


ColNames = df.columns
for column in ColNames: df[column] = df[column].str.replace(',','.').astype(float)
df = df.drop(columns='B1')
df = df.drop(columns='B2')
df = df.drop(columns='B3')
df = df.drop(columns='B4')
df


# In[19]:


plt.scatter(df.I, df.B, label='Datos Experimentales')


# In[36]:


p=4*np.pi*10**-7
def CampoM(I,p):
     return p*I*1000/0.04


# In[37]:


I_data=df['I'].values
B_data=df['B'].values
popt,_=curve_fit(CampoM, I_data, B_data)
p=popt[0]
B_pred=CampoM(I_data,p)

print(p)


# In[22]:


plt.scatter(I_data, B_data, color='blue', label='Datos experimentales')
plt.plot(I_data, B_predi, color='red', label=r'$\mu_0=8.5x10^{-7}$')
plt.title('Campo Magnético vs Corriente, Espira') 
plt.xlabel(r'$I$(A)') 
plt.ylabel(r'$B$(mT)')
plt.savefig('Campo Magnético de la Espira.pdf')
plt.legend();


# In[23]:


df=pd.read_csv('CampoMagnéticoBobina.csv', sep=';')
df


# In[24]:


ColNames = df.columns
for column in ColNames: df[column] = df[column].str.replace(',','.').astype(float)
df = df.drop(columns='B1')
df = df.drop(columns='B2')
df = df.drop(columns='B3')
df = df.drop(columns='B4')
df


# In[25]:


plt.scatter(df.I, df.B, label='Datos Experimentales')


# In[34]:


p=4*np.pi*10**-7
def CampoM(I,p):
     return p*I*520*1000/0.155


# In[35]:


I_data=df['I'].values
B_data=df['B'].values
popt,_=curve_fit(CampoM, I_data, B_data)
p=popt[0]
B_pred=CampoM(I_data,p)

print(p)


# In[28]:


plt.scatter(I_data, B_data, color='blue', label='Datos experimentales')
plt.scatter(I_data, B_pred, color='red', label=r'Datos teóricos')
plt.title('Campo Magnético vs Corriente, Bobina') 
plt.xlabel(r'$I$(A)') 
plt.ylabel(r'$B$(mT)')
plt.savefig('Campo Magnético de la Bobina.pdf')
plt.legend();


# In[5]:




