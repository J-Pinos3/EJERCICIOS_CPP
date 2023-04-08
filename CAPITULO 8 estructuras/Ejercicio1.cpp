#include <iostream>
#include <cstdlib>
#include <iomanip>
//#include <clocale> https://www.cplusplus.com/reference/locale/locale/?kw=locale
using namespace std;


struct LIBRO{
char titulo[30];
char autor[30];
char editorial[30];
int anio;
float precio;
char fecha_compra[10];
};


struct Persona{
string nombre;
int edad;
float altura;
}humano2;



int main() {
LIBRO lib2;
LIBRO L1 = {"Programación en C++",
"Joyanes, Luis",
"McGrawhill",
2002,
20.63,
"02/6/05"
};


cout <<"Título: "<<L1.titulo<<endl;
cout <<"Autor: "<<L1.autor<<endl;
cout <<"Editorial: "<<L1.editorial<<endl;
cout <<"Anio: "<<L1.anio<<endl;
cout <<"Precio: "<<L1.precio<<endl;
cout <<"Fecha de compra: "<<L1.fecha_compra<<endl;
cout <<"tamanio de la estructura LIBROS: "<<sizeof(LIBRO)<<endl;

system("pause");
system("cls");

Persona humano1;
cout <<"Ingresa el nombre: ";
getline(cin, humano1.nombre);
cout <<"Ingresa la edad: ";
cin >> humano1.edad;
cout <<"Ingresa la altura: ";
cin >> humano1.altura;

cout <<endl<<endl<<endl<<endl;

cout <<"| Nombre: "<<humano1.nombre<<" |"<<endl;
cout <<"| Edad: "<<humano1.edad<<" |"<<endl;
cout <<"| Altura: "<<humano1.altura<<" |"<<endl;


humano2.nombre = "Julie";
cout <<"| Nombre: "<<humano2.nombre<<" |"<<endl;


    return 0;
}
