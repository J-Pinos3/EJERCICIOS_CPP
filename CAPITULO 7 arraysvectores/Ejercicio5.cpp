#include <iostream>
#include <cstdlib>
using namespace std;
/*El programa cambia el orden de los numeros de un aray
es decir último-primero, penúltimo-segundo etc

VOY  A USAR ESTE CONCEPTO PARA RESOLVER EL EJERCICIO DE ABAJO ╦ */

/*
Palíndromo. Dado un número entero positivo, 𝑛, determine si se trata de un palíndromo o no.
Pista: utilice dos arreglos.
10001 – Palíndromo
303 – Palíndromo
669 – No es un Palíndromo.
 */

int main() {
/*
int arr1[6] = {2,5,7,9,11,16};

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


int tamanio = 0;
cout <<"Ingrese el tamanio del arreglo"<<endl<<endl;
cin >> tamanio;

if(tamanio >= 12){
  cout <<"SEAS MAMON"<<endl;
}

int j = tamanio, aux;
int arr1[tamanio] = {};
int arr2[tamanio] = {};

//EL ARR1 VA A SER EL ARRAY ORIGINAL
//AL ARRAY2 SE LE VA A CAMBIAR LA POSICION DE LA INFO
cout <<"Ingrese los valores del arreglo"<<endl<<endl;
for(int i = 0; i < tamanio; i++){
cin >> arr1[i];
//ahora copio los valores de arr1 en arr2
arr2[i] = arr1[i];
}


system("cls");

//SE CAMBIA LA POSICION DE LOS VALORES DE arr2
for(int i = 0; i < tamanio; i++){
  j--;// j empieza con la ultima posicion del array

    if(j > i){

        aux = arr2[i];
        arr2[i] = arr2[j];
        arr2[j] = aux;

    }



} // fin del for
//ARR1 SIGUE IGUAL SOLO CAMBIA ARR2
//AHORA SE COMPARA LOS VALORES DE LOS ARRAYS
bool sonPalindromos = false;
int contador = 0;

while(contador < tamanio){

    if(arr1[contador] == arr2[contador]){
      sonPalindromos = true;
    }else{
      sonPalindromos = false;
      break;
    }



  contador++;
}

if(sonPalindromos){
  cout <<"El numero: ";
  for(int k = 0; k < tamanio; k++){
    cout <<arr1[k]<<" ";
  }
cout <<"\n es palindromo :)"<<endl;
}else{
  cout <<"El numero ingresado no es palindromo"<<endl;
}




    return 0;
}
