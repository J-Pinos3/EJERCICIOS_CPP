#include "calculos1.h"
#include <cmath>
using namespace std;


double suma(double x, double y ){
    return (x + y);
}

double resta(double x, double y ){
    return (x - y);
}

double producto(double x, double y ){
    return (x * y);
}

double cociente(double x, double y ){
    return (x / y);
}

double potencia(int x, int y ){
    return( pow(x,y) );
}

double raiz_cuadrada(int x ){
    return ( sqrt(x) );
}

long int factorial(int x){

  if(x == 0){
      x = 1;
  }else{
    x= x*factorial(x-1);
  }

  return x;
}
