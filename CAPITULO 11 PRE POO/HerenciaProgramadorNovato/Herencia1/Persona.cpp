#include "Persona.h"
#include <iostream>

Persona::Persona(int _edad, char _nombre[]){
    edad = _edad;
    nombre = _nombre;
}

void Persona::mostrarPersona() const{
    std::cout << "Nombre: " <<  nombre << std::endl;
    std::cout << "Edad: " <<  edad << std::endl;
}