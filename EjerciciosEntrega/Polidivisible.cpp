#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int n, suma;
    cout << "El siguiente programa es para poder saber si un número es polidivisibles." << endl;
    cout << "Ingrese el número que desea analizar: ";
    cin >> n;
    int x=n;
    suma=0;
    int cifras[9]={1,2,3,4,5,6,7,8,9};
    int cifrasn=1;
    while (x>=10){
        x=x/10;
        cifrasn++;
    }

    for (int i=cifrasn-1; i>=0; i--){
        if(n%cifras[i]==0){
            n=n/10;
            suma++;}
        else {
        cout<<"No es polidivisible" ;
        }
    }
    if(suma==cifrasn){
        cout<<"Polidivisible";
    }
    }
    
