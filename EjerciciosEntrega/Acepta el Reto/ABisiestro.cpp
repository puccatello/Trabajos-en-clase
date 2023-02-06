#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int m, f;
    cout << "Este programa analiza si un año es bisiesto o no. "<<endl;
    cout << "Ingrese la cantidad de años que quiere analizar ";
    cin >> m;
    int  a[m];
    f=0;
    for(int i=0; i<m; i++){
        cout <<"Ingrese el año a analizar: ";
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
    if (a[i]%4==0 &&(a[i]%100!=0 or a[i]%400==0)){
        cout << "El año "<<a[i]<<" es bisiesto."<<endl;
    } else {
        cout << "El año "<<a[i]<<" NO es bisiesto."<<endl;
    }
    }
}