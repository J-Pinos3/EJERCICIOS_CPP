#include <iostream>
#include <iomanip>
#include <vector>

#include "Empleado.h"
#include "EmpleadoAsalariado.h"
#include "EmpleadoComision.h"
#include "EmpleadoBaseMasComision.h"
using namespace std;

void virtualViaApuntador(const Empleado* const);
void virtualViaReferencia(const Empleado &);

int main(){

    cout << fixed << setprecision(2);

    EmpleadoAsalariado empleadoAsalariado(
        "John","Smith","111-11-1111",800 );

    EmpleadoPorComision empleadorPorComision(
        "Sue","Jones","333-33-3333",10000, 0.06 );

    EmpleadoBaseMasComision empleadoBaseMasComision(
        "Bob","Lewis","444-44-4444",5000,0.04, 300 );



    cout << "Empleados procesados individualmente, con vinculaci"<<char(162)<<"n estatica:\n\n";    
    empleadoAsalariado.imprimir();
    cout << "\nObtuvo: $"<< empleadoAsalariado.ingresos() << "\n\n";

    empleadorPorComision.imprimir();
    cout << "\nObtuvo: $"<< empleadorPorComision.ingresos() << "\n\n";

    empleadoBaseMasComision.imprimir();
    cout << "\nObtuvo: $"<< empleadoBaseMasComision.ingresos() << "\n\n\n";
    


    vector<Empleado *> empleados(3);

    empleados[0] = &empleadoAsalariado;
    empleados[1] = &empleadorPorComision;
    empleados[2] = &empleadoBaseMasComision;

    cout << "\tEmpleados procesados con polimorfismo, con vinculaci"<<char(162)<<"n dinamica:\n\n";
    cout <<"llamadas a funciones virtuales con punteros de la clase base\n\n";

    for(const Empleado *empleadoPtr: empleados){
        virtualViaApuntador(empleadoPtr);
    }

    cout <<"llamadas a funciones virtuales con referencias de la clase base\n\n";
    for(const Empleado *empleadoPtr: empleados){
        virtualViaReferencia(*empleadoPtr);
    }
}

void virtualViaApuntador(const Empleado* const claseBasePtr){
    claseBasePtr->imprimir();
    cout << "\nObtuvo: $"<< claseBasePtr->ingresos() << "\n\n";
}

void virtualViaReferencia(const Empleado &claseBaseRef){
    claseBaseRef.imprimir();
    cout << "\nObtuvo: $"<< claseBaseRef.ingresos() << "\n\n";
}
