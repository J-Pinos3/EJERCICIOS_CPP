#ifndef BASEBASCOMISION_H
#define BASEBASCOMISION_H

#include <string>
#include "EmpleadoPorComision.h"

class EmpleadoBaseMasComision: public EmpleadoPorComision
{
public:
    EmpleadoBaseMasComision( const std::string &, const std::string &,
            const std::string &, double = 0.0, double = 0.0, double = 0.0);


    void setSalarioBase(double);
    double getSalarioBase() const;

    double ingresos() const;
    void imprimir() const;


private:
    double salarioBase;

};



#endif //BASEBASCOMISION_H