#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3,i,num;
    cout<<"Ingrese la cantidad de números de su serie de Fibonacci ";
    cin >> num;
    n1=0;
    n2=1;
    cout<<n1<<" "<<n2<<" ";
    for (i=0;i<num;i++){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;n2=n3;
    }
}