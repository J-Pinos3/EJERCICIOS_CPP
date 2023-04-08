#include <iostream>
#include "bank.h"
using namespace std;

int main(int argc, char const *argv[])
{
    
    BANK b1;
    BANK b2("Julio", 345.0);

    b1.datos_cuenta();
    cout << "\n---------------"<<endl;
    b2.datos_cuenta();

    b1.deposito(265.9);
    b2.retiro(45.3);

    cout<<endl;
    b1.datos_cuenta();
    cout << "\n---------------"<<endl;
    b2.datos_cuenta();
    return 0;
}
