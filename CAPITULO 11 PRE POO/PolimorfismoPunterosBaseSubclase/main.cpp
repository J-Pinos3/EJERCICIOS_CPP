#include <iostream>
#include <iomanip>
#include <string>

#include "EmpleadoPorComision.h"
#include "EmpleadoBaseMasComision.h"
using namespace std;

//SE LLAMAN A LOS OBJETOS DEL TIPO DE CLASE DEL PUNTERO
int main(){
    
    string linea(20,'-');

    string cuadros(20,'=');
    
    EmpleadoPorComision empleadoPorComision(
        "Sue","Jones","222-22-2222",10000, 0.06);
    EmpleadoPorComision *Ptr_empleadoPorComision = nullptr;


    EmpleadoBaseMasComision empleadoBaseMasComision(
        "Bob", "Lewis","333-33-3333",5000, 0.04, 300);
    EmpleadoBaseMasComision *Ptr_empleadoBaseMasComision = nullptr;

    cout << fixed << setprecision(2);
    
    cout << linea << endl;
    cout << "Impresión de los objetos de clase base y clase derivada"<<endl<<endl;
    empleadoPorComision.imprimir();

    cout <<"\n\n";

    empleadoBaseMasComision.imprimir();
    cout <<"\n"<<linea << endl << endl ;




    //orienta el puntero de la clase base al objeto de la clase base e imprime
    Ptr_empleadoPorComision = &empleadoPorComision;
    cout << "\nAl llamar a imprimir con el puntero de la clase base al objeto de la clase base"
        << " se invoca a la función imprimir de la clase base:\n\n";
    Ptr_empleadoPorComision->imprimir();


    //orienta el puntero de la subclase al objeto de la subclase e imprime
    Ptr_empleadoBaseMasComision = &empleadoBaseMasComision;
    cout << "\nAl llamar a imprimir con el puntero de la subclase al objeto de la subclase"
        << " se invoca a la función imprimir de la subclase:\n\n";  
    Ptr_empleadoBaseMasComision->imprimir();
    cout << "\n"<< cuadros << endl << endl;


    //orienta el puntero de la clase base al objeto de la subclase e imprime
    Ptr_empleadoPorComision = & empleadoBaseMasComision;
    cout << "\nAl llamar a imprimir con el puntero de la clase base al objeto de la subclase"
        << " se invoca a la función imprimir de la clase base ene lobjeto de la subclase:\n\n";
    Ptr_empleadoPorComision->imprimir();
    //NO MUESTRA EL SALARIO BASE
    cout << endl;

    /*
    *ERROR AL ASIGNAR A UN PUNTERO DE LA SUBCLASE, LA DIRECCIÓN DEUN UBJETO DE LA CLASE BASE
    EmpleadoPorComision empleadoPorComision("Sue","Jones","222-22-2222",10000, 0.06);
    
    EmpleadoBaseMasComision *Ptr_empleadoBaseMasComision = nullptr;
    Ptr_empleadoBaseMasComision = &empleadoPorComision;
    */

    return 0;
}