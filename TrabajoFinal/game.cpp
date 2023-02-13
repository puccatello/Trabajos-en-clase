#include <stdio.h>
#include <iostream>
#include <new>
#include<time.h>
#include<omp.h>

#define XLIMIT 25
#define YLIMIT 25

using namespace std;

int **A, suma=0, **B, n=0;

void comi(){

    int vivos=0;
    A=new int*[XLIMIT];
	B = new int*[XLIMIT];
	for(int i=0; i<XLIMIT; ++i){
		A[i] = new int[YLIMIT];
		B[i] = new int[YLIMIT];
	}

    srand(time(NULL));
    for (int i = 0; i < XLIMIT; i++){
        for (int j = 0; j < YLIMIT; j++){
            A[i][j] = rand() % 2;
            B[i][j] = 0;
        }
    }
    
    for (int i = 0; i < XLIMIT; i++){
        for (int j = 0; j < YLIMIT; j++){
            if(A[i][j]==1){
                cout <<char(219)<<char(219);
            }
            else{cout << "  ";}
        }
        cout <<"\n";
    }
    cout<<endl;

    for(int i=0; i<XLIMIT; ++i){
    for(int j=0; j<YLIMIT; ++j){
        if(A[i][j]==1){
            vivos=vivos+1;
        }else{
            vivos=vivos;}}}
            cout<<"Celulas vivas: "<<vivos<<endl;
            cout<<endl;
}

int sobrevive(int x, int y){
	int i, j;
	int aux = 0; 
	if(!x || !y || (x==XLIMIT-1) || (y==YLIMIT-1)){
		return 0;
	}
	else{
		for(i=x-1; i<=x+1; ++i){
			for(j=y-1; j<=y+1; ++j){
				aux+=A[i][j];		
			}
		}
		aux-=A[x][y];
		aux = (A[x][y]) ? ((aux == 2)||(aux == 3)) :(aux == 3);
		return aux;
	}
    
}

void Juego(){
    #pragma omp parallel for schedule(dynamic,1) num_threads(2)
	for(int i=0; i<XLIMIT; ++i){
		for(int j=0; j<YLIMIT; ++j){
			B[i][j] = sobrevive(i, j);		
		}
	}
    for(int i=0; i<XLIMIT; ++i){
        for(int j=0; j<YLIMIT; ++j){
            if(B[i][j]==1){
                cout <<char(219)<<char(219);
            }
            else{cout << "  ";}
} cout<<"\n";
}cout<<endl;

int vivos=0;
for(int i=0; i<XLIMIT; ++i){
    for(int j=0; j<YLIMIT; ++j){
        if(B[i][j]==1){
            vivos=vivos+1;
        } else{vivos=vivos;}}}
cout<<"Celulas vivas: "<<vivos<<endl;
cout<<endl;
}

void cambio(){
	int **C;
    C=A;
    A=B;
    B=C;
}

int main(){
    int vivos,m;
    double inicio, fin;
    cout<<"Poblacion de celulas iniciales. Generacion: "<<n<<endl;
    comi();
    cout<<"Cuantas generaciones le gustaria analizar? ";
    cin >> m;
    cout<<endl;
    n=n+1;
    inicio=omp_get_wtime(); 
    while(n<=m){ 
    cout<<"Generacion: "<<n<<endl;
    Juego();
    cambio();
    n=n+1;
    }
    fin=omp_get_wtime();
    cout <<"El tiempo es: " << fin-inicio <<endl;
}