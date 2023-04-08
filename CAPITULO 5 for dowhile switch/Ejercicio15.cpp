#include <iostream>
using namespace std;

/*
5.9. Escribir y ejecutar un programa
que invierta los dígitos de un entero positivo dado leído del teclado .
*/

int main() {


int number;
int digito, valor;

cout <<"Ingrese un numero: ";
cin >> number;

cout <<endl<<"\n<--------------->"<<endl<<endl;


digito = number % 10;
cout <<"digito "<<digito<<endl;

valor = number/10;
digito = valor % 10;
cout <<"digito "<<digito<<endl;

valor = valor / 10;
digito = valor % 10;
cout <<"digito "<<digito<<endl;





/*
// POR JOTAJOTAVM

//cout <<4/10.0<<endl; si el punto decimal solo me da 0

int num;
cout <<"Ingrese un numero: ";
cin >> num;

while(num >= 10){

  cout <<num % 10;
  num = num / 10;

}
cout <<num;
*/

















  return 0;
}
