#include <string>
#include <iostream>
#include "Persona_class.h"
using namespace std;


Persona_class::Persona_class(){
    nombre = "ae-x452";
    edad = 1;
}

void Persona_class::setNombre(string nombre){
    this->nombre = nombre;
}

string Persona_class::getNombre() const{
    return nombre;
}


void Persona_class::setEdad(int edad){
    if( !(edad < 0) ){
        this->edad = edad;
    }
}

int Persona_class::getEdad() const{
    return edad;
}


void Persona_class::mostrar_DatosCompletos() const{
    cout << "Nombre: " << getNombre()<<endl;
    cout << "Edad: " << getEdad()<<endl;
}
