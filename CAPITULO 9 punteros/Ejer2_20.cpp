#include <iostream>
using namespace std;

void leerMatriz(int **m, int n){

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> m[i][j];
    }
  }

}//leerMatriz


void escribirMatriz(int **m, int n){

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << "  " << m[i][j];
    }
    cout <<endl;
  }

}//escribirMatriz



int main(int argc, char const *argv[]) {

  int n;
  int **m;

  cout <<"Introduzca la dimension de m: ";       cin >> n;
  m = new int*[n];

  for(int i = 0; i < n; i++){
      m[i] = new int[n];
  }

  leerMatriz(m,n);
  cout <<endl<<endl<<"------------------------------------------------"<<endl<<endl;
  escribirMatriz(m,n);


  for(int i = 0; i < n; i++){
    delete[] m[i];
  }

  delete[] m;

  return 0;
}
