#include <iostream>
#include <stdexcept>
#include "EmpleadoBaseMasComision.h"
using namespace std;

EmpleadoBaseMasComision::EmpleadoBaseMasComision( const std::string & nombre, const std::string &apellido,
        const std::string &numerosegsocial, double ventas, double tarifa, double salario)
        :EmpleadoPorComision(nombre, apellido, numerosegsocial, ventas, tarifa)//explicitamente se llama al constructor de la clase padre
{
    setSalarioBase(salario);

}


void EmpleadoBaseMasComision::setSalarioBase(double salario){
    if (salario >= 0.0){
        salarioBase = salario;
    
    }else{
        throw invalid_argument("El salario debe ser >= 0.0");
    }
}


double EmpleadoBaseMasComision::getSalarioBase() const { return salarioBase; }


double EmpleadoBaseMasComision::ingresos() const{
    //la clase hija no puede acceder a los datos private de la clase padre
    //return salarioBase + (ventasBrutas + tarifaComision);
    return getSalarioBase() + EmpleadoPorComision::ingresos();
}

void EmpleadoBaseMasComision::imprimir() const{
    //la clase hija no puede acceder a los datos private de la clase padre
    /*
    cout << "Empleado por comision: "<< primerNombre << " " << apellidoPaterno 
    << "\nNumero de seguro social: " << numeroSeguroSocial
    << "\nVentas brutas: " << ventasBrutas
    << "\nTarifa de comision: " << tarifaComision
    << "\nSalario base: " << salarioBase << "\n";
    */

    //puedo acceder a los datos protected
    //cout << "Empleado por comision: "<< primerNombre << " " << apellidoPaterno
    cout << "con salario base: ";
    EmpleadoPorComision::imprimir();
    cout << "\nSalario base: " << getSalarioBase() << "\n";
}
