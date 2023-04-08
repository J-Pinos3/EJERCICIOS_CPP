#include <iostream>
#include <cstdlib>
using namespace std;
/*
Escribir una función que acepte como parámetro un
vector que puede contener elementos duplicados. La
función debe sustituir cada v alor repetido por –5 y
 devolver al punto donde fue llamado el vector modificado
y el número de entradas modificadas.
*/


const int MAX = 30;
void ingresar_Valores(int arr[], int n);
void reemplaza_Repes(int arr1[], int n, int aux[], int& k);//se pasa el array por referencia para que se modifique
void mostrar_Valores(int arr[], int n);



int main() {
int k = 0;

int tamanio = 0;
cout <<"Ingrese el tamanio del arreglo: ";
cin >> tamanio;

int arreglo_original[MAX] = {};
int arr_final[MAX] = {};

cout <<"Ingrese los valores del arreglo"<<endl;
ingresar_Valores(arreglo_original, tamanio);


reemplaza_Repes(arreglo_original, tamanio, arr_final, k);

cout <<"EL ARREGLO ORIGINAL ES"<<endl;
mostrar_Valores(arreglo_original, tamanio);
cout <<endl<<endl;

cout <<"EL ARREGLO FINAL ES"<<endl;
mostrar_Valores(arr_final, k);




    return 0;
}

void ingresar_Valores(int arr[], int n){
    for(int i = 0; i < n; i++){
      cout <<i+1<<": ";
      cin >> arr[i];
    }


}//fin de la función ingresar_Valores



void reemplaza_Repes(int arr1[], int n, int aux[],  int& k){
  // N ES LA LONGITUD DEL ARRAY
  // AUX ES EL NUEVO ARREGLO

k = 0;
int contador = 0;
    for(int i = 0; i < n; i++){
        contador = 0;
          for(int j = 0; (j < n)and(contador < 2); j++){ //este for cuenta los elementos con MAS de 1 APARICIÓN
                if(arr1[i] == arr1[j]){
                  contador++;
                }
          }

          if(contador == 1){
            aux[k] = arr1[i];
            k++;
          }
          if(contador == 2){
            aux[k] = -5;
            k++;
          }


    }


}// fin de la función reemplaza_Repes




void mostrar_Valores(int arr[], int n){
    for(int i = 0; i < n; i++){
      cout <<"["<<arr[i]<<"] ";
    }


}//fin de la función mostrar valores
