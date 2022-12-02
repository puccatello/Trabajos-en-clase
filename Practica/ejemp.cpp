#include <iostream>
#include <algorithm>

using namespace std;

/*
Método para hallar el Máximo Común Divisor
*/
int mcd(int num1, int num2) {
    int mcd = 0;
    int a = std::max(num1, num2);
    int b = std::min(num1, num2);
    do {
        mcd = b;
        b = a%b;
        a = mcd;
    } while(b!=0);
    return mcd;
}

/*
Método para hallar el Mínimo Común Múltiplo
*/
int mcm(int num1, int num2) {
    int mcm = 0;
    int a = std::max(num1, num2);
    int b = std::min(num1, num2);
    mcm = (a/mcd(a,b))*b;
    return mcm;
}

/*
Método principal
*/
int main() {
    int num1, num2;
    // Pedimos los numeros al usuario
    cout << "Ingrese el primer numero: \n";
    cin >> num1;
    cout << "Ingrese el segundo numero: \n";
    cin >> num2;
    //Mostramos el resultado en pantalla
    cout << "El M.C.M. entre "<<num1<<" y "<<num2<<" es: "<<mcm(num1, num2);
    return 0;
}