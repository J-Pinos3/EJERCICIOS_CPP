#include <iostream>
#include <cstdlib>

using namespace std;
/*
6.36 (Exponenciación recursiva) Escriba una función recursiva llamada potencia( base, exponente ) que,
cuando sea llamada, devuelva
 base exponente
Por ejemplo, potencia( 3, 4 ) = 3 * 3 * 3 * 3. Suponga que exponente es un entero mayor o igual que 1. Sugerencia: el paso recursivo debe utilizar la relación
 base exponente = base · base exponente — 1
y la condición de terminación ocurre cuando exponente es igual a 1, ya que
 base 1
 = base


*/

int potencia (int a, int b);

int main(){

cout <<potencia(4,3);










    return 0;
}

//**************************
int potencia (int a, int b){
//a es la base, b es el exponente
int total = a;
  if(b == 1){
      return a;
  }else{
    total = total*potencia(a, b-1);
    return total;
  }





} // FIN FUNCIÓN potencia

/*


*/
