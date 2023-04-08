#include <iostream>
#include <cstdlib>
using namespace std;
/*
Leer una matriz cuadrada de orden 5 (5 filas y 5 columnas),
y escribir la suma de todos los números que no están en la diagonal principal.
*/

int main() {
  // 5 filas y 5 columnas
int matriz[5][5] = {};
int suma = 0;
cout <<"Ingrese los valores de la matriz 5X5"<<endl;
for(int i = 0; i < 5; i++){//filas
      for(int j = 0; j < 5; j++){//columnas
        cout <<"["<<i<<"]"<<"["<<j<<"]: ";
        cin >> matriz[i][j];
      }

}
system("cls");

cout <<"La matriz 5X5 es:"<<endl;
for(int i = 0; i < 5; i++){//filas
      for(int j = 0; j < 5; j++){//columnas
        cout <<"["<<matriz[i][j]<<"] ";

      }
cout <<endl;
}
cout <<endl;

cout <<"La suma de los elementos que NO pertenecen a la diagonal principal son: "<<endl<<endl;
for(int i = 0; i < 5; i++){

    for(int j = 0; j < 5; j++){

        if( !(i==j) ){
          suma = suma + matriz[i][j];
        }

    }

}
cout <<" suma: "<<suma<<endl;











    return 0;
}
