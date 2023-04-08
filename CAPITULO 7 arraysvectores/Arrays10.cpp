#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <random>
using namespace std;


int main() {

default_random_engine motor( static_cast<unsigned int>(time(0)) );
uniform_int_distribution <int> entero_aleatorio(-10,10);

//se cra un arreglo y se inicializa con valores entre llaves si está vacío se inicia en 0{} = 0
array<int,10> arr1= {-1,5,4,8,9,0,1,14,31,2};
//se imprimen los valores con los que se inicializó el array
for(int i = 0; i < 10; i++){
    cout <<"["<<arr1[i]<<"]"<<" ";
}
cout <<endl<<endl<<endl;


cout <<"Ingrese nuevos valores para el arreglo"<<endl<<endl;
for(int i = 0; i < 10; i++){
  cin >> arr1.at(i);
}

//se imprimen los valores con los que el usuario ingresó al array
cout <<endl<<endl;
for(int i = 0; i < 10; i++){
    cout <<"["<<arr1[i]<<"]"<<" ";
}
cout <<endl<<endl<<endl;


cout <<"Se ingresaran valores aleatorios al arreglo"<<endl<<endl;
for(int i = 0; i < 10; i++){
    arr1.at(i) = entero_aleatorio(motor);
}
cout <<endl<<endl<<endl;
cout <<"Los valores aleatorios del arreglo son"<<endl;
for(int i = 0; i < 10; i++){
    cout <<"["<<arr1[i]<<"]"<<" ";
}
cout <<endl<<endl<<endl;



  return 0;
}
