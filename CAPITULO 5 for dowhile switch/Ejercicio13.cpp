#include <iostream>
using namespace std;


int main(){

int n = 6; // el usuario puede mofificar este valor
cout <<"Ingrese el numero de filas: ";
cin >> n;

for(int i = n; i >= 1; i-- ){ // contador de filas

      for(int j = 1; j <= i; j++){
        cout << j << " ";
      }

  cout <<endl;

}










    return 0;
}
