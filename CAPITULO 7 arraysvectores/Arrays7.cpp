#include <iostream>
using namespace std;

int main() {
const int TAM = 5;

int num[TAM] = {10, 20, 30, 40, 50};
cout <<"tamanio de num: "<<sizeof(num)/sizeof(num[0])<<endl;//5


float Xer[] = {1.12, 2.3, 33.1, 0.65};
cout <<"tamanio de Xer: "<<sizeof(Xer)/sizeof(Xer[0])<<endl;//4


char Cadena[8] = "abcde";
cout <<"cadena-->"<<Cadena<<endl;


cout <<endl;


char cadena1[30]; //si ingreso con (cin) hola jose-- solo se graba el hola
cout <<"Ingresa una palabra"<<endl; // si se almacena
cin >> cadena1; // correctamente pero solo 1 palabra
cout <<"cadena1-->"<<cadena1<<endl; //en la cadena de caracteres
cin.ignore(); //descarto el ultimo caracter (el nulo)

cout <<endl;


char cadena2[30];
cout <<"Ingresa una palabra"<<endl;
//getline(cin,cadena2,30); NO FUNCIONA SALE ERROR
//cadena2 = cin.getline(); NO FUNCIONA SALE ERROR
//gets(cadena2); SI SE ALMACENA PERO SI EL TEXTO ES GRANDE OCUPARÁ POSICIONES DE MEMORIA QUE NO SON DE cadena2
cin.getline(cadena2,15,'\n');//longitd de 30 caracteres y termina con un salto de linea
cout <<"cadena2-->"<<cadena2<<endl;






    return 0;
}
