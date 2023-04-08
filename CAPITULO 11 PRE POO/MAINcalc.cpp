#include <iostream>
#include "calculos1.h"
//#include "calculos1.cpp"// si ponco #include <calculos1.cpp> NO FUNCIONARÁ
using namespace std;


int main() {

double num1, num2;
int numero1 = 0;

cout <<"Ingrese el primer numero(num1): ";
cin >> num1;
numero1 = num1;

cout <<"Ingrese el segundo numero(num2): ";
cin >> num2;

cout << num1 <<" + "<< num2<<" = "<<suma(num1, num2)<<endl<<endl;
cout << num1 <<" - "<< num2<<" = "<<resta(num1, num2)<<endl<<endl;
cout << num1 <<" * "<< num2<<" = "<<producto(num1, num2)<<endl<<endl;
cout << num1 <<" / "<< num2<<" = "<<cociente(num1, num2)<<endl<<endl;
cout <<num1<<"^"<<num2<<" = "<<potencia(num1,num2)<<endl<<endl;
cout <<"sqrt("<<numero1<<") ="<<raiz_cuadrada(numero1)<<endl<<endl;
cout <<"!"<<numero1<<" = "<<factorial(numero1)<<endl<<endl;

  return 0;
}
