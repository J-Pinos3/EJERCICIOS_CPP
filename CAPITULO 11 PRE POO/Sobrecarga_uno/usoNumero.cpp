#include <iostream>
#include "NumeroTelefonico.h"
using namespace std;

int main(int argc, char const *argv[])
{


    NumeroTelefonico telefonito;

    cout <<"Escriba el número telefónico en la forma '(000) 000-0000':  ";
    cin >> telefonito;


    cout <<"EL número introducido fue: " << telefonito<<endl;


    return 0;
}
