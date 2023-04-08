#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
/*

Separar dígitos) Escriba segmentos de programas que realicen cada una de las siguientes tareas:
a) Calcular la parte entera del cociente, cuando el entero a se divide entre el entero b.
b) Calcular el residuo entero cuando el entero a se divide entre el entero b.
c) Utilizar las piezas de los programas desarrollados en las partes (a) y (b) para escribir una función que
reciba un entero entre 1 y 32767, y que lo imprima como una serie de dígitos, separando cada par de
dígitos por dos espacios. Por ejemplo, el entero 4562 debe imprimirse de la siguiente manera:
4 5 6 2

D = d * c + r
*/

int parte_Cociente(int a, int b);

int residuo(int a, int b);

int main(){

int numero;

do{
  cout <<"Ingrese un numero entre 1 y 32767"<<endl;
  cin >> numero;

}while( (numero < 1)or(numero >32767) );


int num = numero;
int contador = 0;
while(num > 0){ // SE CUENTAS LAS CIFRAS DEL NUMERO

  num = num / 10;

  contador++;
}
cout <<"El numero "<<numero<< " tiene "<<contador<<" cifras"<<endl;

system("pause");
system("cls");


if(contador == 1){
cout <<numero<<endl;



}else if(contador == 2){

cout <<numero/10<<" ";
cout <<numero%10<<endl;


}else if(contador == 3){


  int A, B, C;

  A = numero/100;
  cout << A <<" ";

  B = (numero % 100)/10;
  cout << B <<" ";

  C = (numero % 10);
  cout << C <<endl;





}else if(contador == 4){
  int A, B, C, D;

A = numero/1000;
cout << A <<" ";

B = (numero % 1000)/100;
cout << B <<" ";

C = (numero % 100)/10;
cout << C <<" ";

D = (numero % 10);
cout << D <<" ";



}else if(contador == 5){
int A, B, C, D, E;

A = numero/10000;
cout << A <<" ";

B = (numero % 10000)/1000;
cout << B <<" ";

C = (numero % 1000)/100;
cout << C <<" ";

D = (numero % 100)/10;
cout << D <<" ";

E = (numero % 10);
cout << E <<" ";



}









    return 0;
}


//****************************

int parte_Cociente(int a, int b){

/*
int resto = a % b;

int cociente = (a-resto)/b;

return cociente;
*/





  return a/b;

}// FIN FUNIÓN PARTE ENTERA DEL COCIENTE


int residuo(int a, int b){


  return a%b;
}// FIN FUNCIÓN RESIDUO
