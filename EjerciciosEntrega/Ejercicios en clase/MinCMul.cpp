#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, mcm, min;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    if (a<b){
        min=a;
    }
    else{
        min=b;
    }
    for (int i=1; i<=min; i++) {
        if (a%i==0 && b%i==0) {
            int c = i;
            mcm = (a*b)/c;
        }
    }
    cout << "El M.C.M. entre es: "<<mcm;
}
