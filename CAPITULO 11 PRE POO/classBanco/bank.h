#ifndef BANK_H
#define BANK_H

#include <string>
class BANK{

private:
    std::string nombre;
    double saldo;

public:
    BANK();
    BANK(std::string nombre, double saldo);
    void retiro(double monto);
    void deposito(double monto);
    void datos_cuenta();


};

#endif