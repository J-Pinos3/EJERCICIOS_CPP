#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
/*
Write a program that outputs all prime numbers less than 1000.The program
should also count the number of prime numbers less than 1000.An integer >= 2
is a prime number if it is not divisible by any number except 1 and itself. Use the
Sieve of Eratosthenes:
*/
const int LIMITE = 1000;
int main() {                        //true, true, true
bool banderas[LIMITE] = {false, false};

int i, j;
  for(i = 2; i < LIMITE; i++){
    banderas[i] = true;
  }


for(i = 2; i < LIMITE/2; i++){
      if(banderas[i]){                
            for(j = i+i; j < LIMITE; j = j + i){
              banderas[j] = false;
            }
      }

}


int contador = 0;
for(i = 2; i < LIMITE; i++){
    if(banderas[i]){
        contador++;
    }
}

cout <<"Hay: "<<contador<<" numeros primos menores que: "<<LIMITE<<endl;

cout <<"Desea imprimir los numero en pantalla? <S/N>"<<endl;
char letra;
cin >> letra;

  if( (letra == 'S')or(letra == 's') ){
      for(i = 2; i < LIMITE; i++){
          if(banderas[i]){
            cout.width(8);
            cout << i;
          }
      }
  }



    return 0;
}
