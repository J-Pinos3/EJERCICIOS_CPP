#include <iostream>
#include <cstdlib>
using namespace std;
/*
7.10. Escribir una función que encuentre el
 elemento mayor y menor de una matriz,
 así como las posiciones que ocupa y los visualice en pantalla.


*/
int main() {
int tamanio;
cout <<"Ingrese el orden de la matriz"<<endl;
cin >> tamanio;
float arr[tamanio][tamanio];

cout <<"Ingrese los elementos de la matriz"<<endl;
for(int i = 0; i < tamanio; i++){
    for(int j = 0; j < tamanio; j++){
      cout <<"["<<i<<"]"<<"["<<j<<"]: ";
      cin >> arr[i][j];
    }
}


system("cls");

int IM = 0, im = 0, JM = 0, jm = 0; //los de mayúscula son las posiciones mayores
float mayor, menor;
menor = mayor = arr[0][0];

cout <<"La matriz ingresada es: "<<endl;
for(int i = 0; i < tamanio; i++){
    for(int j = 0; j < tamanio; j++){
      cout << arr[i][j]<<" ";
    }
  cout <<endl;
}

cout <<endl;
for(int i  = 0; i < tamanio; i++){
      for(int j = 0; j < tamanio; j++){
            if(menor > arr[i][j]){
                menor = arr[i][j];
                im = i;
                jm = j;
            }else if(mayor < arr[i][j]){
                mayor = arr[i][j];
                IM = i;
                JM = j;
            }

      }

}

cout <<"El elemento mayor es: "<<mayor<<endl;
cout <<"la posicion del elemento mayor es: "<<IM<<", "<<JM<<endl;

cout <<"El elemento menor es: "<<menor<<endl;
cout <<"la posicion del elemento menor es: "<<im<<", "<<jm<<endl;




    return 0;
}
