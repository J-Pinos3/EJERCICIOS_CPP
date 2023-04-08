#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
/*

(Resumen de ventas) Use un arreglo bidimensional para resolver el siguiente problema: una compañía
tiene cuatro vendedores (1 a 4) que venden cinco productos distintos (1 a 5). Una vez al día, cada vendedor pasa
una nota por cada tipo de producto vendido. Cada nota contiene lo siguiente:
a) El número del vendedor.
b) El número del producto.
c) El valor total en dólares de ese producto vendido en ese día.
Así, cada vendedor pasa entre 0 y 5 notas de venta por día. Suponga que está disponible la información sobre todas
las notas del mes pasado. Escriba un programa que lea toda esta información para las ventas del último mes (los
datos de un vendedor a la vez) y que resuma las ventas totales por vendedor, por producto. Todos los totales deben
guardarse en el arreglo bidimensional ventas. Después de procesar toda la información del mes pasado, muestre
los resultados en formato tabular, en donde cada columna represente a un vendedor específico y cada fila
 represente a un producto. Saque el total de cada fila para obtener las ventas totales de cada producto durante el último mes.
Saque el total de cada columna para obtener las ventas totales por cada vendedor durante el último mes.
Su impresión tabular debe incluir estos totales cruzados a la derecha de las filas totalizadas, y en la parte inferior de las
columnas totalizadas.
*/
int main() {
int cant_productos = 5;
int cant_vendedores = 4;
// datos asigna a cada vendedor la cantidad de producto vendido
int datos[cant_productos][cant_vendedores] = { {5,6,7,8},{1,0,9,1},{2,2,0,0},{1,3,2,0},{0,0,0,0} };
int ventas[cant_productos][2] = {};
int precios[cant_productos] = {10,20,30,40,50};
int suma_ventas = 0;

for(int i = 0; i < cant_productos; i++){

    for(int j = 0; j < cant_vendedores; j++){

        if(datos[i][j] > 0){
            ventas[i][0] = ventas[i][0] + (datos[i][j] * precios[i]);
        }


    }

}

//********

for(int columna = 0; columna < cant_vendedores; columna++){

      for(int fila = 0; fila < cant_productos; fila++){

          if(datos[fila][columna] > 0){
            ventas[columna][1] = ventas[columna][1] + (datos[fila][columna] * precios[fila]);
          }

      }

}

//***********

cout <<"VENDEDORES"<<endl<<endl;
cout<<setw(9)<<"1"<<setw(8)<<"2"<<setw(8)<<"3"<<setw(8)<<"4"<<setw(28)<<"TOTAL DE LOS PRODUCTOS"<<endl<<endl;

for(int i = 0; i < cant_productos; i++ ){

cout << i+1<<" ";
    for(int j = 0; j < cant_vendedores; j++){
      cout <<"\t"<<datos[i][j]<<" ";

          if(j == 3){
            cout <<"\t"<<ventas[i][0]<<" ";
          }

    }
cout <<endl;

}

//******

for(int i = 0; i < cant_vendedores; i++){
  cout << ventas[i][1]<<" ";
}









    return 0;
}
