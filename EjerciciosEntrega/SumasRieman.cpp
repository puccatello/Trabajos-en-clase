#include<iostream>
#include<cstdlib>
#include<ctime>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int i,n,a,b,f, delx, x_i,  j,k, aja;
    int  respuesta[k];
    aja=0;
     a=1;
    b=3;
    
cout<<"Ingrese n ";
    cin>>k;
    for(n=1;n<k+1; ++n){
        delx=(b-a)/n;
        i=(n*(n+1))/2;
        x_i=a+(delx*i);
        f=(2*x_i)+1;
        respuesta[n]=f*delx;
        cout<<"delta x"<<delx<<endl;
        cout<<"i"<<i<<endl;
        cout<<"x_i"<<x_i<<endl;
        cout<<"f"<<f<<endl;        
        }

        for(int i=0;i<n;i++){
            cout<<respuesta[i]<<endl;
        }

        for(int i=0;i<n;i++){
            aja+=respuesta[i];
        }
        cout<<aja<<endl;


}