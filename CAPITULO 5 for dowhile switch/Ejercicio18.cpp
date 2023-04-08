#include <iostream>
using namespace std;


int main() {
// Forma 1 solo me dice si el numero que ingresé es perfecto o no
/*
int total = 0;
int resultado;
int k = 163; //ú
char a = k;
int i = 1;
int n;
cout <<"Ingrese un n"<<a<<"mero para saber si es perfecto ";
cin >> n;

while (i < n){
resultado = n % i;
// se calcula si cada digito menor que el valor ingresado  es un divisor exacto;

    if( (resultado) == 0){
    total = total + i;

    }





    i++;
}



if(total == n){

  cout <<"total = "<<total<<" por lo tanto "<<"el numero "<<n <<" es perfecto"<<endl;
}else{
  cout <<"El numero "<<n <<" No es perfecto"<<endl;
}
*/






// forma 2
int k = 163; //ú
char a = k;
int i, j, suma = 0;
cout <<"N"<<a<<"meros Perfectos entre 1 y 10000"<<endl;
  for(i = 1; i <= 10000; i++){ // ESTE FOR EXTERNO RECORRE LOS NUMEROS
    suma = 0;// SUMA SE REINICIA A 0 PARA CONTAR A CADA NUMERO (i)
        for(j = 1; j < i; j++){ // ESTE FOR INTERNO COMPRUEBA SI SON PERFECTOS
              if( (i % j) == 0){
                  suma = suma + j;
              }


        } // FOR SECUNDAIO

        if(i == suma){
          cout <<"El n"<<a<<"mero: "<<i <<" es perfecto"<<endl;
        }


  } // FOR PRINCIPAL















  return 0;
}
