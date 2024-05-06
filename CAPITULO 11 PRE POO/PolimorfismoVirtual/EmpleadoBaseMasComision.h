#ifndef BASEMAS_H
#define BASEMAS_H
#include <string>
#include "EmpleadoPorComision.h"

class EmpleadoBaseMasComision: public EmpleadoPorComision{

public:

    EmpleadoBaseMasComision(const std::string &, const std::string &,
        const std::string&, double = 0.0, double = 0.0, double = 0.0);


    void setSalarioBase(double);
    double getSalarioBase() const;

    virtual double ingresos() const override;
    virtual void imprimir() const override;

private:
    double salarioBase;

};

#endif //BASEMAS_H