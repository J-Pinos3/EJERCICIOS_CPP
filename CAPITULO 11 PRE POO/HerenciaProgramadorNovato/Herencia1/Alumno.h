#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"

class Alumno: public Persona
{
private:

    char *codigo;
    float calificaciones;


public:
    Alumno(char _nombre[], int edad, char _codigo[], float _calificaciones);
    void mostrarAlumno() const;
};


#endif //ALUMNO_H