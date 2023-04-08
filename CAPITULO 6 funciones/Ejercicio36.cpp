#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
/*
6.19. La función coseno viene definida mediante el siguiente
 desarrollo en serie de Taylor.
cos(x) = Σ
n
i=0
Escribir una función que reciba como parámetro el valor de x
 así como una cota de error, y calcule el coseno de x con
un error menor que la cota que se le pase .
*/

float coseno(float x, float error);




int main() {

  float error, valor1, valor2, inc, x, propor = 3.1415/180;
  cout <<"ingresa valor1 valor2 inc en grados error positivo"<<endl;
cin >> valor1 >> valor2 >> inc >> error;


for(x = valor1 * propor; x <= valor2*propor; x = x + inc * propor ){
cout <<x/propor<<setw(12)<<cos(x)<<setw(12)<<coseno(x, error)<<endl;



}




    return 0;
}

//***********************

float coseno(float x, float error){

  float term = 1.0, suma = 1.0, xx = x*x;
  int i = 0;

  while( abs(term) > error && i < 20){
      i = i + 2;
      term = -term * xx/(i *(i-1));
      suma = suma + term;
  }


  return suma;
}// FIN FUNCIÓN COSENO
