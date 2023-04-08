#include <iostream>
#include <cstdlib>

using namespace std;
/*
6.11. Dado un número real p entre cero y uno, un número entero n positivo, y otro número entero i comprendido entre 0 y n, se
sabe que si un suceso tiene pr obabilidad de que ocurra p, y el experimento aleatorio se repite n veces, la probabilidad de
que el suceso ocurr a i veces viene dado por la función binomial de parámetros n , p e i dada por la siguiente fórmula:
Probabilidad(X = i) = 1 2 pi (1 – p)
n – i
Escribir un programa que lea los valores de p, n e i, y calcule el valor dado por la función binomial.

*/

long int factorial (int x);

int combinatorio (int m, int n);

float potencia (float a, int n);

float binomial (float p, int i, int n);

int main() {

int n , i;
float p;
do{
  cout <<"Humano ingresa probabilidad p y  el valor de n"<<endl;
cin >> p >> n;

}while ( (p <= 0)or(p >= 1)or(n <= 0) );

do {
cout <<"Humano ingresa el valor de i (entre 0 y n)"<<endl;
cin >> i;

} while( (i < 0)or(i > n) );
cout <<endl;
cout <<binomial(p,i,n)<<endl;

    return 0;
}

//*******************************************

long int factorial (int x){

  int f = 1;
  for( int i = 1; i <= x; i++){
    f = f * i;
  }

    return f;
} // FIN FUNCIÓN factorial


int combinatorio (int m, int n){

  return ( factorial(m) )/( factorial(n) * factorial(m-n) );
}// FIN FUNCIÓN Combinatorio


float potencia (float a, int n){
float i , f = 1.0;

  for(i = 1; i <= n; i++){
    f *= a;
  }

  return f;
} // FIN FUNCIÓN potencia


float binomial (float p, int i, int n){

  return combinatorio(n,i) * potencia(p,i) * potencia(1-p,n-i);
}// FIN FUNCIÓN binomial

/*


*/
