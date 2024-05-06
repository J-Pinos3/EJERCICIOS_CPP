#ifndef BASE_MAS_COMISION_H
#define BASE_MAS_COMISION_H
#include "EmpleadoComision.h"

class EmpleadoBaseMasComision{

public:
    EmpleadoBaseMasComision(const EmpleadoComision &emp, double a);

    void setSalarioBase(double);
    double getSalarioBase() const;

    double ingresos() const;
    void imprimir() const;

private:
    double salarioBase;
    EmpleadoComision datosEmpleado;
};

#endif //BASE_MAS_COMISION_H
