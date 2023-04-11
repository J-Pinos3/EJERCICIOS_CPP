#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <string>

class Empleado{

public:
    Empleado(const std::string&nom, const std::string& ape2);
    ~Empleado();

    std::string getPrimerNombre() const;
    std::string getPrimerApellido() const;

    static unsigned int getCuenta();//no puede ser const

private:
    std::string primerNombre;
    std::string primerApellido;

    static unsigned int cuenta;//almacenará el número de objetos instanciados
    //tmapoco puede ser inicializado
};

#endif //EMPLEADO_H