#include <iostream>
#include <cstdlib>
#include <ctime>
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
int array[30];
int final[30];
int longitud = 0;//primer elemento del array
int  duplicado[30];
srand(static_cast<unsigned int>( time(0) ) );
cout <<"Se ingresan los valores del array"<<endl;
for(int i = 0; i < 10; i++){//ingresamos los valores el array

  array[i] = 11 + rand() % 100;


      for(int j = 0; j < i; j++){
          if( array[i] == array[j]){
            //  array[i] = 0;// si es un elemento repetido lo elimino poniendole 0
            array[j] = 0;
              break;
          }
      }


  longitud++;

}// fin del for principal


//system("cls");
cout <<endl<<endl;

for(int i = 0; i < longitud; i++){

    if(array[i] == 0){
    cout <<"";
  }else{
    cout <<"["<<array[i]<<"] ";
  }


}



//MÉTODO 2




    return 0;
}
