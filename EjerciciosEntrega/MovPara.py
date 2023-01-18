import numpy as np
import math
import matplotlib.pyplot as plt
v=float(input("Ingrese la velocidad inicial "))
a=float(input("Ingrese el ángulo "))
n=int(input("Ingrese la cantidad de intervalos "))
tiempo=[]
x=[0]
y=[0]
s=0
g=9.80665
rad=a*math.pi/180
vx=v*np.cos(rad)
vy=v*np.sin(rad)
t=2*vy/g
print("En el tiempo " ,s, "segundos, la velocidad en X es de " ,vx, " y en Y es de" ,vy,"")
for i in range(0, n):
    s=(t/n)+s;
    vy1=vy-(g*s);
    tiempo.append(s)
    print("En el tiempo " ,s, "segundos, la velocidad en X es de " ,vx, " y en Y es de" ,vy1,"")
for tem in tiempo:
    l=vx*tem
    f=vy*tem-0.5*g*tem**2
    x.append(l)
    y.append(f)
plt.plot(x,y,'o-')