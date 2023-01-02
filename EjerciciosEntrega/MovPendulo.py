#!/usr/bin/env python
# coding: utf-8

# In[2]:


import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from scipy.optimize import curve_fit


# In[16]:


df=pd.read_csv('Libro3.csv', sep=';')
df


# In[17]:


ColNames = df.columns
for column in ColNames: df[column] = df[column].str.replace(',','.').astype(float)
#df = df.drop(index=19)
df['y_mts'] = df.y/100
df = df.drop(columns='y')
df


# In[18]:


plt.scatter(df.t, df.y_mts, label='Datos experimentales3')


# In[19]:


def y_model(t, g): return 0.5*g*t**2


# In[20]:


t_data = df['t'].values
y_data = df['y_mts'].values

popt, _ = curve_fit(y_model, t_data, y_data) 

g = popt[0]

y_pred = y_model(t_data, g)
print('Gravedad =', g.round(3),'m/s2')


# In[54]:


plt.scatter(t_data, y_data, color='purple', label='Datos experimentales')
plt.plot(t_data, y_pred, color='orange', label=r'$y=4.98t^2$')
plt.title('Posicion vs Tiempo') 
plt.xlabel(r'$t$(s)') 
plt.ylabel(r'$y$(m)')
plt.savefig('Caidalibre_final1.pdf')
plt.legend();


# In[22]:


error_grav = 100*np.abs(9.8 - g )/9.8
print('Error en la medida de la gravedad:',error_grav.round(3),'%')

