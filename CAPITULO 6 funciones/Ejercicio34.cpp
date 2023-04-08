#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
/*

6.14. Escribir funciones que calculen
el máximo común divisor y el mínimo común múltiplo
de dos númer os enteros.

*/
int mcd(int n, int d);
int mcm(int n, int d);

int main() {

int a, b;
cout <<"Ingrese 2 numeros"<<endl;
cin >> a >> b;

cout <<"mcd ----> "<<mcd(a, b);



    return 0;
}

//******************************

int mcd(int n, int d){
int r;

n = abs(n);
d = abs(d);
r = n % d;

  while( r != 0){
    n = d;
    d = r;
    r = n % d;
  }


    return d;
}// FIN FUNCIÓN mcd


int mcm(int n, int d){

int producto, divisor, valor;

producto = n * d;
divisor = mcd(n, d);


  return abs(producto/divisor);

}// FIN FUNCIÓN mcm
