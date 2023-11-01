#include <iostream>
#include "Racional.h"
using namespace std;

int main() {
    RACIONAL f1(3, 5);
    RACIONAL f2(8, 7);

    RACIONAL f3(5, 8);
    RACIONAL f4(10, 3);
    RACIONAL frac;

    cout << "Fracción 1: " << f1 << endl;
    cout << "Fracción 2: " << f2 << endl;

    cout << "Suma: " << f1 + f2 << endl;
    cout << "Resta: " << f1 - f2 << endl;
    cout << "Multiplicación: " << f1 * f2 << endl;
    cout << "División: " << f1 / f2 << endl;

    cout << "-----------------" << endl;
    cout << "Fracción 3: " << f3 << endl;
    cout << "Fracción 4: " << f4 << endl;
    cout << "-f: " << -f3 << endl;
    cout << "f3 + f4: " << f3 + f4 << endl;
    cout << "f3 - f4: " << f3 - f4 << endl;
    cout << "f3 * f4: " << f3 * f4 << endl;
    cout << "f3 / f4: " << f3 / f4 << endl;

    ++f3;
    cout << "++f3: " << f3 << endl;
    f4 += f1;
    cout << "f4 += f1: " << f4 << endl;

    cout << "\nIngrese los valores para la nueva fracción: ";
    cin >> frac;
    cout << "frac: " << frac << endl;

    return 0;
}



/*
#include <iostream>
#include "Racional.h"
using namespace std;

int main(int argc, char const *argv[])
{
    
    RACIONAL f1(3,5);
    RACIONAL f2(8,7);

    RACIONAL f3(5,8);
    RACIONAL f4(10,3);
    RACIONAL frac;

    cout <<"Fracción 1: ";  RACIONAL::imprimirFraccion(f1.getNumerador(), f1.getDenominador());
    cout <<"Fracción 2: ";  RACIONAL::imprimirFraccion(f2.getNumerador(), f2.getDenominador());

    f1.sumar(f2);

    cout << endl;

    f1.restar(f2);
    
    cout << endl;
    
    f1.multiplicar(f2);
    
    cout << endl;
    
    f1.dividir(f2);
    
    cout << endl<< endl << "-----------------" << endl;
    
    cout << "Fracción 3: "; cout << f3 << endl;
    cout << "Fracción 4: " << f4 << endl;

    cout << "-f: "; cout << -f3 << endl; 
    cout << "f3 + f4: "; cout << f3 + f4 << endl;
    cout << "f3 - f4: "; cout << f3 - f4 << endl;
    cout << "f3 * f4: "; cout << f3 * f4 << endl;
    cout << "f3 / f4: "; cout << f3 / f4 << endl;

    ++f3;
    cout << "++f3: "; cout << f3 << endl;
    f4 += f1;
    cout << "f4 += f1: "; cout << f4 << endl<< endl;

    cout << "\nIngrese los valores para la nueva fracción: ";
    cin >> frac;

    cout << "frac: "; cout << frac << endl;
    return 0;
}
*/