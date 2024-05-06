#ifndef BASEMAS_COMISION_H
#define BASEMAS_COMISION_H
#include <string>
#include "EmpleadoComision.h"

class EmpleadoBaseMasComision: public EmpleadoPorComision{

public:    
    EmpleadoBaseMasComision(const std::string &nom, const std::string &ape,
        const std::string&num_Seg_soc, double vent_brutas = 0.0, double tarifa_comision = 0.0,
        double salario_base = 0.0);

    virtual ~EmpleadoBaseMasComision() { }

    void setSalarioBase(double);
    double getSalarioBase() const;

    virtual double ingresos() const override;
    virtual void imprimir() const override;

private:
    double salarioBase;

};

#endif //BASEMAS_COMISION_H