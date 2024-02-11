#include <iostream>
#include <stdexcept>
#include <cctype>
#include "EmpleadoPorComision.h"
using namespace std;

EmpleadoPorComision::EmpleadoPorComision( const std::string &nombre, const std::string &apellido,
const std::string &numerosegsocial, double ventas, double tarifa  ){


primerNombre = nombre;
this->apellidoPaterno = apellido;
(*this).numSegSocial = numerosegsocial;

setVentasBrutas(ventas);
setTarifaComision(tarifa);

}


void EmpleadoPorComision::setPrimerNombre(const std::string &nombre){
    primerNombre = nombre;
}

std::string EmpleadoPorComision::getPrimerNombre() const{
    return primerNombre;
}



void EmpleadoPorComision::setApellidoPaterno(const std::string &apellido){
    apellidoPaterno = apellido;
}

std::string EmpleadoPorComision::getApellidoPaterno() const{
    return apellidoPaterno;
}


void EmpleadoPorComision::setNumeroSeguroSocial(const std::string & nss){

    if(nss.length() <= 5 ){
        throw invalid_argument("El número de seguridad social debe tener más de 5 números");
    }

    for (auto letra : nss)
    {
        if(isalpha(letra) != 0){
            throw invalid_argument("El número de seguridad social solo debe tener números");
        }
    }
    
    numSegSocial = nss;
}


std::string EmpleadoPorComision::getNumeroSeguroSocial() const{
    return numSegSocial;
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
    cout << "Empleado por comision: "<< primerNombre << " " << apellidoPaterno 
    << "\nNumero de seguro social: " << numSegSocial
    << "\nVentas Brutas: " << ventasBrutas
    << "\nTarifa de comision: " << tarifaComision << "\n";
}

