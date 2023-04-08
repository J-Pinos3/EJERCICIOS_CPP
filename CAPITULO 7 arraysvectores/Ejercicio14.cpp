#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
/*
7.3. Un vector que almacena n datos se dice que es mayoritario,
si existe un elemento almacenado en el vector que se apar ece
en el vector más de n / 2 veces.
Escribir una función que decida si un vector es mayoritario.



7.4. Diseñar funciones que calculen el producto escalar de dos vectores,
la norma de un vector y el coseno del ángulo que forman definidos de la siguiente forma
*/

float Pe(float arr1[], float arr2[]);
void IngresarDatos(float arr1[]);
float ModuloVector(float arr1[]);
float CosAcomprendido(float arr1[], float arr2[]);

int main() {
//EJERCICIO 1
/*
int tamanio = 0;
int contador = 0;
cout <<"Ingrese el tamaño del array"<<endl;
cin >> tamanio;
int arr3[tamanio] = {};

cout <<"Ingrese los elementos del array"<<endl;
for(int i = 0; i < tamanio; i++){
  cin >> arr3[i];
}

for(int i = 0; i < tamanio; i++){//primer elemento
  contador = 0;
      for(int k = 0;k < tamanio; k++){//compara el primer elemento con todo el array completo
            if( arr3[i] == arr3[k]){
              contador += 1;
            }

      }

    if(contador > tamanio/2){
      cout <<"El elemento: "<<arr3[i]<<" se repite mas de: "<<tamanio/2<<" veces"<<endl;
      break;
    }


}
*/



//EJERCICIO 2
//es de tamaño 2 porque este vector tiene las componentes X e Y
float arr4[2] = { };
float arr5[2] = { };
int letra = 253; //
char car_elev_cuadrado = letra;

IngresarDatos(arr4);
system("cls");
IngresarDatos(arr5);
system("cls");

cout <<"El modulo del vector es: "<<ModuloVector(arr4)<<" u"<<car_elev_cuadrado <<endl;
cout <<"El modulo del vector es: "<<ModuloVector(arr5)<<" u"<<car_elev_cuadrado <<endl<<endl;

cout <<"El producto escalar de los vectores es: "<<Pe(arr4, arr5)<<endl<<endl;

cout <<"El coseno del anuglo comprendido entre los vectores es: "<<CosAcomprendido(arr4, arr5)<<endl;




    return 0;
}

//**********************************
float Pe(float arr1[], float arr2[]){

float total = 0;
for(int i = 0; i < 2; i++){

  //se suma cada componente de los dos vectores i-con-i y j-con-j
  total = total + (arr1[i]*arr2[i]);


}

  return total;
}//fin de la funcion producto escalar


void IngresarDatos(float arr1[]){

cout <<"Ingrese las coordenadas X e Y del vector\n"<<endl;
for(int i = 0;i < 2; i++){
    if(i == 0){
      cout <<"X: ";
      cin >> arr1[i];
    }else{
      cout <<"Y: ";
      cin >> arr1[i];

    }


}//FIN DEL for


}//fin de la funcion ingresar coordenadas x e y


float ModuloVector(float arr1[]){

float suma = 0;
  for(int i = 0; i < 2; i++){
    suma = suma +  pow(arr1[i],2.0);
  }

  return sqrt(suma);
}//fin de la función modulo del vector


float CosAcomprendido(float arr1[], float arr2[]){

float Cosangulito = Pe(arr1, arr2)/( ModuloVector(arr1) * ModuloVector(arr2) );


  return Cosangulito;

}//fin funcion del coseno del angulo comprendido
