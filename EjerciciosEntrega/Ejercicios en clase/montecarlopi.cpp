#include<iostream>
#include<cstdlib>
#include<ctime>
#include <cmath>

using namespace std;
int main(){
    int n, x, y, pi, m;
    m=0;
    cout << "Este programa genera números puntos aleatorios dentro de un cuadrado donde está circuinscrito un circulo. Para calcular pi por el método de Montecarlo." << endl;
    cout << "Ingrese la cantidad de los números aleatorios:"<< endl;
    cin >>n;
    srand(time(NULL));
    for(int i = 0; i <n; i++){
        x=rand()/RAND_MAX;
        y=rand()/RAND_MAX;
        if(x*x+y*y<=1){
            m=m+1;
        }
        cout<<"Los números dentro del círuclo son"<<m<<endl;
        pi=4*(m/n);
        cout<<"
    }
}