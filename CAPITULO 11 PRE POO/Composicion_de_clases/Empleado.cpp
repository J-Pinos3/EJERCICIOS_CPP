#include <iostream>
#include "Empleado.h"
#include "Fecha.h"
using namespace std;


Empleado::Empleado(const std::string&nombre, const std::string& apellido,
            const Fecha &fenac, const Fecha &fecon)
    :primer_nombre(nombre), apellido_paterno(apellido),
    fecha_nacimiento(fenac), fecha_contratacion(fecon)
{
    cout <<"Constructor del objeto empleado: "
    << primer_nombre << " " << apellido_paterno << endl;
}


void Empleado::imprimir() const{
    cout << apellido_paterno << ", " << primer_nombre << " contratacion: ";
    fecha_contratacion.imprimir();
    cout <<" Nacimiento; ";
    fecha_nacimiento.imprimir();
    cout << endl;
}

Empleado::~Empleado(){
    cout <<"Destructor del objeto empleado: " <<  apellido_paterno << ", " <<
    primer_nombre << endl;
}