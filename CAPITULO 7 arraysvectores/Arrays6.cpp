#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;


const size_t filas = 2;
const size_t columnas = 3;
void imprimirArreglo(const array< array<int, columnas>, filas > &arr);

int main() {
//ARRAYS MULTIDIMENSIONALES

  /*

int filas = 1, columnas = 1, dato = 1;
cout <<"Ingrese el numero de filas y columnas. \"seguidas de un enter\" "<<endl<<endl;
cin >> filas >> columnas;
int arr[filas][columnas] = { {},{} };

cout <<"Ingrese los valos de la matriz"<<endl<<endl;
for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
        cout <<"["<<i<<"]"<<"["<<j<<"]: ";
        cin >> dato;
        arr[i][j] = dato;
    }

}

system("pause");
system("cls");

cout <<"Los valores de la matriz son. "<<endl<<endl;
for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
        cout <<"["<<arr[i][j]<<"] ";
    }
    cout <<endl;
}

*/

//ARRAYS MULTIDIMENSIONALES FORMA NUEVA


int arrarray[2][3] = { {9,8,7},{5,4,6} };
array< array<int, columnas>, filas> arreglo1 = {1,2,3,4,5,6};
array< array<int, columnas>, filas> arreglo2 = {2,4,6,8,10,12};

cout <<"Los valores del arreglo1 por fila son: "<<endl;
imprimirArreglo(arreglo1);
cout <<endl<<endl<<endl;

cout <<"Los valores del arreglo2 por fila son: "<<endl;
imprimirArreglo(arreglo2);
cout <<endl<<endl<<endl;

cout <<"Los valores del arrarray (viejo) por fila son: "<<endl;
//imprimirArreglo(arrarray); //ESTA FUNCION NO VALE CON LOS ANTIGUOS ARRAYS
for(int i = 0; i < 2; i++){//filas
    for(int j = 0; j < 3; j++){
      cout <<arrarray[i][j]<<" ";
    }

  cout <<endl;
}


    return 0;
}
//******************************

void imprimirArreglo(const array< array<int, columnas>, filas > &arr){
      // itera a travéz de las filas del arreglo
      for(auto const &fila : arr){

            for(auto const &elemento : fila){
              cout <<elemento<<" ";
            }
         cout <<endl;
      }

} // fin funcion imprimirArreglo
