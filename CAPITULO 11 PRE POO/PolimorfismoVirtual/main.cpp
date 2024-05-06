#include <iostream>
#include <iomanip>
#include "EmpleadoBaseMasComision.h"
#include "EmpleadoPorComision.h"
using namespace std;

int main(){

    // crea un objeto de la clase base
    EmpleadoPorComision empleadoPorComision( 
    "Sue", "Jones", "222-22-2222", 10000, .06 );

    // crea un apuntador de la clase base
    EmpleadoPorComision *empleadoPorComisionPtr = nullptr;

    // crea un objeto de la clase derivada
    EmpleadoBaseMasComision empleadoBaseMasComision(
    "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

    // crea un apuntador de la clase derivada
    EmpleadoBaseMasComision *empleadoBaseMasComisionPtr = nullptr;

    // establece el formato de salida de punto flotante
    cout << fixed << setprecision( 2 );


    // imprime los objetos usando la vinculación estática
    cout << "Invocando a la funcion imprimir en objetos de la clase base "
        << "\ny la clase derivada con vinculacion estatica\n\n";
    empleadoPorComision.imprimir(); // vinculación estática
    cout << "\n\n";
    empleadoBaseMasComision.imprimir(); // vinculación estática



    // imprime los objetos usando vinculación dinámica
    cout << "\n\n\nInvocando a la funcion imprimir en objetos de la clase base "
        << "y la \nclase derivada con vinculacion dinamica";
    // orienta el apuntador de la clase base al objeto de la clase base e imprime
    empleadoPorComisionPtr = &empleadoPorComision; 
    cout << "\n\nAl llamar a la funcion virtual imprimir con un apuntador"
        << "\nde la clase base a un objeto de la clase base se invoca a la "
        << "funcion imprimir de la clase base:\n\n";
    empleadoPorComisionPtr->imprimir();
    // invoca a la función imprimir de la clase base 

    
    // orienta un apuntador de la clase derivada al objeto de la clase derivada e imprime
    empleadoBaseMasComisionPtr = &empleadoBaseMasComision; 
    cout << "\n\nAl llamar a la funcion virtual imprimir con un apuntador "
        << "de la clase derivada\na un objeto de la clase derivada se invoca a "
        << "la funcion imprimir de la clase derivada:\n\n";
    empleadoBaseMasComisionPtr->imprimir(); 
    // invoca a la función imprimir de la clase derivada


// orienta un apuntador de la clase base a un objeto de la clase derivada e imprime
    empleadoPorComisionPtr = &empleadoBaseMasComision; 
    cout << "\n\nAl llamar a la funcion virtual imprimir con un apuntador de la clase base"
        << "\na un objeto de la clase derivada se invoca a la funcion "
        << "imprimir de la clase derivada:\n\n";

    // polimorfismo; invoca a la función imprimir de EmpleadoBaseMasComision;
    // apuntador de la clase base a un objeto de la clase derivada
    empleadoPorComisionPtr->imprimir(); 
    cout << endl;

    return 0;
}
