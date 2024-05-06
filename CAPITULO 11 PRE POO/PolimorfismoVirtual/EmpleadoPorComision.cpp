#include <iostream>
#include <stdexcept>
#include <cctype>
#include "EmpleadoPorComision.h"
using namespace std;

EmpleadoPorComision::EmpleadoPorComision( const std::string &_nombre, const std::string &apellido,
const std::string &numerosegsocial, double ventas, double tarifa  ){


nombre = _nombre;
this->apellido = apellido;
(*this).seguroSocial = numerosegsocial;

setVentasBrutas(ventas);
setTarifaComision(tarifa);

}


void EmpleadoPorComision::setPrimerNombre(const std::string &_nombre){
    nombre = _nombre;
}

std::string EmpleadoPorComision::getPrimerNombre() const{
    return nombre;
}



void EmpleadoPorComision::setApellido(const std::string &_apellido){
    apellido = _apellido;
}

std::string EmpleadoPorComision::getApellido() const{
    return apellido;
}


void EmpleadoPorComision::setSeguroSocial(const std::string & nss){

    if(nss.length() <= 5 ){
        throw invalid_argument("El número de seguridad social debe tener más de 5 números");
    }

    for (auto letra : nss)
    {
        if(isalpha(letra) != 0){
            throw invalid_argument("El número de seguridad social solo debe tener números");
        }
    }
    
    seguroSocial = nss;
}


std::string EmpleadoPorComision::getSeguroSocial() const{
    return seguroSocial;
}



void EmpleadoPorComision::setVentasBrutas(double ventas){
    if(ventas >= 0.0){
        ventasBrutas = ventas;
    }else{
        throw invalid_argument("Las ventas deben ser >= 0.0");
    }

}


double EmpleadoPorComision::getVentasBrutas() const{
    return ventasBrutas;
}


void EmpleadoPorComision::setTarifaComision(double tarifa){
    if(tarifa > 0.0 && tarifa < 1.0){
        tarifaComision = tarifa;
    }else{
        throw invalid_argument("La tarifa de comisión debe estar entre 0.0 y 1.0");
    }

}

double EmpleadoPorComision::getTarifaComision() const{
    return tarifaComision;
}

double EmpleadoPorComision::ingresos() const{
    return tarifaComision * ventasBrutas;
}


void EmpleadoPorComision::imprimir() const{
    cout << "empleado por comision: "<< getPrimerNombre() << " " << getApellido() 
    << "\nNumero de seguro social: " << getSeguroSocial()
    << "\nVentas Brutas: " << getVentasBrutas()
    << "\nTarifa de comision: " << getTarifaComision() << "\n";
}

