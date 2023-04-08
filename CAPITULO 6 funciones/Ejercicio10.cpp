#include <iostream>
#include <cstdlib>

using namespace std;


/*
6.18 (Exponenciación) Escriba una función llamada enteroPotencia( base, exponente ) que devuelva el valor de
 baseexponente
Por ejemplo, enteroPotencia(3, 4) = 3 * 3 * 3 * 3. Suponga que exponente es un entero positivo distinto de cero
y que base es un entero. No utilice ninguna función matemática de la biblioteca.

*/

int EnteroPotencia (int, int);

int main (){

int base, exponente;
cout <<"Ingrese las base de la potencia"<<endl;
cin >> base;

cout <<"Ingrese el exponente de la potencia"<<endl;
cin >> exponente;


  while(exponente < 0){
    cout <<"Error inténtalo de nuevo"<<endl;
    cin >> exponente;
  }

cout <<endl;
cout <<"El resultado de: ("<<base<<")^"<<exponente<<" es: " <<EnteroPotencia(base, exponente);


    return 0;
}


//******************************
int EnteroPotencia (int a, int b){

int i = 1;
int total = 1;

while (i <= b){
   total = total * a;

  i++;
}


  return total;
}// FIN FUNCIÓN ENTERO POTENCIA
