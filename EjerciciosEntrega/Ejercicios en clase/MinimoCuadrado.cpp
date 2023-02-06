#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    float a, f=0, g=0, suma=0, cuadrado=0, x[n], y[n];
    cout << "Ingrese la cantidad de vectores: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout<<"Ingrese el valor x["<<i<<"]: ";
        cin>>x[i];
        cout<<"Ingrese el valor y["<<i<<"]: ";
        cin>>y[i];}

    for (int i = 0; i < n; i++){
        suma+=(x[i]*y[i]);
        cuadrado+=(x[i]*x[i]);
        f+=x[i];
        g+=y[i];}
    if((n*cuadrado)-(f*f)==0){
        cout<<"No se puede encontrar el valor ya que se divide por cero.";
    }
    else{
    a=((n*suma)-(f*g))/((n*cuadrado)-(f*f));
    cout<<"El valor del Minimo Cuadrado es de "<<a<<"";}
    cout<<endl;

        
}

