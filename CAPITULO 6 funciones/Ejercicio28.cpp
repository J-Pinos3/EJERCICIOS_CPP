#include <iostream>
using namespace std;
/*

Escribir una función que decida si dos númer os enteros positivos son amigos.
 Dos númer os son amigos, si la suma de los
divisores distintos de sí mismo de cada uno de ellos coincide con el otro número.
 Ejemplo 284 y 220 son dos números amigos.
REFERENCIA CAP 5 EJERCICIO 18

*/

int num_Amigos (int a);

int main() {
int num1, num2;
  cout <<"Ingrese dos numeros (seguidos de enter) para saber si son panas"<<endl;
  cin >> num1 >> num2;

  if( ( (num_Amigos(num1)) == num2 )or( (num_Amigos(num2)) == num1 ) ){
    cout <<"Son panas xD"<<endl;
  }else{
    cout <<" No son nada"<<endl;
  }




    return 0;
}

//*************************

int num_Amigos (int a){

int i = 1;
int total = 0;

while (i < a){// PONGO < XQ EL DIVISOR DEBE SER DISTINTO DEL MISMO NUMERO

      if( (a % i) == 0 ){
          total = total + i;
      }

  i++;
}

return total;
}// FIN FUNCION num_Amigos


/*


*/
