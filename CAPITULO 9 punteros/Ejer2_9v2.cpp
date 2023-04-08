#include <iostream>
#include <string>
using namespace std;

void imprimirMatriz(int matriz[3][3]);
void imprimirMatriz_punteros( int (*matriz)[3]);
// int (*matriz)[3] significa punteo a un arreglo de 3 elementos de tipo int


int main(int argc, char const *argv[])
{
    
    int numeros[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    
    string linea(20,'*');
    
    imprimirMatriz(numeros);
    
    cout << endl << linea << endl<<endl;
    
    imprimirMatriz_punteros(numeros);

    return 0;
}



void imprimirMatriz(int matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz[i][j] <<" ";
        }
        cout <<endl;
    }

}



//checar con ejercicio 2_8
void imprimirMatriz_punteros( int (*matriz)[3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << *(*(matriz+i)+j) << "   ";
        }
        cout <<endl;
    }

}