#include <iostream>
#include <math.h>
#include<list>
#define PI 3.14159265
#define G 9.80665
using namespace std;

int main(){
    double a, v, vx, vy, t, rad, s, vy1;
    int n;
    cout << "Ingrese el valor de la velocidad inicial: ";
    cin >> v;
    cout << "Ingrese el valor del ángulo: ";
    cin >> a;
    cout << "Ingrese la cantidad de intervalos: ";
    cin >> n;
    s=0;
    rad=a*PI/180;
    vx=v*cos(rad);
    vy=v*sin(rad);
    t=2*vy/G;
    cout<< "El tiempo de vuelo es de "<<t<< " segundos"<<endl;
    cout << "En el tiempo " <<s<< " segundos, la velocidad en X es de " <<vx<< " y en Y es de " <<vy <<endl;
   for (int i=0; i<n; ++i){
    s=(t/n)+s;
    vy1=vy-(G*s);
    cout << "En el tiempo " <<s<< "segundos, la velocidad en X es de " <<vx<< " y en Y es de " <<vy1 <<endl;
   }
}