#include <iostream>
#include "Racional.h"
using namespace std;

int main(int argc, char const *argv[])
{
    
    RACIONAL f1(3,5);
    RACIONAL f2(8,7);

    cout <<"Fracción 1: ";  RACIONAL::imprimirFraccion(f1.getNumerador(), f1.getDenominador());
    cout <<"Fracción 2: ";  RACIONAL::imprimirFraccion(f2.getNumerador(), f2.getDenominador());

    f1.sumar(f2);

    cout << endl;

    f1.restar(f2);
    
    cout << endl;
    
    f1.multiplicar(f2);
    
    cout << endl;
    
    f1.dividir(f2);
    
    cout << endl;
    
    return 0;
}
