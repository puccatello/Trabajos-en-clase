#include <iostream>

using namespace std;
int main(){
    int n;
    float suma, prom, sumb;
cout << "Escriba la cantidad de números: ";
cin >> n;
suma=0;
sumb=0;
for (int i=0; i<n; i++){
    cout << "Ingrese el número: ";
    cin >> suma;
    sumb+=suma;
}
prom=sumb/n;
cout <<"El promedio es de: "<<prom<<endl;
}