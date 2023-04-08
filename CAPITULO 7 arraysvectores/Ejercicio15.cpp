#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;
//referencia a cap 5  ejercicio 20 para lo de los numeros primos
/*

7.5. Escribir un algoritmo que calcule y escriba una tabla
 con los 100 primer os números primos. Un número es primo si sólo
tiene por divisores la unidad y el propio número.


7.6. Escribir un programa que genere aleatoriamente los datos de un vector
, lo visualice, y calcule su media m, su desviación
media dm su desviación típica dt,
*/

//7.5
void escribe(int vector[]);
bool primo(int numero);

//7.6
void imprimir(int arr[], int n);
float media(int arr[], int n);
float dm(int arr[], int n);
float dt(int arr[], int n);

int main() {
//EJERCICIO 1 MI METODO
/*
int i = 163;//ú
char a = i;
int num;
int almacena[120] = {};

int k = 1;
int total2 = 0;
int resultado;

for(num = 0; num <= 120; num++){
  k = 1;
  total2 = 0;
  while (k <= num){
    resultado = num % k;

      if( resultado == 0){
      total2 = total2 + 1;
      }


  k++;
  }

  //SI UN NUMERO (NUM) ES PRIMO SOLO ES DIVISIBLE PARA NUM Y 1
  if(total2 == 2){
  //cout <<"El n"<<a<<"mero "<<num<<" es primo"<<endl;
  almacena[i] = num;
  cout <<"El n"<<a<<"mero "<<almacena[i]<<" es primo"<<endl;
  }

}

*/


//EJERCICIO 1 SEGUN LUIS JOYANES AGUILAR
/*
const int MAX = 100;

int i, n;
int arr[MAX] = {};
arr[0] = 2;
n = 3;
for ( i = 1; i < MAX; i++) {
    while( !primo(n) ){
      n = n + 2;
    }
    arr[i] = n;
    n = n + 2;


}

escribe(arr);
*/



//EJERCICIO 2
srand(static_cast<unsigned int>( time(0) ) );
int tamanio = 0;
cout <<"Ingrese el tamaño del arreglo"<<endl;
cin >> tamanio;

int array[tamanio] = {};
if(tamanio > 15 ){
  cout <<"SEAS MAMON"<<endl;
}
for(int i = 0; i < tamanio; i++){
  array[i] = 1 + rand() % 50;
}

imprimir(array, tamanio);
cout <<endl<<endl;
cout <<"La media de los datos del array es: "<<media(array, tamanio)<<endl<<endl;
cout <<"La desviacion media de los datos del array es: "<<dm(array, tamanio)<<endl<<endl;
cout <<"La desviacion tipica de los datos del array es: "<<dt(array, tamanio)<<endl<<endl;


    return 0;
}

//********************************
void escribe(int vector[]){
int i;
cout <<setw(15)<<"lista de los 100 primeros numeros primos"<<endl<<endl;

  for(i = 0; i < 100; i++){
      if( i % 10 == 9){
        cout <<setw(5)<<vector[i]<<endl;//salta una linea cada 10 pimos
      }else{
        cout <<setw(5)<<vector[i];
      }

  }//fin del for



}//fin de la funcion escribe


bool primo(int numero){
int i, tope = sqrt(numero);
bool esPrimo = true;

i = 2;
  while ( esPrimo && (i <= tope) ) {
      esPrimo = (numero % i != 0);
      i++;
  }

return esPrimo;
}//fin de la funcion primo



void imprimir(int arr[], int n){
  cout <<"los elementos del array son"<<endl<<endl;
  for(int i = 0; i < n; i++ ){
    cout <<arr[i]<<" "<<endl;
  }

}//fin de la funcion imprimir datos


float media(int arr[], int n){
int suma = 0;
  for(int i = 0; i < n; i++){
    suma = suma + arr[i];
  }


  return suma/n;
}//fin de la funcion media


float dm(int arr[], int n){

int suma = 0;
float parametro = media(arr, n);//se obtiene la media del array
  for(int i = 0; i < n; i++ ){
    suma = suma + abs(arr[i] - parametro );
  }

  return suma/n;
}// fin dela funcion desviación media


float dt(int arr[], int n){
int suma = 0;
float parametro = media(arr, n);//se obtiene la media del array
  for(int i = 0; i < n; i++){
    suma = suma + pow( (arr[i]-parametro) ,2);
  }


  return sqrt(suma/n);
}//fin de la funcion desviación tipica
