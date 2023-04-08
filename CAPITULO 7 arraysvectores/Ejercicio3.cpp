#include <iostream>
#include <cstdlib>
using namespace std;
/*
(Eliminación de duplicados con array) Use un arreglo unidimensional para resolver el siguiente problema.
Recibir como entrada 20 números, cada uno de los cuales debe estar entre 10 y 100, inclusive.
A medida que se lea cada número, validarlo y almacenarlo en el arreglo,
sólo si no es un duplicado de un número ya leído. Después de leer todos los valores,
mostrar sólo los valores únicos que el usuario introdujo. Prepárese para el “peor caso”, en el
que los 20 números son diferentes. Use el arreglo más pequeño que sea posible para resolver este problema.
*/



int main() {
  //solo con 10 valores
  //MI MÉTODO
int array[10] = {};
int longitud = 0;
int valor, aux[10] = {};
int final[10] = {};
int contador = 0;

//SE INGRESAN Y VALIDAN LOS VALORES DEL ARRAY
cout <<"Ingrese los valores del array"<<endl;
for(int i = 0; i < 10; i++){//ingresamos los valores el array
  cin >> valor;
  array[i] = valor;

  while( (array[i]<10)or(array[i]>100) ){
    cout <<"Intentelo de nuevo: ";
    cin >> valor;
    array[i] = valor;

  }
  aux[i] = array[i]; //con esto tengo 2 arrays con los mismos valores
longitud++;
}// fin del for principal

cout <<endl<<endl;
//system("cls");
cout <<"valor de longitud: "<<longitud<<endl<<endl;//10



//METODO 1  --> ELIMINA TODO LO QUE SE REPITE

int k = 0;
for(int i = 0; i < longitud; i++){
      contador = 0;
      for(int j = 0; (j < longitud)and(contador < 2); j++){
            if(aux[i] == aux[j]){
              contador++;
            }
      }

      if(contador == 1){
        final[k] = aux[i];
        k++;
      }



}// FOR EXTERIOR





cout <<"El array final: "<<endl;
for(int i = 0; i < k; i++){
  cout <<"["<<final[i]<<"] ";
}







    return 0;
}
