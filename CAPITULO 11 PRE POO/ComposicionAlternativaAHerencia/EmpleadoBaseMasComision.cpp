// páginas    547 Ejercicio    y    440 composicion de clasese
#include <iostream>
#include <stdexcept>
#include "EmpleadoBaseMasComision.h"
#include "EmpleadoComision.h"
using namespace std;

EmpleadoBaseMasComision::EmpleadoBaseMasComision(const EmpleadoComision &emp, double salario){
    datosEmpleado = emp;
    setSalarioBase(salario);
}

void EmpleadoBaseMasComision::setSalarioBase(double salario){
    if(salario < 0.0){
        throw invalid_argument("El salario debe ser >= 0.0");
    }
    this->salarioBase = salario;
}


double EmpleadoBaseMasComision::getSalarioBase() const{ return salarioBase; }


double EmpleadoBaseMasComision::ingresos() const{
    return getSalarioBase() + (datosEmpleado.getTarifaComision() + datosEmpleado.getVentasBrutas());
}

void EmpleadoBaseMasComision::imprimir() const{
    cout << "Empleado con sueldo base más comisión\n";
    datosEmpleado.imprimir();
    cout << "Salario base: " << getSalarioBase() << "\n";
}