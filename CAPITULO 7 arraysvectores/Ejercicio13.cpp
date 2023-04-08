#include <iostream>
#include <cstdlib>
using namespace std;
/*
7.1. Escribir un programa que lea 10 números enteros, los almacene en un vector,
y calcule la suma de todos ellos, así como su
media aritmética.


7.2. Un vector se dice que es simétrico si el elemento que ocupa
 la posición i_ésima coincide con el que ocupa la posición
n - i_ésima, siempre que el número de elementos que almacene el vector sea n.
 Por ejemplo el vector que almacena los valores 2, 4, 5, 4, 2 es simétrico.
 Escribir una función que decida si el vector de n datos que r ecibe como parámetr o es
simétrico.
*/

bool simetrica (float v[], int n);

int main() {
//EJERCICIO 1
/*
const int TAM = 10;
int suma = 0;
int arr[TAM] = {};
cout <<"Ingrese los valores del array"<<endl;
for(int i = 0; i < TAM; i++){
  cin >> arr[i];
  suma += arr[i];
}

cout <<"El promedio es: "<<suma/TAM<<endl;
*/


//EJERCICIO 2//se parece pero creo que no es lo que pide el autor
/*
int arr1[6] = {2,5,8,9,5,2};

cout <<"ARREGLO ANTES DEL CAMBIO"<<endl;

for(int i = 0; i < 6; i++){
  cout <<"["<<arr1[i]<<"] ";
}

cout <<endl<<endl;

int i = 0, j = 6, aux;
// PARA ESTA PRUEBA VOY A USAR UNA MODIFICACION DEL ALGORITMO BUBBLE

  for(i = 0; i < 6; i++){
    j--;// j empieza con 5 es decir la ultima posicion del array

      if(j > i){

          aux = arr1[i];
          arr1[i] = arr1[j];
          arr1[j] = aux;

      }



  } // fin del for

// SE IMPRIME EL ARRAY MODIFICADO
cout <<"ARREGLO LUEGO DEL CAMBIO"<<endl;
for(int i = 0; i < 6; i++){
  cout <<"["<<arr1[i]<<"] ";
}
*/


//EJERCICIO 2 SEGUN LUIS JOYANES AGUILAR
int tamanio = 0;
cout <<"ingrese el tamanio del array"<<endl;
cin >> tamanio;
float arr2[tamanio];
cout <<"Ingrese los elementos del array"<<endl;
for(int i = 0; i < tamanio; i++){
  cin >> arr2[i];
}

if( simetrica(arr2, tamanio) ){
  cout <<"EL ARRAY es simétrico"<<endl;
}


    return 0;
}

//************************************

bool simetrica (float v[], int n){

int i;
bool sime = true;
  for (i = 0; i <= n / 2 && sime == true; i++)
      if (v[i] != v[n - 1 - i])
          sime = false;


return sime;

}// FIN DE LA FUNCION simetrica
