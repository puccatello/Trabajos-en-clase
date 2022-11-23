/*INTEGRANTES:
DANIEL PARRA PARRA-2191072
Daniel Morales-2200812
Paula Tello-2190744
Jefferson Serrano-2200795 */
#include<iostream>
#include<cstdlib>//numero aleatorio
#include<ctime>//semilla

using namespace std;
int main(){

// Declaramos las variables , donde i es el iterador del bucle
//n es el tamaño del vector 
// a nos serviara para hallar el promedio 
 int i,a,n;

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
cout<<"El siguiente programa calcular la media de un arreglo de numeros aleatorio y una lista de elementos que cumplan con la condicion de ser mayores que la media. \n ";
cout<<"Ingrese el numero n: ";
cin>>n;

//Declaramos el vector con el tamaño n
 int vect[n];
//Esta es nuestra semilla de numeros aleatorios 
 srand(time(0));
//Asignamos a cada elemento de nuestro  vector un numero "aleatorio xD"
for(i=0;i<n;i++)
{
vect[i]=rand()%10;
}
// Lo imprimimos 
cout<<"Su vector aleatorio es: ";
for(i=0;i<n;i++)
{
    cout<<vect[i]<<" ";
}
//hallamos su promedio 
float prom;
prom=0;
for(i=0;i<n;i++)
{
a=0;
a=vect[i];
prom=prom +a; 
}
prom=prom/n;
cout<<"\nSu promedio es: "<<prom; 
//contamos  los elementos mayores al promedio
int k;
k=0;
for(i=0;i<n;i++)
{
    if (prom<vect[i])
    {k=k+1;
    }
}
cout<<"\nHay:"<<k<<" elementos mayores que la media";

//Definirimeos un nuevo vector para guardar los elementos mayores
// que la media 
int vectnuevo[k];
// l nos serviara para recorer las posiciones del nuevo vector
int l;
l=0;
for(i=0;i<n;i++)
{
   if(prom<vect[i])
   {
    vectnuevo[l]=vect[i];
    l=l+1;
   }
}
//Imprimimos vector  nuevo
cout<<"\nEl vector con elementos mayores a la media es:";
for(i=0;i<l;i++)
{
cout<<vectnuevo[i]<<" ";
}

}