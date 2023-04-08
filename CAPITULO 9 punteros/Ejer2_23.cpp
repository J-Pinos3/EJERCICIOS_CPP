/*
Escribir un programa para generar una matriz de 4 x 5 númer os reales, 
y multiplique la primer a columna por otr a cual-
quiera de la matriz y mostrar la suma de los productos.
El programa debe descomponerse en subprogramas y utilizar pun-
teros para acceder a los elementos de la matriz.
*/
#include <iostream>
using namespace std; 

const int FILAS = 4;
const int COLUMNAS = 5;

void mostrarMatriz1(const int *mat);
void multiplicarColumnas(int *arr, int (*matr)[COLUMNAS], int n_col);
void mostrarcolumna(const int* mat);



int main(int argc, char const *argv[])
{
    
    int matr[FILAS][COLUMNAS] = { {1,2,3,4,5},{3,6,9,12,15},{2,4,6,8,10},{10,20,30,40,50} };
    int arr[FILAS] = {};
    
    mostrarMatriz1(&matr[0][0]);
    
    multiplicarColumnas(arr, matr, 3);//multiplicamos la primera columna por la segunda

    mostrarcolumna(arr);
    return 0;
}

void mostrarMatriz1(const int *mat){
    cout <<"La matriz ingresada es: "<<endl;
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            cout << *(mat+i*COLUMNAS + j) << " ";
        }
        cout <<endl;
    }
    cout << endl;
}
//fin de la función mostrarMatriz1


void multiplicarColumnas(int *arr, int (*matr)[COLUMNAS], int n_col){

    n_col--;//se resta 1 xq la primera columna es 0 la siguiente 1 ...
    for(int i = 0; i < FILAS; i++){
        arr[i] = **(matr+i) * (*(*(matr+i)+n_col));
    }
}

void mostrarcolumna(const int* mat){
    cout <<"la columna multiplicada es: "<<endl;
    for(int i = 0; i < FILAS; i++){
        cout << mat[i]<<" ";
    }
    cout <<endl;
}