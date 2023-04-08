#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include "Fecha.h"

class Empleado{

public:
    Empleado(const std::string&nom, const std::string& ape,
            const Fecha &f1, const Fecha &f2);

    void imprimir() const;
    ~Empleado();

private:
    std::string primer_nombre;
    std::string apellido_paterno;
    const Fecha fecha_nacimiento;
    const Fecha fecha_contratacion;
};


#endif