#include <iostream>
#include <stdexcept>
#include "EmpleadoAsalariado.h"
using std::cout;
using std::invalid_argument;

EmpleadoAsalariado::EmpleadoAsalariado(const std::string &nombre, const std::string &apellido,
        const std::string & nss, double salario_semanal)
        :Empleado(nombre, apellido, nss)
{
    setSalarioSemanal(salario_semanal);
}


void EmpleadoAsalariado::setSalarioSemanal(double salario_semanal){
    if(salario_semanal < 0.0){
        throw invalid_argument("EL salario semanal debe ser >= 0.0");
    }

    salarioSemanal = salario_semanal;
}

double EmpleadoAsalariado::getSalarioSemanal() const{ return salarioSemanal; }


double EmpleadoAsalariado::ingresos() const{ return getSalarioSemanal(); }

void EmpleadoAsalariado::imprimir() const{
    cout << "empleado asalariado: ";
    Empleado::imprimir();
    cout <<"\nSalario semanal: " << getSalarioSemanal();
}