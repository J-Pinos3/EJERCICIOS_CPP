#include <iostream>
#include <cmath>

using namespace std;

/*
scribir un programa que lea dos números x y n y
calcule la suma de la progresión geométrica.
1 + x + x2 + x3 + ... + xn
*/

int progresion(int base, int expo);
int progresionDOS(int base, int expo);

int main() {
int x, n;
cout <<"Ingrese x: ";
cin >> x;

cout <<"Ingrese n: ";
cin >> n;

cout <<endl<<progresion(x,n)<<endl<<endl<<endl;
cout <<endl<<progresionDOS(x,n)<<endl<<endl<<endl;

    return 0;
}

//*************************************

int progresion(int base, int expo){

int i = 0, suma = 0;

  while(i <= expo){

    suma = suma + pow(base, i);
    cout <<base<<"^"<<i<<": "<<suma<<endl;
    i++;
  }


  return suma;
}// FIN FUNCIÓN progresion

int progresionDOS(int base, int expo){

  int i = 1, suma = 1, acu = 1 ;                                                //suma "debería ser 0"
//inicializo suma con 1  xq seria el primer valor de la suma con (base^0 = 1) suma = suma + (base^0 = 1) y esto es igual a 1
// entonces en la primera vuelta del bucle cuando (i = 1) se calcula base ^ 1
    while(i <= expo){

      acu = acu *base;


      suma = suma + acu;

      i++;
    }

  cout <<endl<<endl;


    return suma;
}// FIN FUNCIÓN progresionDOS
