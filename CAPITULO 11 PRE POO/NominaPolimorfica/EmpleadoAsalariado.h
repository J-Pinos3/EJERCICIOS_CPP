#ifndef ASALARIADO_h
#define ASALARIADO_h

#include <string>
#include "Empleado.h"

class EmpleadoAsalariado: public Empleado{

public:
    EmpleadoAsalariado(const std::string &, const std::string &,
        const std::string &, double = 0.0);

    virtual ~EmpleadoAsalariado (){ }

    void setSalarioSemanal(double);
    double getSalarioSemanal() const;

    virtual double ingresos() const override;
    virtual void imprimir() const override;

private:
    double salarioSemanal;
};



#endif //ASALARIADO_h