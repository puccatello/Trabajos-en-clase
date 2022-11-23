#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
 
    long long int n;
 
    int i;
 
    double sum = 0;
 
    cout << "Numero de terminos de la serie = ";
 
    cin >> n;
 
    for (i=0; i<n; i++){
        sum=sum+pow(-1, i) / (2.0*i+1);
    
 
    }
     
    cout << sum << "\n";
 
    return 0;
 
}