#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

    //LAS REFERENCIAS SON VARIABLES QUE SE REFIEREN A OTRA VARIABLE
    //Y POR TANTO COMPARTEN EL MISMO ESPACIO DE MEMORIA
    cout <<setw(30)<<"REFERENCIAS A VARIABLES"<<endl;
    int a = 15;
    int &ref_a = a; //mantiene un puntero a la memoria de la variable a

    cout <<"&ref_a (direccion): "<< &ref_a <<endl;
    cout <<"&a: "<< &a<<endl;
    cout <<"ref_a: " << ref_a <<endl;
    cout <<"a: "<<a <<endl;

    ref_a = 256;

    cout <<"ref_a: " << ref_a <<endl;//256
    cout <<"a: "<<a <<endl;//256







    cout <<endl<<endl<<endl;
    cout <<setw(31)<<"REFERENCIAS A CONSTANTES"<<endl;

    const string cad = "bienvenido a C++";
    const string &text = cad;//string &text = cad; ERROR
    //text = "d"; ERROR, NO SE MODIFICA UNA CONSTANTE
    cout <<"cad: " << cad <<endl;
    cout <<"text: " << text<<endl;



    cout <<endl<<endl<<endl;
    cout <<setw(31)<<"REFERENCIAS SOLO LECTURA"<<endl;

    int j = 11;
    const double &ref_j = j;
    //ref_j = 1989;LA REFERENCIA ES DE SOLO LECTURA
    cout <<"j: "<< j <<endl;
    cout <<"ref_j:  "<<ref_j<<endl;







  return 0;
}



























//
