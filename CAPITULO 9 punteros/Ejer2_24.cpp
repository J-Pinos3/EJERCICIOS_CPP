/*
10.4. Codificar funciones para sumar a una fila de una matriz otra fila;
intercambiar dos filas de una matriz, y sumar a una fila
una combinación lineal de otras. Nota: debe realizarse con punteros y aritmética de punteros.
*/

#include <iostream>
using namespace std;

const int FILAS = 4;
const int COLUMNAS = 4;

void mostrarMatriz(const int *matr);
void sumarFila( int (*matriz)[COLUMNAS], int fila1, int (*tabla)[COLUMNAS], int fila2);
void intercambiarFilas( int (*matriz)[COLUMNAS], int fila1, int (*tabla)[COLUMNAS], int fila2);

int main(int argc, char const *argv[])
{

    int matr[FILAS][COLUMNAS] = { {1,2,3,4},{3,6,9,12},{2,4,6,8,},{10,20,30,40} };
    int tabla[FILAS][COLUMNAS] = { {-1,-2,-3,-7},{0,1,2,3},{3,5,7,9},{20,40,60,80} };

    mostrarMatriz(&matr[0][0]);
    sumarFila(matr,1, tabla,4);
    mostrarMatriz(&matr[0][0]);
    intercambiarFilas(matr, 4, tabla, 1);
    mostrarMatriz(&matr[0][0]);

    return 0;
}


void sumarFila( int (*matriz)[COLUMNAS], int fila1, int (*tabla)[COLUMNAS], int fila2){

    fila1--;        fila2--;
    for(int i = 0; i < COLUMNAS; i++){
        *(*(matriz+fila1)+i) += *(*(tabla+fila2)+i);
    }

}

void mostrarMatriz(const int *matr){
        cout <<"La matriz ingresada es: "<<endl;
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            cout << *(matr+i*COLUMNAS + j) << " ";
        }
        cout <<endl;
    }
    cout << endl;
}

void intercambiarFilas( int (*matriz)[COLUMNAS], int fila1, int (*tabla)[COLUMNAS], int fila2){
    fila1--;        fila2--;
    int arr1[FILAS] = {}, arr2[FILAS] = {};
    for(int i = 0; i < COLUMNAS; i++){
        arr1[i] = *(*(matriz+fila1)+i);
        arr2[i] = *(*(tabla+fila2)+i);
    }

    for(int i = 0; i < FILAS; i++){
        *(*(matriz+fila1)+i) = arr2[i];

        *(*(tabla+fila2)+i) = arr1[i];
    }
}