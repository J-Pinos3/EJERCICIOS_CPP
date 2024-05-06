#include "EmpleadoComision.h"
#include <stdexcept>
#include <cctype>
#include <iostream>

EmpleadoComision::EmpleadoComision(const std::string &nom, const std::string &ape, const std::string &nsegsocial, double ventas, double tarifa){
    primerNombre = nom;
    apellidoPaterno = ape;
    (*this).numeroSeguroSocial = nsegsocial;

    setVentasBrutas(ventas);
    setTarifaComision(tarifa);
}

void EmpleadoComision::setPrimerNombre(const std::string &nombre){
    primerNombre = nombre;
}

std::string EmpleadoComision::getPrimerNombre() const{
    return primerNombre;
}


void EmpleadoComision::setApellidoPaterno(const std::string &apellido){
    apellidoPaterno = apellido;
}

std::string EmpleadoComision::getApellidoPaterno() const{
    return apellidoPaterno;
}

void EmpleadoComision::setNumeroSeguroSocial(const std::string &nss){
    if(nss.length() <= 5){ throw std::invalid_argument("El número de seguridad social debe tener más de 5 dígitos"); }

    for(char letra : nss){
        if(isalpha(letra) != 0){
            throw std::invalid_argument("El número de seguridad social no puede contener caracteres alfabeticos");
        }
    }

    numeroSeguroSocial = nss;
}

std::string EmpleadoComision::getNumeroSeguroSocial() const{
    return numeroSeguroSocial;
}

void EmpleadoComision::setVentasBrutas(double _ventas){
    if( _ventas < 0.0 ){
        throw std::invalid_argument("Las ventas deben ser >= 0.0");
    }

    this->ventasBrutas = _ventas;
}

double EmpleadoComision::getVentasBrutas() const{ return ventasBrutas; }


void EmpleadoComision::setTarifaComision(double tarifa){
    if(tarifa < 0.0 || tarifa > 1.0){
        throw std::invalid_argument("La tarifa debe estar entre 0.0 y 1.0");
    }
    tarifaComision = tarifa;
}

double EmpleadoComision::getTarifaComision() const{ return tarifaComision; }


double EmpleadoComision::ingresos() const{ return getTarifaComision() * getVentasBrutas(); }

void EmpleadoComision::imprimir() const{
    std::cout << "Empleado por comision: "<< getPrimerNombre() << " " << getApellidoPaterno() 
    << "\nNumero de seguro social: " << getNumeroSeguroSocial()
    << "\nVentas Brutas: " << getVentasBrutas()
    << "\nTarifa de comision: " << getTarifaComision() << "\n";
}