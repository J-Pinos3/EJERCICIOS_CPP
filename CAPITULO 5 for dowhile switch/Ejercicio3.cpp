#include <iostream>
using namespace std;


int main(){
  // EJERCICIO 1 (SUMA DE ENTEROS)

/*
int cantidad;
cout <<"Ingrese la cantidad de dígitos a sumar: ";
cin >> cantidad;

for(int i = 100; i <=cantidad * 100; i = i + 100 ){
  cout <<i<<" ";

}
*/




  // EJERCICIO 2 (PROMEDIO DE ENTEROS) forma 1
/*
int cantidad;
double contador = 0, total = 0;

for(contador = 0; contador != 9999; contador++){
cout <<"numero (9999 para terminar): ";
cin >> cantidad;
  if(cantidad == 9999){
    break;
  }

cout <<"contador ---> "<<contador<<endl;

total = total + cantidad;

}
double promedio = total/contador;

cout <<"Promedio ----> "<< promedio <<endl;
*/



// EJERCICIO 2 (PROMEDIO DE ENTEROS) forma 2

int cantidad = 0;
double contador = 0;
double total = 0;

for(contador = 0; contador != 9999; contador++){
total = total + cantidad;

cout <<"contador ---> "<<contador<<endl;

cout <<"numero (9999 para terminar): ";
cin >> cantidad;
  if(cantidad == 9999){
    break;
  }

cout <<"contador ---> "<<contador<<endl;


}

double promedio = total/contador;
cout <<"contador ---> "<<contador<<endl;
cout <<"Promedio ----> "<< promedio <<endl;






    return 0;
}
