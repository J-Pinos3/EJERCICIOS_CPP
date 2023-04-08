#include <iostream>
using namespace std;

int main() {


int n;
cout <<"Ingrese la cantidad de elementos a ingresar"<<endl;
cin >> n;

int arr[n] = {}, *direc_arr = nullptr;
int menor = 0;

cout <<"Ingrese los elementos"<<endl;
for(int i = 0; i < n; i++){
  cout <<">"<<i+1<<"<"<<endl;
  cin >>arr[i];
  cout <<endl;
}

direc_arr = arr;
for(int i = 0; i < n; i++){
    if(*direc_arr < menor){
      menor = *direc_arr;
    }
    direc_arr++;
}

cout <<"El menor de los numeros ingresados fue: "<<menor<<endl;
  return 0;
}
