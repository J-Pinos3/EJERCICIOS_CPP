#include <iostream>
#include <array>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main() {
//al declarar el array debo asignarle el tamaño
int arr[8];
int arr1[10] = {2,4,6,8,10,12,14,16,18,0}; // es la inicializacion del array en la declaración del mismo
cout <<"valor 3 del array: "<<arr1[2]<<endl<<endl;

// array< tipo, tamañoArreglo > nombreArreglo;

//vamos a inicializar el array en 0's
array<int, 10> numeros; // numeros es un array de 10 valores enteros

for(int i = 0; i < numeros.size(); i++){
  numeros[i] = 0;
}


cout <<"Elemento"<<setw(13)<<"Valor"<<endl;

for(int i = 0; i < numeros.size(); i++){
  cout <<setw(7) << i << setw(13) << numeros[i]<<endl;
}

system("pause");
system("cls");

//array< int, 5 > n = {}; // inicializa los elementos del arreglo n con 0
array<int, 5> arr2 = { 13, 26, 39, 52, 7};
//array<int, 5> arr2 = { }; todo empieza con 0
cout <<"|arr2|\n\n";
for(int i = 0; i < arr2.size(); i++){
  cout<< i+1 << setw(6) << arr2[i]+1<<endl;
}

system("pause");
system("cls");

int arr3[6] = {};
for(int i = 0; i < 6; i++){
  cout<< i << setw(6) << arr3[i]+1<<endl;
}












    return 0;
}
