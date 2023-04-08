#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;
/*
6.18. La función seno (sen) viene definida mediante el siguiente desarrollo en serie.
sen(x) = Σ
n
i=0
Escribir una función que reciba como parámetro el valor de x as í como una cota de err or, y calcule el seno de x con
un error menor que la cota que se le pase .
 Ejecute la función en un programa con varios valores de prueba.

*/


float seno(float x, float error);



int main() {
  float error, valor1, valor2, inc, x, propor = 3.1415/180;
  cout <<"ingresa valor1 valor2 inc en grados error positivo"<<endl;
cin >> valor1 >> valor2 >> inc >> error;


for(x = valor1 * propor; x <= valor2*propor; x = x + inc * propor ){
cout <<x/propor<<setw(12)<<sin(x)<<setw(12)<<seno(x, error)<<endl;



}



    return 0;
}

//***************************

float seno(float x, float error){

  float term = x, suma = x, xx = x*x;
  int i = 1;

  while ( abs(term) > error && i < 20 ) {
      i = i + 2;
      term = -term * xx/(i * (i-1));
      suma = suma + term;

  }

  return suma;
}// FUNCIÓN SENO
