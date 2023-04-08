#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

/*
3. Write a program that detects if a list is sorted or not,
and if it is not sorted, sort it.
*/
void mostrar_arreglo(int arr[], int n);
void Burbuja(int arr[], int n);
const int TAM = 20;

int main() {

//system("color A");

//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | BACKGROUND_INTENSITY );

bool desordenado = true;
srand(static_cast<unsigned int>( time(0) ) );
int array[TAM] = {};


int longitud;
cout <<"Ingrese la longitud del arreglo\n";
cin >> longitud;


cout <<"Ingresando los elementos del arreglo..."<<endl;
for(int i = 0; i < longitud; i++){
  array[i] = -10 + rand() % 50;
}
cout <<"\n| Elementos ingresados |"<<endl<<endl;


cout <<"Los elementos desordenados del array son"<<endl;
mostrar_arreglo(array, longitud);
cout <<endl;

system("pause");
system("cls");


//SE DETERMINA SI EL ARRAY ESTABA ORDENADO INICIALMENTE
int k = 0;
while( (k < longitud-1)&&(desordenado == false) ){
      if(array[k] < array[k+1]){
        desordenado = false;
      }
      k++;
}
cout <<endl;


if(desordenado){
  cout <<"Ordenando el arreglo..."<<endl;
  Burbuja(array, longitud);
}
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_BLUE );
cout <<endl;
cout <<"Los elementos ordenados del array son"<<endl;
mostrar_arreglo(array, longitud);




    return 0;
}

void mostrar_arreglo(int arr[], int n){
  for(int i = 0; i < n; i++){

      if(i == (n-1)){
        cout <<arr[i];
      }else{
        cout <<arr[i]<<", ";
      }

  }

}//fin de la función mostrar_arreglo


void Burbuja(int arr[], int n){
int i, j, aux;
  for(i = 0; i < n; i++){

        for(j = i + 1; j < n; j++){//el  j = i+1 es el siguiente elemento del array
            //este if compara el elemento i con todo el resto del array desde la posición i+1
              if(arr[j] < arr[i]){
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
              }

        }

  }

}//fin de la función ordenamiento Burbuja


/*

*/
