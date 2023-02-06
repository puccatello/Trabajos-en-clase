#include<iostream>
using namespace std;
int main(){
    cout <<"El siguiente programa evalua las matrices si se pueden multiplicar o no y multiplica las matrices" << endl;
    int n, i, j, k, m, a, b, a1;
    cout<<"Ingrese el número de FILAS de la 1 matriz ";
    cin >> n;
    cout<<"Ingrese el número de COLUMNAS de la 1 matriz ";
    cin >> a;
    cout<<"Ingrese el número de FILAS de la 2 matriz ";
    cin >> b;
    cout<<"Ingrese el número de COLUMNAS de la 2 matriz ";
    cin >> a1;
    if(a1==n){
        float A[a][n], B[n][b], C[a][b];
        for(int i=0; i<a; ++i)
        for(int j=0; j<n; ++j)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
        for(int j=0; j<n; ++j)
        for(int k=0; k<b; ++k)
        {
            cout<<"Ingrese valor para B["<<j<<"]["<<k<<"]: ";
            cin>>B[j][k];
        }
        for(int i=0; i<a; ++i)
        for(int j=0; j<b; ++j)
            C[i][j] = 0;

    for(int i=0; i<a; ++i)
        for(int j=0; j<b; ++j)
            for(int k=0; k<n; ++k)
                C[i][j] += A[i][k] * B[k][j];
    
    cout<<"Matriz C: ";
    for(int i=0; i<a; ++i)
    {
        for(int j=0; j<b; ++j)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
        

    }else{
        cout<<"No se puede hacer la multiplicación de las matrices"<<endl;
    }


}