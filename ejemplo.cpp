#include <iostream> 
#include <math.h>
using namespace std;
int main(){
    int n;
    double suma=0;
    cout<<"Introduzca el numero de terminos: ";
    cin >>n;
    for(int i=0; i<n; i++) {
        suma=suma+4*(pow(-1,i)/(2.0*i+1));
    }
    cout<<suma;

}