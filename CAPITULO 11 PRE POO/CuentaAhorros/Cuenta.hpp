#ifndef CUENTA_H
#define CUENTA_H
#include <string>

class CuentaAhorros{

public:

    explicit CuentaAhorros(const std::string &name, const double saldo);
    ~CuentaAhorros();


    void calcularInteresMensual();
    static void modificarTasaInteres(double nuevo);
    void imprimirCuenta() const;

private:
    std::string titular;
    double saldoAhorros;
    static double tasaInteresAnual;
};


#endif //CUENTA_h