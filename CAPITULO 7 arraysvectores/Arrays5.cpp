#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <array>
#include <string>
#include <algorithm> //contiene sort y binary_search
using namespace std;



int main() {
const int tamanio = 10;
int tama = 1;
cout <<"Ingrese el tamanio del array antiguo"<<endl;
cin >> tama;

//el tamaño del array debe se una constante "en este tipo de arrays"
array<string, tamanio> colores = {"rojo", "celeste", "verde", "violeta","azul", "amarillo", "turqueza", "naranja", "blanco", "marron"};
//***********************************
  cout <<setw(20)<<"Arreglo desordenado"<<endl;
for(int i = 0; i < tamanio; i++){
  cout << colores[i]<<" - ";
}
cout <<endl<<endl;
//***********************************
  cout <<setw(20)<<"Arreglo desordenado for con rango"<<endl;
  for( string color : colores) {
    cout << color <<" - ";
  }
cout <<endl<<endl;
//***********************************---------

sort(colores.begin(), colores.end());

//***********************************-------
cout <<endl<<endl;

  cout <<setw(20)<<"Arreglo Ordenado"<<endl;
for(int i = 0; i < tamanio; i++){
  cout << colores[i]<<" - ";
}
cout <<endl<<endl;
//***********************************
  cout <<setw(20)<<"Arreglo Ordenado for con rango"<<endl;
  for( string color : colores) {
    cout << color <<" - ";
  }
cout <<endl<<endl;
//***********************************

system("pause");
system("cls");

bool encontrado;
encontrado = binary_search(colores.begin(), colores.end(), "celeste");
if(encontrado){
  cout <<"\n\n el color celeste se encuentra en colores"<<endl;
}else{
  cout <<"\n\n el color celeste no se encontró en colores"<<endl<<endl;
}


encontrado = binary_search(colores.begin(), colores.end(), "rosa");
if(encontrado){
  cout <<"\n\n el color rosa se encuentra en colores"<<endl;
}else{
  cout <<"\n\n el color rosa no se encontró en colores"<<endl<<endl;
}


system("pause");
system("cls");


int arr[tama] = {};
cout <<setw(20)<<"Arreglo antiguo"<<endl;
for(int i = 0; i < tama; i++){
 cin >> arr[i];
}
cout <<endl<<endl;
cout <<setw(20)<<"Arreglo antiguo"<<endl;
for(int i = 0; i < tama; i++){
cout << arr[i]<<" - ";
}







    return 0;
}
