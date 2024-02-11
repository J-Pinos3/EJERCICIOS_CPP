#include <iostream>
#include <iomanip>

#include "EmpleadoPorComision.h"
#include "EmpleadoBaseMasComision.h"
using namespace std;

int main(){
    
    EmpleadoBaseMasComision e2("Carol","Sanchez", "321654A", 5000, 0.04, 300);

    cout << fixed << setprecision(2);

    cout << "Informacion del e2 obtenida por las funciones obtener: \n"
        << "\nEl primer nombre es " << e2.getPrimerNombre() 
        << "\nEl apellido paterno es " << e2.getApellidoPaterno()
        << "\nEl numero de seguro social es "
        << e2.getNumeroSeguroSocial()
        << "\nLas ventas brutas son " << e2.getVentasBrutas()
        << "\nLa tarifa de comision es " << e2.getTarifaComision() 
        << endl;

    e2.setVentasBrutas(8000);
    e2.setTarifaComision(0.01);

    
    cout << "Informacion actualizada del 11, mostrada por la funcion imprimir: \n" << endl;
    e2.imprimir(); // muestra la nueva informacion del e2
    cout <<"\nIngresos del e2: " << e2.ingresos() << endl << endl << endl << "------------" << endl << endl;


    return 0;
}