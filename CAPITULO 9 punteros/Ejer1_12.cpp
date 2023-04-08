#include <iostream>
#include <ctime>
#include <random>
using namespace std;

double sumar(double x, double y);

double restar(double x, double y);

double multiplicar(double x, double y);


int main(int argc, char const *argv[]) {

  default_random_engine Motor( static_cast<unsigned int>(time(0)) );
  uniform_real_distribution<double> dist(-10,20);

  double (*Ptr_funciones[3])(double a, double b); //array de punteros a funciones que devuelven float

  Ptr_funciones[0] = sumar;
  Ptr_funciones[1] = restar;
  Ptr_funciones[2] = multiplicar;

  for(int i = 0; i < 3; i++){
    double val1 = dist(Motor), val2 = dist(Motor);
    cout <<"Val1: "<<val1<<"   Val2: "<<val2<<endl;
    cout <<Ptr_funciones[i](val1, val2);

    cout <<endl<<endl;
  }

  return 0;
}


double sumar(double x, double y){
  return x + y;
}

double restar(double x, double y){
  return x - y;
}

double multiplicar(double x, double y){
  return x * y;
}
