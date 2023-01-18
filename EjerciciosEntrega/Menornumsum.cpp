#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int n,x, suma;
    cout << "Ingrese la cantidad de dígitos de su número " ;
    cin >> n;
    int numero[n];
    suma=0;
   for (int i = 0; i < n; i++)
    {
        cout <<"Ingrese el número " <<i+1<<": ";
        cin >> numero[i];
    }

    for (int i = 0; i < n; i++){
        suma = suma+numero[i];
    }

    for(int i=0;i<n;i++){
    for(int j=0;j<(i+1);j++){
        
             if (numero[i]<numero[j]){// Para ordenarlos de mayor a menor
                swap(numero[i],numero[j]);}
        }
    }

    cout<<"El número menor que puedes hacer con los númeross que suman "<<suma<<" es: ";

    for (int i=0;i<n; i++){
        cout<<numero[i];
    }



    
    
    
    }