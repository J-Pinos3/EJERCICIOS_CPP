#include <iostream>
#include "Empleado.h"
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "El numero de empleados antes de instanciar cualquier objeto es: " << Empleado::getCuenta() << endl;
    
    {
        Empleado e1("SUSAN","BAKER");
        Empleado e2("ROBERT","JHONSON");

        cout << "El numero de empleados antes de instanciar 2 objetos es: " << Empleado::getCuenta() << endl;

        cout <<"Empleado 1" << 
            e1.getPrimerNombre() << " " << e1.getPrimerApellido() << endl;

        cout <<"Empleado 2" << 
        e1.getPrimerNombre() << " " << e1.getPrimerApellido() << endl;
    }


    cout << "El número de empleados después de eliminar los objetos es: " << Empleado::getCuenta() << endl;


    return 0;
}
