/*INTEGRANTES:
DANIEL PARRA PARRA-2191072
Daniel Morales-2200812
Paula Tello-2190744
Jefferson Serrano-2200795

*/

#include <iostream> 
#include <math.h> //Funcion pow y abs
#include <iomanip> //Funcion setprecision 

//Definimos Pi para hacer una compración con el valor aproximado
#define PI 3.14159265358979323846;
using namespace std;
int main()
{
//Declaramos variables,donde i es el iterador del bucle for
//n es la cantidad de terminos de la serie y suma y sum las variables 
// a usar para hallar pi

int i;
long long int n;
double suma,sum;

cout<<"\n\n\n";
cout<<"\t\t\t\t#############\n";
cout<<"\t\t\t\t##         ##\n";
cout<<"\t\t\t\t#  ~~   ~~  #\n";
cout<<"\t\t\t\t#  ()   ()  #\n";
cout<<"\t\t\t\t(     ^     )\n";
cout<<"\t\t\t\t |         | \n";
cout<<"\t\t\t\t |  {===}  | \n";
cout<<"\t\t\t\t  |       |  \n";
cout<<"\t\t\t\t    ----- \n";
cout<<"\t\t\t\t BIENVENIDO\n";
cout<<"El siguiente programa calcula el termino de pi con la formula de Leibniz. \n ";

cout<<"Digite el valor n de terminos de la serie : ";
cin>>n;
suma=0;
sum=0;
//Recorremos la serie 
for(int i=0; i<n; i++)
 {
  suma=4*(pow(-1,i)/(2*i+1));
  sum=sum + suma;
 }
cout<<"Su valor aproximado de Pi es de: ";
// Esto nos permitira para este caso , imprimir 10 digitos de pi
cout<<fixed<<setprecision(10) << sum << '\n';


//Diferencia entre el valor real y el aproximado 
double p,error;
p=PI;
cout<<"El valor de Pi original es de: "<<p<<"\n";

error=abs( ( (sum-p)/(p) )*100 );

cout<<"La diferencia entre ambos valores es de: "<<error<<"% ";

}