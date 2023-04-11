#include <iostream>
using namespace std;
#include "Cuenta.h"


int main(int argc, char const *argv[])
{
    
    Cuenta contador;

    cout <<"contador.x luego de crear el objeto: ";
    contador.imprimit();

    cout <<endl;

    establecerX(contador, 456);

    cout <<"contador.x luego de llamar a la función friend establecerX: ";
    contador.imprimit();

    return 0;
}
