#include <iostream>
using namespace std;


int main(){

long int factorial(int k);

int valor1, valor2, i;
cout <<"Ingrese dos valores: ";
cin >> valor1 >> valor2;

cout <<"Valor1: "<<valor1<<"\n"<<"Valor2: "<<valor2<<endl; // RANGO DE NUMEROS DEL FACTORIAL


for(i = valor1; i <= valor2; i++){
  cout <<i<<"! = "<<factorial(i)<<endl;
}








    return 0;
}

//***************************

long int factorial(int k){

int f = 1;
  for(int i = 1; i <= k; i++){
    f = f * i;

  }


    return f;
} //FIN FUNCIÓN factorial
