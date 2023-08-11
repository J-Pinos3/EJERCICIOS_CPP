#include <iostream>
#include "Cuenta.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    
    CuentaAhorros c1("Julio", 2000.0);
    CuentaAhorros c2("Emily", 3000.0);

    c1.imprimirCuenta();
    cout << endl;
    c1.calcularInteresMensual();
    cout << endl;

    c2.imprimirCuenta();
    cout << endl;
    c2.calcularInteresMensual();
    cout << endl;

    CuentaAhorros::modificarTasaInteres(0.15);

    cout << endl << endl;

    c1.imprimirCuenta();
    cout << endl;
    c1.calcularInteresMensual();
    cout << endl;

    c2.imprimirCuenta();
    cout << endl;
    c2.calcularInteresMensual();
    cout << endl;


    return 0;
}
