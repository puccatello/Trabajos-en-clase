<<<<<<< HEAD
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int n,x;
    cout <<"El programa analiza si un número al verse de abajo para arriba es un número reversible."<<endl;
    cout << "Ingrese la cantidad de dígitos de su número " ;
    cin >> n;
    int numero[n];
    cout << "Ingrese su número ";
    for (int i = 0; i < n; i++)
    {
        cout <<"Ingrese el número " <<i;
        cin >> numero[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (numero[i] == 0 || numero[i] == 1 || numero[i] == 2 || numero[i] == 5 || numero[i] == 6 || numero[i] == 8 || numero[i] == 9)
        {x=x+1;
        }
        else{
            x=x;
        }
    }

    if (x ==n){
        cout << "Tu número si tiene un número reversibles."<<endl;
        cout <<"Tu nuevo número es ";
        for (int i = 0; i < n; i++){
            if(numero[i] == 0){
                numero[i] =0;
                cout <<numero[i];
            }
            if(numero[i] == 1){
                numero[i] =1;
                cout <<numero[i];
            }
            if(numero[i] == 2){
                numero[i] =5;
                cout << numero[i];
            }
            if(numero[i] == 5){
                numero[i] =2;
                cout << numero[i];
            }
            if(numero[i] == 6){
                numero[i] =9;
                cout <<numero[i];
            }
            if(numero[i] == 9){
                numero[i] =6;
                cout << numero[i];
            }
            if(numero[i] == 8){
                numero[i] =8;
                cout << numero[i];
            }
            
        }

    }
    else{ cout << "No tiene número reversible."<<endl;}
=======
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int n,x;
    cout << "Ingrese la cantidad de dígitos de su número " ;
    cin >> n;
    int numero[n];
    cout << "Ingrese su número ";
    for (int i = 0; i < n; i++)
    {
        cout <<"Ingrese el número " <<i;
        cin >> numero[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (numero[i] == 0 || numero[i] == 1 || numero[i] == 2 || numero[i] == 5 || numero[i] == 6 || numero[i] == 8 || numero[i] == 9)
        {x=x+1;
        }
        else{
            x=x;
        }
    }

    if (x ==n){
        cout << "Tu número si tiene capicuas reversibles."<<endl;
        cout <<"Tu nuevo número es ";
        for (int i = 0; i < n; i++){
            if(numero[i] == 0){
                numero[i] =0;
                cout <<numero[i];
            }
            if(numero[i] == 1){
                numero[i] =1;
                cout <<numero[i];
            }
            if(numero[i] == 2){
                numero[i] =5;
                cout << numero[i];
            }
            if(numero[i] == 5){
                numero[i] =2;
                cout << numero[i];
            }
            if(numero[i] == 6){
                numero[i] =9;
                cout <<numero[i];
            }
            if(numero[i] == 9){
                numero[i] =6;
                cout << numero[i];
            }
            if(numero[i] == 8){
                numero[i] =8;
                cout << numero[i];
            }
            
        }

    }
    else{ cout << "No tiene capicuas reversibles."<<endl;}
>>>>>>> 54be16fb0d0cf993e55345e1e5afe2f4e98fdd22
}