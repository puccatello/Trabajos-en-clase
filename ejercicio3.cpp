#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

int main()
{
    float a, rad, coseno, seno, A1[2][2], A2[2][2], A3[2][2], A4[2][2], B[2][2], C1[2][2], C2[2][2], C3[2][2], C4[2][2];
    double k=1, n=2, m=2;

    cout<<"Lectura de vertice A1."<<endl;
    for(int i=0; i<k; ++i)
        for(int z=0; z<m; ++z)
        {
            cout<<"Ingrese valor para A1["<<i<<"]["<<z<<"]: ";
            cin>>A1[i][z];
        }
    
    cout<<"Lectura de vertice A2."<<endl;
    for(int i=0; i<k; ++i)
        for(int z=0; z<m; ++z)
        {
            cout<<"Ingrese valor para A2["<<i<<"]["<<z<<"]: ";
            cin>>A2[i][z];
        }

    cout<<"Lectura de vertice A3."<<endl;
    for(int i=0; i<k; ++i)
        for(int z=0; z<m; ++z)
        {
            cout<<"Ingrese valor para A3["<<i<<"]["<<z<<"]: ";
            cin>>A3[i][z];
        }

    cout<<"Lectura de vertice A4."<<endl;
    for(int i=0; i<k; ++i)
        for(int z=0; z<m; ++z)
        {
            cout<<"Ingrese valor para A4["<<i<<"]["<<z<<"]: ";
            cin>>A4[i][z];
        }



    cout<<"Indique el valor del ángulo theta:";
    cin>>a;

rad=a*PI/180;
 seno=sin(rad); 
 coseno=cos(rad);

    for(int z=0; z<m; ++z)
        for(int j=0; j<n; ++j)
            B[z][j]=0;

            B[0][0]=coseno;
            B[0][1]=seno;
            B[1][0]=-seno;
            B[1][1]=coseno;

    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            C1[i][j] = 0;

    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C1[i][j] += A1[i][z] * B[z][j];

    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            C2[i][j] = 0;

    // Generamos la matriz C.
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C2[i][j] += A2[i][z] * B[z][j];

    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            C3[i][j] = 0;

    // Generamos la matriz C.
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C3[i][j] += A3[i][z] * B[z][j];

    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            C4[i][j] = 0;

    // Generamos la matriz C.
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C4[i][j] += A4[i][z] * B[z][j];

cout<<"Matriz A1: ";
    for(int i=0; i<k; ++i)
    {
        for(int z=0; z<m; ++z)
        {
            cout<<A1[i][z]<<" ";
        }
        cout<<endl;
    }

cout<<"Matriz A2: ";
    for(int i=0; i<k; ++i)
    {
        for(int z=0; z<m; ++z)
        {
            cout<<A2[i][z]<<" ";
        }
        cout<<endl;
    }

cout<<"Matriz A3: ";
    for(int i=0; i<k; ++i)
    {
        for(int z=0; z<m; ++z)
        {
            cout<<A3[i][z]<<" ";
        }
        cout<<endl;
    }

cout<<"Matriz A4: ";
    for(int i=0; i<k; ++i)
    {
        for(int z=0; z<m; ++z)
        {
            cout<<A4[i][z]<<" ";
        }
        cout<<endl;
    }
    
cout<<"Matriz B: ";
for (int z= 0; z< m; z++)
    {
        for (int j = 0; j <n ; j++)
        {
            cout<<B[z][j]<<endl;
        }

    }

cout<<"Matriz C1: ";
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<C1[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"Matriz C2: ";
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<C2[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"Matriz C3: ";
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<C3[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"Matriz C4: ";
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<C4[i][j]<<" ";
        }
        cout<<endl;
    }
}