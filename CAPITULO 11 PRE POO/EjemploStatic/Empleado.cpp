#include <iostream>
#include "Empleado.h"
using namespace std;

unsigned int Empleado::cuenta = 0;

unsigned int Empleado::getCuenta(){
    return cuenta;
}


Empleado::Empleado(const std::string&nom, const std::string& ape2){
    this->primerNombre = nom;
    this->primerApellido = ape2;
    ++cuenta;
    cout <<"Se llamo a constructor de empleado para: " << primerNombre << " " << primerApellido << endl;
}


Empleado::~Empleado(){
    cout << "Se llamo a ~Empleado() para: " << primerNombre << " " << primerApellido << endl;
    --cuenta;
}



string Empleado::getPrimerNombre() const{
    return primerNombre;
}
string Empleado::getPrimerApellido() const{
    return primerApellido;
}