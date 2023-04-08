#include <iostream>
#include <windows.h>
using namespace std;

int main() {
//int arr1[6] = {2,4,6,8,10,12};

/*NO SIRVE
int arr1[6] = { {2,4},{6,8},{10,12},{1,3},{5,7},{9,11} };

for(int i = 0; i < 6; i++){
  cout <<"["<<arr1[i][1]<<"] ";
}
*/

/*
int arr1[6][2] = { {2,4},{6,8},{10,12},{1,3},{5,7},{9,11} };

for(int i = 0; i < 6; i++){
    for(int j = 0; j < 2; j++){
      cout <<"["<<arr1[i][j]<<"] ";
    }
    cout <<endl;
}
*/





/*CONTADOR DE CIFRAS
//CAP 6 EJERCICIO 12
int num = 6549;
cout <<"Ingrese un numero: ";
cin >> num;
cout <<endl<<endl;
int aux = num;
int contador_cifras = 0;
while(aux > 0){
  aux = aux/10;
  contador_cifras++;
}
cout <<"El numero "<<num<<" tiene: "<<contador_cifras<<" cifras"<<endl;
*/





//INGRESAR NUMEROS CON UN CENTINELA

/*
int num;
cout <<"Ingrese un numero, -01 para terminar"<<endl;//toma a -01 como -1
cin>>num;
while(num != -01){
cout <<"Ingrese un numero, -01 para terminar"<<endl;
cin>>num;

}
*/

/*
int num = 0;
while(num != -01){
cout <<"Ingrese un numero, -01 para terminar"<<endl;
cin>>num;

}
*/


/*
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

for(int i = 0; i <300; i++){
  SetConsoleTextAttribute(h,i);
  cout <<"Hola Mundo, soy José"<<endl;
}
*/

  float using = 11;

  return 0;
}
