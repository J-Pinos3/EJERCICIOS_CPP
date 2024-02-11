#include "Persona.h"
#include "Alumno.h"
#include <iostream>

Alumno::Alumno(char _nombre[], int edad, char _codigo[], float _calificaciones)
    :Persona(edad, _nombre)
{
    this->codigo = _codigo;
    (*this).calificaciones = _calificaciones;
}

void Alumno::mostrarAlumno() const{
    
    Persona::mostrarPersona();
    std::cout << "Código: " <<  codigo << std::endl;
    std::cout << "Calificación: " <<  calificaciones << std::endl;
}