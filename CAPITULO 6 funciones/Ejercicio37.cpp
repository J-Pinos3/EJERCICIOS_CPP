#include <iostream>
#include <cstdlib>
using namespace std;
/*
Escribir una función Redondeo que acepte un valor real
Cantidad y un valor entero
Decimales y devuelva el valor Cantidad redondeado al número especificado de Decimales.
Por ejemplo, Redondeo (20.563,2) de vuelve
los valores 20.0, 20.5 y 20.54 respectivamente
*/


void redondeo(double a, int b);

int main() {

double cantidad, decimales;

cout <<"Ingrese un numero real: ";
cin >> cantidad;
cout <<endl;
cout <<"Ingrese la cantidad de decimales: ";
cin >> decimales;
cout<<"\n <-----------------------> \n";

redondeo(cantidad,decimales);


    return 0;
}

//************************************

void redondeo(double a, int b){
// a es el real, b son los Decimales
double num = a;
int k = 1;
int contador = 1;
while (contador <= b){
   k *= 10; // k = k * 10
   contador++;
}

//ahora se multiplica al real por k para hacerlo (un entero)
num = num * k;
int numero = (int)num;
int temp = (int)num;
cout <<"numero: "<<numero<<" temp: "<<temp<<endl;
int i = 1;
int digito, digito2;
  while(i <= b){
    digito = numero % 10;
    numero = numero / 10;
    digito2 = numero % 10;
    temp /= 10;

        if(digito >= 5){
          digito2 += 1;
          digito += 1;
        }




    i++;
  }


cout <<temp<<" <--> "<<temp<<"."<<digito<<" <--> "<<temp<<"."<<digito2<<digito<<endl;


}// FIN FUNCIÓN REDONDEO


/*









*/
