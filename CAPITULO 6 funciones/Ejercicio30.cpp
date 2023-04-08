#include <iostream>
using namespace std;
/*

Se define el número combinatorio m sobre n de la siguiente forma: 1 2 = .
Escribir un programa que lea los valores de m y de n y calcule el valor de m sobr e n.

*/

long int factorial(int a);

int main() {

int diferencia;
int m, n;
cout <<"Combinatorio de m en n"<<endl;
cout <<"Ingrese m y n seguidos de un <enter> cada uno"<<endl;
cin >> m >> n;

diferencia = m - n;
cout <<endl<<"<------------------------->"<<endl;

cout << ( factorial(m) )/( factorial(n) * factorial(diferencia) ); 



    return 0;
}

//******************************

long int factorial(int a){

int factor = 1;
while (a > 0){
  factor = factor * a;
  a--;
}

  return factor;
} //FIN FUNCIÓN factorial
