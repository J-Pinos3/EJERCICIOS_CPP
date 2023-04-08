#include <iostream>
#include <cstdlib>
using namespace std;

double cuadrado (int &lado1, int &dato); // SE PASA POR REFERENCIA
double cubo (const int lado2, const int dato1); // SE PASA POR VALOR
/*
OBTENGO UN ERROR XQ dato1 se pasa como constante y en la función cubo
lo estoy "intentado modificar" lo cual no se puede xq
es una constante

*/
int main() {

int lado1, lado2;
int dato , dato1;

cout <<"PASO DE PARAMETROS POR REFERENCIA"<<endl<<endl;
cout <<"Ingrese el valor del lado para hallar el area de un cuadrado"<<endl;
cin >> lado1;
cout <<"Ingrese un dato adicional para la función "<<endl;
cin >> dato;
cout <<"El area del CUADRADO es: "<<cuadrado(lado1, dato)<<endl;
cout <<"El valor final del dato es: "<<dato<<endl;

system("pause");
system("cls");


cout <<"PASO DE PARAMETROS POR VALOR"<<endl<<endl;
cout <<"Ingrese el valor del lado para hallar el volumen de un cubo"<<endl;
cin >> lado2;
cout <<"Ingrese un dato adicional para la función "<<endl;
cin >> dato1;
cout <<"El volumen del cubo es: "<<cubo(lado2, dato1)<<endl;
cout <<"dato1 no se puede modificar xq se pasa por valor"<<endl<<endl;
cout <<"El valor final del dato es: "<<dato1<<endl;



    return 0;
}


//*************************
double cuadrado (int &lado1, int &dato){
  dato = dato + 1;

  return lado1 * lado1;
} // FIN FUNCIÓN CUADRADO


//***********************
double cubo (const int lado2, const int dato1){
//cout <<"dato: "<<dato1 <<endl;
//dato1 = dato1 + 1;

  return lado2 * lado2 * lado2;
} // FIN FUNCIÓN CUBO
