#include <iostream>
#include <cstdlib>

using namespace std;
/*
.28 (Números perfectos) Se dice que un número entero es un número perfecto si la suma de sus divisores,
 incluyendo 1 (pero no el número en sí), es igual al número. Por ejemplo, 6 es un número perfecto ya que 6 = 1 + 2 + 3.
Escriba una función llamada esPerfecto que determine si el parámetro numero es un número perfecto.
Use esta
función en un programa que determine e imprima todos los números perfectos entre 1 y 1000.
Imprima los divisores de cada número perfecto para confirmar que el número sea realmente perfecto. Ponga a prueba el poder de
su computadora, evaluando números mucho más grandes que 1000.

REFERENCIA A CAP 5 EJERCICIO 18 (ES DEL LIBRO SE SCHAUM)
*/



int main(){


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
