#include <iostream>
#include "Fecha.h"
#include "Empleado.h"
using namespace std;

int main(int argc, char const *argv[])
{
    
    Fecha nacimiento(7,24,1949);
    Fecha contratacion(3,12,1988);

    Empleado gerente("Bob", "Blue", nacimiento, contratacion);
    cout << endl;
    gerente.imprimir();
    return 0;
}
