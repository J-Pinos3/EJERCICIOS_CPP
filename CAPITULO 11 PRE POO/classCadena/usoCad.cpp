#include <iostream>
#include <new>
#include <cstring>
#include "Cadena.h"
using namespace std;


int main(int argc, char const *argv[])
{

    Cadena cad1((char *)"cadena de prueba.");
    Cadena cad2(cad1);
    Cadena *cad3 = nullptr;
    char c[256];

    cout <<"Cadena 1: " << cad1.Leer(c)<<endl;
    cout <<"Cadena 2: " << cad2.Leer(c)<<endl<<endl;

    cad1.asignar((char *)"Otro texto de prueba.");
    cad3 = new Cadena((char *)"Texto para la cadena 3.");

    cout <<"Cadena 1: " << cad1.Leer(c)<<endl;
    cout <<"Cadena 2: " << cad2.Leer(c)<<endl;
    cout <<"Cadena 3: " << cad3->Leer(c) << endl << endl;

    delete cad3;
    return 0;
}
