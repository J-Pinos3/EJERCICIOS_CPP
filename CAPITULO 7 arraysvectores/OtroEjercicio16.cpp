#include <iostream>
#include <cstdlib>
using namespace std;

const int orden = 11; //necesariamente debe ser const originalmente era 3

void ingresar(int arr[][orden], int n);
void imprimir(int arr[][orden], int n);

int main() {

/*
int tamanio = 0;
cout <<"Ingrese el orden de la matriz"<<endl;
cin >> tamanio;


int matriz[tamanio][tamanio] = {};
if(tamanio > 5){
  cout <<" N-M-M-S"<<endl;
}
*/

// en las columnas necesariamente debe ser igual al valor de orden(constante) primer comentaio

// el valor de la constante le puse 11 y ahora a la matriz le declaro como de 4X4 segundo comentario(cambio)
int matriz[4][11] = {}; //el valor de las columnas DEBE SER IGUAL A la constante orden
ingresar(matriz, 3);//si le paso matriz como argumento a la función necesariamente debe ser[X][11] porque al declarar la funcion
                    //le puse que ell valor de las columnas es 11
                    //SI NO USO A matriz en una de ESTAS funciones si puedo ponerle cualquier valor [A][V]

//al poner(matriz, <3>) estoy diciendo que el orden de la matriz es "3x3", pero quedan muchos espacios de memoria libres en las columnas
//xq columnas ahora es 11
system("cls");

cout <<"los datos de la matriz son"<<endl;
imprimir(matriz, 3);


    return 0;
}

//*****************************
void ingresar(int arr[][orden], int n){
  for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cout <<"numero ["<<i<<"]"<<"["<<j<<"]: ";
        cin >> arr[i][j];
      }

  }

}// fin de la función ingresar


void imprimir(int arr[][orden], int n){
  for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cout << arr[i][j];
      }
      cout <<endl;


  }

}// fin de la función imprimir
