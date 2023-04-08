#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

/*
5.8. Escribir un programa que presente los valores de la función
 coseno(3x )-2x para los valores de x igual a 0, 0.5, 1.0, ... 4.5, 5.

*/
int main (){
// LAS FUNCIONES TRIGONOMETRICAS DEBEN RECIBIR EL ANGULO EN RADIANES
// en este ejercicio no es necesario

const double PI = 3.141592654;

int contador = 0;
double valor = 5;
double resultado;
while (valor >= 0){

  cout <<"valor "<<valor<<endl;
  valor = valor - 0.5;
  contador++;
}
cout <<"EL NÚMERO TOTAL DE TÉRMINOS ES: "<<contador<<endl;

system("pause");
system("cls");


cout << "El resultado esta en radianes"<<endl<<endl;
valor = 5;
cout <<"|angulo|"<<setw(20)<<"|resultado|"<<endl;
for (int i = 1; i <= contador; i++){

resultado = cos( 3*(valor) ) - 2*valor;

cout <<valor;
cout <<setw(25)<<resultado<<endl;

valor = valor - 0.5;

}





    return 0;
}
