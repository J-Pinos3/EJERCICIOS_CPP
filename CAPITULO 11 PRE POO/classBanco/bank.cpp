#include <iostream>
#include <exception>
#include "bank.h"

BANK::BANK(){
    nombre = " ";
    saldo = 0.0;
}

/*
BANK::BANK(std::string nombre, double saldo){
    if(saldo < 0){
        throw std::invalid_argument("El saldo de la cuenta debe ser >= 0");
    }

    this->nombre = nombre;
    this->saldo = saldo;
}*/
BANK::BANK(std::string nombre, double saldo):nombre(nombre), saldo(saldo){

}


void BANK::retiro(double monto){
    if( (monto > 0) && (monto <= this->saldo) ){
        this->saldo -= monto;
    }
}

void BANK::deposito(double monto){
    if( monto > 0 ){
        this->saldo += monto;
    }
}

void BANK::datos_cuenta(){
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Saldo: " << this->saldo << std::endl;
}