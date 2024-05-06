#include "Paquete.h"
#include <iostream>
#include <stdexcept>

Paquete::Paquete(
    string nom, string direc,
    string ciud, string estad,
    string cod_post, string desti,
    double _peso, double _costo)
    :
    nombre(nom), direccion(direc),
    ciudad(ciud), estado(estad),
    codigo_postal(cod_post), destinatario(desti)
{
    setPeso(_peso);
    setCosto(_costo);
}


void Paquete::setPeso(double _peso){
    if(_peso < 0.0){
        throw std::invalid_argument("El peso debe ser >= 0.0 Kg");
    }

    pesoKG = _peso;
}


void Paquete::setCosto(double _costo){
    if(_costo < 0.0){
        throw std::invalid_argument("El costo debe ser >= 0.0 Usd");
    }

    costoKG = _costo;
}

double Paquete::getPeso() const{ return pesoKG; }

double Paquete::getCosto() const{ return costoKG; }

double Paquete::calcularCosto(){ return getPeso() * getCosto(); }