#include <iostream>
#include <cstdlib>
using namespace std;

/*
7.1. Escribir un programa que con vierta un número romano
(en forma de cadena de caracteres) en número arábigo.
Reglas de conversión:
M   1000
D   500
C   100
L   50
X   10
V   5
I   1
*/

int main() {

char letra = ' ';
char cadena_Num[20] = {};
int valor_num[20] = {};
int numero = 0, longitud = 0;//longitud será la longitud del array según los numeros ingresdos
cout <<"Ingrese los numeros romanos"<<endl;
cout <<"M, D, C, L, X, V, I\n(ctrl + Z para terminar) "<<endl;
while( ( (letra = cin.get()) != EOF ) ){
  cadena_Num[longitud] = letra;
  longitud++;
}


for(int i = 0; i < longitud; i++){
    if( (cadena_Num[i] == 'M')or(cadena_Num[i] == 'm') ){
      valor_num[i] = 1000;
    }else if( (cadena_Num[i] == 'D')or(cadena_Num[i] == 'd') ){
      valor_num[i] = 500;
    }else if( (cadena_Num[i] == 'C')or(cadena_Num[i] == 'c') ){
      valor_num[i] = 100;
    }else if( (cadena_Num[i] == 'L')or(cadena_Num[i] == 'l') ){
      valor_num[i] = 50;
    }else if( (cadena_Num[i] == 'X')or(cadena_Num[i] == 'x') ){
      valor_num[i] = 10;
    }else if( (cadena_Num[i] == 'V')or(cadena_Num[i] == 'v') ){
      valor_num[i] = 5;
    }else if( (cadena_Num[i] == 'I')or(cadena_Num[i] == 'i') ){
      valor_num[i] = 1;
    }

}


                  //longitud
for(int i = 0; i < longitud-1; i++){
    if(i == longitud-1){//es el ultimo delemento del array y por tanto del for
      numero = numero + valor_num[i];
    }else{
          if(valor_num[i] >= valor_num[i+1] ){
              numero = numero + valor_num[i];
          }else{
              numero = numero - valor_num[i];
          }

    }

cout<<"veces dentro de este for"<< i+1<<endl;
}//fin del for


cout <<"El numero arabigo es: "<< numero<<endl;






    return 0;
}
