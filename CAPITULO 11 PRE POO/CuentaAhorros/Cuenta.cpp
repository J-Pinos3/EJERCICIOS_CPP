#include "Cuenta.hpp"
#include <iostream>
using namespace std;

double CuentaAhorros::tasaInteresAnual = 0.12;

void CuentaAhorros::modificarTasaInteres(double nuevo){
    cout <<"\nSe ha modificado la tasa de interes anual de: " 
    << tasaInteresAnual << " a: ";
    
    tasaInteresAnual = nuevo;

    cout << tasaInteresAnual << "."<<endl;
}



CuentaAhorros::CuentaAhorros(const std::string &name, const double saldo){
    this->titular = name;
    this->saldoAhorros = saldo;
}


CuentaAhorros::~CuentaAhorros(){ }


void CuentaAhorros::calcularInteresMensual(){

    double interes = (saldoAhorros * tasaInteresAnual)/12;
    cout << "El interes mensual es: " << interes << endl;

    cout << "Su saldo total es: " << saldoAhorros << endl;
    saldoAhorros += interes;
    cout << "Su saldo total + ineteres es: " << saldoAhorros << endl;
}

void CuentaAhorros::imprimirCuenta() const{
    
    cout << "\n--------------------\n" 
        << "Titular: " << titular  
        << "\nSaldo: " << saldoAhorros <<
        "\n--------------------\n"; 
}