#include <iostream>
#include <cstdlib>
using namespace std;
/*
Se dice que una matriz tiene un punto de silla si
alguna posición de la matriz es el menor valor de su fila,
y a la vez el mayor de su columna.
 Escribir una función que tenga como parámetr
 o una matriz de números reales, y calcule y escriba los
puntos de silla que tenga, así como las posiciones correspondientes.
*/
const int orden = 5;

void puntoSilla(float arr[][orden], int n);
void puntosdesilla(float arr[][orden], int n);


int main() {
int tama;
cout <<"Ingrese el orden de la matriz \"cuadrada\"  "<<endl;
cin >> tama;
float matriz[5][orden] = {};

cout <<"Ingrese los elementos de la matriz"<<endl;
for(int i = 0; i < tama; i++){

    for(int j = 0; j < tama; j++ ){
      cout <<"["<<i<<"]"<<" ["<<j<<"]: ";
      cin >> matriz[i][j];
    }

}

system("cls");

//puntoSilla(matriz, tama);
puntosdesilla(matriz, tama);




   return 0;
}


void puntoSilla(float arr[][orden], int n){
float menorFilas[n]={};
float maxColumnas[n]={};

// inicializa el array menor filas
for(int i = 0; i < n; i++ ){
  menorFilas[i] = 999;
}

// inicializa el array max columnas
for(int i = 0; i < n; i++ ){
  maxColumnas[i] = -999;
}


for(int i = 0; i < n; i++ ){//trabaja con las filas

    for(int j = 0; j < n; j++ ){//trabaja con las columnas

        if(arr[i][j] > maxColumnas[j] ){
          maxColumnas[j] = arr[i][j];
        }

        if(arr[i][j] < menorFilas[i]){
          menorFilas[i] = arr[i][j];
        }


    }

}


for(int i = 0; i < n; i++){

    for(int j = 0; j < n; j++){
        if(menorFilas[i] == maxColumnas[j]){
          cout <<"Punto silla: "<<i<<", "<<j<<endl;
        }

    }


}







} //fin de la función puntos silla


void puntosdesilla(float arr[][orden], int n){
//segun luis joyanes aguilar

int i, j, mayor, im;

bool correcto;
cout << " puntos de sillas\n";
for(j = 0; j < n; j++){
    mayor = arr[0][j];
    im = 0;
    correcto = true;

      for(i = 1; i < n; i++){
          if(mayor < arr[i][j]){
              mayor = arr[i][j];
              im = i;
          }
          i = 0;
          while( (correcto == true)and(i < n) ){
              correcto = (mayor <= arr[im][i]);
              i++;
          }

          if(correcto == true){
            cout <<"silla "<<im<<" "<<j<<" "<<arr[im][j]<<endl;
          }


      }



}




} //fin fucniion puntosdesilla
