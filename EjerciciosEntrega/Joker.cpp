<<<<<<< HEAD
 #include<iostream>
#include<cstdlib>
#include<ctime>
#include <cmath>
#include <vector>

using namespace std;
int main(){
    cout <<"Bienvenido al JOKER de la primitiva. El sistema te generará un boleto aleatorio y luego se hará el sorteo, si tienes 7 aciertos ¡GANAS! Entonces, buena suerte."<<endl;
    int i, iguales, n,m, resta, x;
    n=7;
    m=7;
    int A[n], B[m];
    int contador[n]={0,0,0,0,0,0,0};


srand(time(NULL));

for(int i=0;i<n;i++){
    A[i] = rand() %9; 
    }

cout <<"Tu boleto es ";
for(int i=0;i<n;i++){
    cout<<A[i];
}
cout<<"\n";


for (int j = 0; j < m; j++){
    x= rand() %9;
    cout<<"La valota "<<j+1<<" de la loteria es "<<x<<endl;
    B[j]=x;
    }
    cout<<"\n";
iguales=0;



for(int i = 0; i <n;i++){
    for(int j = 0; j <m;j++){
             
        if(A[i]==B[j]){
            contador[i]=contador[i]+1;
    }}}

for (int i=0; i < n; i++){
    if(contador[i]!=0){
        iguales+=1;
    }else{
        iguales=iguales;
    }
}
if(iguales==7){
    cout<<"¡Ganaste el premio mayor!";
}
else if(iguales==6){
    cout<<"Woow estuviste muy cerca.";
}
else{
    cout<<"No ganaste, suerte para la próxima."<<endl;
}

=======
 #include<iostream>
#include<cstdlib>
#include<ctime>
#include <cmath>
#include <vector>

using namespace std;
int main(){
    int i, iguales, n,m, resta, x;
    n=7;
    m=7;
    int A[n], B[m];
    int contador[n]={0,0,0,0,0,0,0};


srand(time(NULL));

for(int i=0;i<n;i++){
    A[i] = rand() %9; 
    }

cout <<"Tu boleto es ";
for(int i=0;i<n;i++){
    cout<<A[i];
}
cout<<"\n";


for (int j = 0; j < m; j++){
    x= rand() %9;
    cout<<"La valota "<<j+1<<" de la loteria es "<<x<<endl;
    B[j]=x;
    }
    cout<<"\n";
iguales=0;



for(int i = 0; i <n;i++){
    for(int j = 0; j <m;j++){
             
        if(A[i]==B[j]){
            contador[i]=contador[i]+1;
    }}}

for (int i=0; i < n; i++){
    if(contador[i]!=0){
        iguales+=1;
    }else{
        iguales=iguales;
    }
}
if(iguales==7){
    cout<<"¡Ganaste el premio mayor!";
}
else if(iguales==6){
    cout<<"Woow estuviste muy cerca.";
}
else{
    cout<<"No ganaste, suerte para la próxima."<<endl;
}

>>>>>>> 54be16fb0d0cf993e55345e1e5afe2f4e98fdd22
}