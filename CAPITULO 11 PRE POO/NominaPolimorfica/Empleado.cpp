#include <iostream>
#include "Empleado.h"
using std::cout;
using std::string;

Empleado::Empleado(const string &nombre, const string &apellido, const string &numSegSoc)
    :primerNombre(nombre), apellidoPaterno(apellido), numSeguroSocial(numSegSoc)
{

}


void Empleado::setNombre(const string & nombre){
    primerNombre = nombre;
}
string Empleado::getNombre() const{ return primerNombre; }


void Empleado::setApellido(const string & apellido){
    apellidoPaterno = apellido;
}
string Empleado::getApellido() const{ return apellidoPaterno; }


void Empleado::setNumSeguroSocial(const string & nss){
    numSeguroSocial = nss;
}
string Empleado::getNumSeguroSocial() const{ return numSeguroSocial; }

void Empleado::imprimir() const{
    cout << getNombre() << " " << getApellido() 
        << "\nN"<<char(163)<<"mero de seguro social: "<< getNumSeguroSocial();
}