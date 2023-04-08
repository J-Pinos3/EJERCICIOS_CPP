#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
1. Turn the code that we wrote for insertionSort
into an insertionSort function that works for any
sized array.
*/



/*
2. Write a program that takes in 50 values and prints out
 the highest, the lowest, the average and
then all 50 input values, one per line.
*/

int elemento_Menor(int array[], int tamanio, int indice);
void cambiar(int array[], int primer_indice, int segundo_indice);
void ordenar(int array[], int tamanio);
void mostrar_Array(int array[], int tamanio);

const int TAM = 20;

int main() {

//EJERCICIO 1
/*

int tamanio;
cout <<"Ingrese el tamaño del arreglo"<<endl;
cin >> tamanio;
int arr[TAM] = {};

cout <<"Ingrese los valores del arreglo"<<endl;
for(int i = 0; i < tamanio; i++){
  cout <<i+1<<": ";
  cin >>arr[i];
}


system("cls");


cout <<" arreglo original "<<endl;
mostrar_Array(arr, tamanio);
cout <<endl;

ordenar(arr, tamanio);

cout <<" arreglo ordenado "<<endl;
mostrar_Array(arr, tamanio);
*/



//EJERCICIO 2

srand(static_cast<unsigned int>( time(0) ) );

float arr1[TAM] = {};
int tamanio;

float suma = 0;
float menor = 100;
float mayor = 0;

cout <<"Ingrese el tamaño del arreglo"<<endl;
cin >> tamanio;

cout <<"Ingresando los elementos del arreglo..."<<endl;
for(int i = 0; i < tamanio; i++){
  arr1[i] = -10 + rand() % 50;
}

cout <<endl<<endl;
for(int i = 0; i < tamanio; i++){
    if(arr1[i] < menor){
      menor = arr1[i];
    }

    if(arr1[i] > mayor){
      mayor = arr1[i];
    }

    suma = suma + arr1[i];
}

cout <<"El arreglo es"<<endl;
for(int i = 0; i < tamanio; i++){

    cout <<"["<<arr1[i]<<"] ";

}
cout <<endl<<endl;
cout <<"El mayor elemento es: "<< mayor<<endl;
cout <<"El menor elemento es: "<< menor<<endl;
cout <<"El promedio de los elementos del array es: "<<suma/tamanio<<endl;


    return 0;
}

void ordenar(int array[], int tamanio){

  for(int i = 0; i < tamanio; i++){
      int index = elemento_Menor(array, tamanio, i);
      cambiar(array, i, index);
  }


}//fin de la función ordenar


int elemento_Menor(int array[], int tamanio, int indice){
int index_menor_elemento = indice;
    for(int i = indice + 1; i < tamanio; i++ ){
          if(array[i] < array[index_menor_elemento]){
                index_menor_elemento = i;
          }
    }

  return index_menor_elemento;
}//fin de la funcion que encuentra el menor elemento


void cambiar(int array[], int primer_indice, int segundo_indice){
int temp = array[primer_indice];
array[primer_indice] = array[segundo_indice];
array[segundo_indice] = temp;

}//fin de la funcion cambiar


void mostrar_Array(int array[], int tamanio){
  for(int i = 0; i < tamanio; i++){
    cout <<"["<<array[i]<<"]";
  }

}//fin de la función mostrar array
