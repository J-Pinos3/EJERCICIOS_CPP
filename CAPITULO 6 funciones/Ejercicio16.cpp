#include <iostream>
#include <cstdlib>

using namespace std;
/*
(Números primos) Se dice que un entero es primo si puede dividirse solamente por 1 y por sí mismo.
 Por ejemplo, 2, 3, 5 y 7 son primos, pero 4, 6, 8 y 9 no


 a) Escriba una función que determine si un número es primo.
 b) Use esta función en un programa que determine e imprima todos los números primos entre 2 y 10,000.
 ¿Cuántos de estos números hay que probar realmente para asegurarse de encontrar todos los números
 primos?
 c) Al principio podría pensarse que n/2 es el límite superior para evaluar si un número es primo, pero lo
 máximo que se necesita es ir hasta la raíz cuadrada de n.
 ¿Por qué? Vuelva a escribir el programa y ejecútelo de ambas formas. Estime la mejora en el rendimiento

*/


void es_Primo(int a);

int main(){

  for(int i = 2; i <= 30000; i++){
      es_Primo(i);

  }



    return 0;
}

//******************

void es_Primo(int a){
int k = 1;
int total = 0;

  while(k <= a){

      if( (a % k ) == 0 ){
        total = total + 1;
      }


    k++;
  }


  if(total == 2){
    cout <<"EL NUMERO: "<< a << " ES PRIMO"<<endl;
  }


} // FIN FUNCIÓN ES_PRIMO
