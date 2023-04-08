#include <iostream>
#include <cstdlib>
using namespace std;
/*
7.7. Escribir una función que reciba como parámetro una matriz cuadrada de orden n,
y calcule la traspuesta de la matriz almacenando el resultado en la propia matriz.
*/



int main() {

  float aux;
  int tamanio = 0;
  cout <<"Ingrese el orden de la matriz"<<endl;
  cin >> tamanio;
  int matriz[tamanio][tamanio];
  int matrizTRANS[tamanio][tamanio];
  int array[tamanio][tamanio];//NUEVA MATRIZ

  cout <<"Ingrese los datos de la matriz"<<endl;
  for(int i = 0; i < tamanio; i++){
    for(int j = 0; j < tamanio; j++){
      cout <<"numero ["<<i<<"]"<<"["<<j<<"]: ";
      cin >> matriz[i][j];
      array[i][j] = matriz[i][j]; // las dos matrices van a ser iguales
    }

  }

  system("cls");
  cout <<"La matriz original es"<<endl;
  for(int i = 0; i < tamanio; i++){
    for(int j = 0; j < tamanio; j++){
      cout << matriz[i][j]<<" ";

    }
  cout <<endl;
  }




  cout <<endl<<endl;
  cout <<"La matriz transpuesta es"<<endl;
for(int i = 0; i < tamanio; i++){
  for(int j = 0; j < tamanio; j++){
      matrizTRANS[i][j] = matriz[j][i];

  }

}

//se imprime la matriz
for(int i = 0; i < tamanio; i++){
  for(int j = 0; j < tamanio; j++){
    cout << matrizTRANS[i][j]<<" ";

  }
cout <<endl;
}




//otra forma
/*

for(int i = 0; i < tamanio; i++){
  for(int j = 0; j < tamanio; j++){
    cout << matriz[j][i]<<" ";

  }
cout <<endl;
}

*/







    return 0;
}

//*******************************
