#include <iostream>
#include <cstdlib>
using namespace std;
/*

EJEMPLO 7.20. Funciones que r eciben como parámetr o dos matrices cuadr adas las suman y las multiplican. La
suma y producto de matrices vienen definidas por las expresiones:
Suma c(i, j) = a(i, j) – b(i, j)
Producto c(i, j) = Σn–1k=0
a(i, k) * b(k, j)

*/

void Suma(float a[][3], float b[][3], float c[][3], int n);
void Producto(float a[][3], float b[][3], float c[][3], int n);
void IngresarDatos(float a[][3], int n);
void ImprimirArray(float a[][3], int n);

//***********************

int main() {
const int fila = 3;
const int columna = 3;
float matrizA[fila][columna] = {};
float matrizB[fila][columna] = {};
float matrizSUMA[fila][columna] = {};
float matrizProducto[fila][columna] = {};


IngresarDatos(matrizA, fila);
system("cls");
IngresarDatos(matrizB, fila);
system("cls");

Suma(matrizA, matrizB, matrizSUMA, fila );
Producto(matrizA, matrizB, matrizProducto, fila);

cout <<"Suma"<<endl;
ImprimirArray(matrizSUMA, fila);
cout <<endl<<endl;
cout <<"Producto"<<endl;
ImprimirArray(matrizProducto, fila);



    return 0;
}

//*******************
void Suma(float a[][3], float b[][3], float c[][3], int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          c[i][j] = a[i][j] + b[i][j];
        }

    }



}//fin funcion suma


void Producto(float a[][3], float b[][3], float c[][3], int n){

float acumulador = 0;

  for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){

          acumulador = 0;
          for(int k = 0; k < n; k++){
            acumulador = acumulador + (a[i][k] * b[k][j]);
          }
        c[i][j] = acumulador;
      }

  }





}// fin funcion producto


void IngresarDatos(float a[][3], int n){
    for(int i = 0; i < n; i++){
          for(int j = 0; j < n; j++){
            cout <<"["<<i<<"]"<<"["<<j<<"] ";
            cin >> a[i][j];
          }

    }


}//fin funcion IngresarDatos


void ImprimirArray(float a[][3], int n){

  for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          cout <<"["<<a[i][j]<<"] ";
        }
    cout <<endl;
  }

}// fin funcion ImprimirArray
