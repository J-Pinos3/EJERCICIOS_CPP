#include <iostream>
#include <iomanip>

#include "EmpleadoPorComision.h"
#include "EmpleadoBaseMasComision.h"
using namespace std;

int main(){
    
    EmpleadoPorComision e1("Juan","Ortiz","1234567",10000, 0.06);
    EmpleadoBaseMasComision e2("Carol","Sanchez", "321654A", 5000, 0.04, 300);

    cout << fixed << setprecision(2);

    cout << "Informacion del e1 obtenida por las funciones obtener: \n"
        << "\nEl primer nombre es " << e1.getPrimerNombre() 
        << "\nEl apellido paterno es " << e1.getApellidoPaterno()
        << "\nEl numero de seguro social es "
        << e1.getNumeroSeguroSocial()
        << "\nLas ventas brutas son " << e1.getVentasBrutas()
        << "\nLa tarifa de comision es " << e1.getTarifaComision() 
        << endl;

    e1.setVentasBrutas(8000);
    e1.setTarifaComision(0.01);

    
    cout << "Informacion actualizada del 11, mostrada por la funcion imprimir: \n" << endl;
    e1.imprimir(); // muestra la nueva informacion del e1
    cout <<"\nIngresos del e1: " << e1.ingresos() << endl << endl << endl << "------------" << endl << endl;


    cout << "Informacion del e2 obtenida por las funciones obtener: \n"
        << "\nEl primer nombre es " << e2.getPrimerNombre()
        << "\nEl apellido paterno es " << e2.getApellidoPaterno()
        << "\nEl numero de seguro social es "
        << e2.getNumeroSeguroSocial()
        << "\nLas ventas brutas son " << e2.getVentasBrutas()
        << "\nLa tarifa de comision es " << e2.getTarifaComision()
        << "\nEl salario base es " << e2.getSalarioBase() << endl;

    e2.setSalarioBase(1000);

    cout << "Informacion actualizada del e2, mostrada por la funcion imprimir: \n" << endl;
    e2.imprimir(); // muestra la nueva informacion del e1
    cout <<"\nIngresos del e1: " << e2.ingresos() << endl;

    return 0;
}