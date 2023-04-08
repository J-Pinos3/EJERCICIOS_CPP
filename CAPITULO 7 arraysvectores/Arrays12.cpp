#include <iostream>
#include <cstdlib>
#include <array>
#include <iomanip>
#include <cmath>
using namespace std;

const int tamanio = 5;

int main() {

// array< tipo, tamañoArreglo > nombreArreglo;
array<double,tamanio> arr1 = {};


cout <<"Ingrese los elementos del primer arreglo"<<endl;
for(int i = 0; i < tamanio; i++){
  cout <<"["<<i<<"]: ";
  cin >> arr1.at(i);
}

cout <<endl<<endl;
cout <<setw(10)<<"VALOR"<<setw(13)<<"CUADRADO"<<endl<<endl;
for(int i = 0; i < tamanio; i++){
  cout << setw(8) << arr1[i] << setw(12) << pow(arr1[i],2)<<endl;
}


  return 0;
}
