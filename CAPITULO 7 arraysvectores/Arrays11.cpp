#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;

const int tamanio = 5;

int main() {

// array< tipo, tamañoArreglo > nombreArreglo;
array<double,tamanio> arr1 = {};
array<double,tamanio> arr2 = {};

cout <<"Ingrese los elementos del primer arreglo"<<endl;
for(int i = 0; i < tamanio; i++){
  cout <<"["<<i<<"]: ";
  cin >> arr1.at(i);
}


cout <<"\n\nIngrese los elementos del segundo arreglo"<<endl;
for(int i = 0; i < tamanio; i++){
  cout <<"["<<i<<"]: ";
  cin >> arr2.at(i);
}


cout <<endl<<endl<<endl;
for(int i = 0; i < tamanio; i++){
  cout <<"["<<arr1.at(i)<<"] + ["<<arr2[i]<<"] = "<< arr1.at(i) + arr2.at(i)<<endl;
}


  return 0;
}
