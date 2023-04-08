#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*

Codificar un programa C++ que lea una frase, y decida si es palíndroma.
 Una frase se dice que es palíndroma si después
de haber eliminado los blancos,
se puede leer de igual forma en los dos sentidos.

*/

int main() {

char letra = ' ';
char arrayCaracteres[200];
char arrPalin[200];

int i = 0, longitud = 0;;
while( ( (letra = cin.get()) != EOF )){
  if( (letra == ' ' )||(letra == '\n' ) ){
    continue;
  }else{
    arrayCaracteres[i] = letra;
    arrPalin[i] = letra;
    i++;

  }

longitud++;
}


cout <<"Este es el array original"<<endl;
for(int k = 0; k < longitud; k++){// ESTE FOR ES COMO REFERENCIA
  cout <<arrayCaracteres[k]<<" ";
 }

cout <<endl<<endl;


//arrayCaracteres ES EL ARRAY ORIGINAL
//arrPalin ES EL ARRAY QUE SE MODIFICARÁ
int m = 0, j = longitud, aux;
// PARA ESTA PRUEBA VOY A USAR UNA MODIFICACION DEL ALGORITMO BUBBLE

  for(m = 0; m < longitud; m++){
    j--;// j empieza con longitud -1 es decir la ultima posicion del array

      if(j > m){

          aux = arrPalin[m];
          arrPalin[m] = arrPalin[j];
          arrPalin[j] = aux;

      }



  } // fin del for



//ESTE FOR COMPRUEBA SI LOS ARRAYS DE CARACTERES SON PALINDROMOS es decir iguales
cout <<"Este es el array modificado"<<endl;
for(int k = 0; k < longitud; k++){
    cout <<arrPalin[k]<<" ";

}
cout <<endl;



    return 0;
}
