#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <random>
using namespace std;

int main() {                        //esto es la semilla de generación en base a la hora actual
default_random_engine motor_random (static_cast<unsigned int>( time(0) ) );
uniform_int_distribution< unsigned int > entero_aleatorio(0,20);

array<int, 10> arr1 = {};
 //arr1.fill(5) inicializa el arreglo con un valors

//se ingresan los datos en el array
for(int i = 0; i < 10; i++){
  arr1[i] = entero_aleatorio(motor_random);
  //cout <<"["<<i<<"]: ";
  //cin >> arr1[i];
  //cin >>arr1.at(i); funciona de las 2 maneras
}
cout <<endl<<endl;

system("cls");


cout <<"Los elementos del array son"<<endl;
for(int i = 0; i < 10; i++){
  //cout <<"{"<<arr1[i]<<"} "; funciona de las 2 maneras
  cout <<"{"<<arr1.at(i)<<"} ";
}

short int primer_elem = arr1.front();
short int ult_elem = arr1.back();

cout <<"\nEl numero de elementos del arreglo es: "<<arr1.size()<<endl;
cout <<"El primer elemento del arreglo es: "<<primer_elem<<endl;
cout <<"El ultimo elemento del arreglo es: "<<ult_elem<<endl;


  return 0;
}
