#ifndef PERSONA_h
#define PERSONA_h

class Persona{

private:
    int edad;
    char *nombre;

public:
    Persona(int _edad, char _nombre[]);
    void mostrarPersona() const;
};

#endif //PERSONA_h