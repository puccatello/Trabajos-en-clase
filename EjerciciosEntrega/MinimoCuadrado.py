import numpy as np
import pandas as pd
f=0
g=0
suma=0
cuadrado=0
n=int(input("Ingrese la cantidad de vectores: "))
x=[0]*(n)
y=[0]*(n)

for i in range(0, n-1+1, 1):
    x[i]=float(input("Ingrese x: "))
    y[i]=float(input("Ingrese y: "))
for i in range(0, n-1+1, 1):
    suma=suma+x[i]*y[i]
    cuadrado=cuadrado+pow(x[i], 2)
    f=f+x[i]
    g=g+y[i]

if (n*cuadrado-pow(f, 2))==0:
    print("No se puede encontrar el valor ya que se divide por cero.")
else:
    a=(n*suma-f*g)/(n*cuadrado-pow(f, 2))
    print("El valor del Minimo Cuadrado es de ",a," ")

