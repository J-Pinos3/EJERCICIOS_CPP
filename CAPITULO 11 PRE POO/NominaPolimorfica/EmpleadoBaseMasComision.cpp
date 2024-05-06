#include <iostream>
#include <stdexcept>
#include "EmpleadoBaseMasComision.h"

using std::cout;
using std::invalid_argument;

EmpleadoBaseMasComision::EmpleadoBaseMasComision(const std::string &nom, const std::string &ape,
    const std::string&num_Seg_soc, double vent_brutas , double tarifa_comision,
    double salario_base )
    :EmpleadoPorComision(nom, ape, num_Seg_soc, vent_brutas, tarifa_comision)
{
    setSalarioBase(salario_base);
}


void EmpleadoBaseMasComision::setSalarioBase(double salario_base){
    if(salario_base < 0.0){
        throw invalid_argument("El salario base debe ser > 0.0");
    }
    salarioBase = salario_base;
}

double EmpleadoBaseMasComision::getSalarioBase() const{ return salarioBase; }


double EmpleadoBaseMasComision::ingresos() const {
    return getSalarioBase() + EmpleadoPorComision::ingresos();
}


void EmpleadoBaseMasComision::imprimir() const {
    cout << "con salario base: ";
    EmpleadoPorComision::imprimir();
    cout <<"\nSalario base: " << getSalarioBase();
}
