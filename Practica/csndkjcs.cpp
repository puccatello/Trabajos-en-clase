 #include<iostream>
#include<cstdlib>//numero aleatorio
#include<ctime>//semilla
#include <cmath>
#include <vector>

using namespace std;
int main(){
    int i,L,R,T,mitad;
    int A[20];
    bool encontrado=false;


//Creacion del arreglo
srand(time(NULL));//Inicio de generar random

for(int i=0;i<20;i++){
    A[i] = rand() %100; //Para generar los números al azar
    for(int j=0;j<(i+1);j++){
        while(A[i]==A[j] && i!=j){ //Para que no se repitan los números
            A[i] =rand() %100;
           
            }
             if (A[i]<A[j]){// Para ordenarlos de mayor a menor
                swap(A[i],A[j]);}
        }
    }


for(int i=0;i<20;i++){//Imprimir el arreglo
    cout<<A[i]<<endl;
}


//Busqueda Binaria 
L=0;
R=(sizeof(A)/sizeof(*A))-1; //El tamaño final del arreglo
mitad=round((L+R)/2);
cout<<"Ingrese su número: ";
cin >> T;
while (L<=R){
        if (A[mitad] == T){
            encontrado = true;
            break; //Para salir del While
        }
        if(A[mitad]<T){
            L = mitad+1;
        }
        else{
            R = mitad-1;
            } 
            mitad = round((L+R)/2);
            }
            if(encontrado == true){
                cout << "El número "<< T<< " ha sido encontrado en la posicion " <<mitad+1<<endl;
            }
            else{
                cout << "El número "<< T<< " NO ha sido encontrado" <<endl;
            }
           return 0;
            }

