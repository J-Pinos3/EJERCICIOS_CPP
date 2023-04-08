#include <iostream>
#include <cstdlib>

using namespace std;
/*

Escribir una función que tenga como parámetros dos números enteros positivos num1 y num2 y
calcule el cociente de la división entera del primero entre el segundo mediante sumas y restas



*/
void restoDIV (int a, int b);

int main (){

int dividendo, divisor;

cout <<"Ingrese el dividendo"<<endl;
cin >> dividendo;

cout <<"Ingrese el divisor"<<endl;
cin >> divisor;



restoDIV(dividendo,divisor);


    return 0;
}

//**************************

void restoDIV (int a, int b){





//  cociente = a/b; a = dividendo b = divisor

int resto = a;// resto = al dividendo
int cociente = 0;
while(resto >= b){
  resto = resto -b;
  cociente ++;
}


cout <<"cociente de: "<<a<<"/"<<b<<" ---> "<<cociente;




} // FIN DE LA FUNCIÓN
