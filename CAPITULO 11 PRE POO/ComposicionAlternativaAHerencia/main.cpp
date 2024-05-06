#include <iostream>
#include "EmpleadoBaseMasComision.h"
#include "EmpleadoComision.h"
using namespace std;


int main()
{
    EmpleadoComision emp("Jhon","Krasinsky","99887766",300, 0.15);
    EmpleadoBaseMasComision empleado(emp, 1350.50);
    /*
    EmpleadoComision *emp = new  EmpleadoComision("Joey","Belladona","99887766",300, 0.15);
    EmpleadoBaseMasComision empleado(*emp, 1350.50);    
    */

    empleado.imprimir();
    return 0;
}
