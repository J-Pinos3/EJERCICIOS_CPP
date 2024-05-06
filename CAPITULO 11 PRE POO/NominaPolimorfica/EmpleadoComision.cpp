#include <iostream>
#include <stdexcept>
#include "EmpleadoComision.h"

using std::cout;
using std::invalid_argument;

EmpleadoPorComision::EmpleadoPorComision(const std::string &nom, const std::string &ape,
    const std::string &num_Seg_soc, double vent_brutas,
    double tarifa_comision):
    Empleado(nom, ape, num_Seg_soc)
{
    setVentasBrutas(vent_brutas);
    setTarifaComision(tarifa_comision);
}



void EmpleadoPorComision::setTarifaComision(double tarifa_comision){
    if(tarifa_comision < 0.0){
        throw invalid_argument("La tarifa por comisión debe ser > 0.0");
    }

    tarifaComision = tarifa_comision;
}

double EmpleadoPorComision::getTarifaComision() const{ return tarifaComision; }


void EmpleadoPorComision::setVentasBrutas(double ventas_brutas){
    if(ventas_brutas < 0.0){
        throw invalid_argument("El valor de las ventas brutas " 
        "debe ser > 0.0");
    }
    ventasBrutas = ventas_brutas;
}

double EmpleadoPorComision::getVentasBrutas() const{ return ventasBrutas; }

double EmpleadoPorComision::ingresos() const { 
    return getTarifaComision() * getVentasBrutas();
}

void EmpleadoPorComision::imprimir() const {
    cout << "empleado por comision: ";
    Empleado::imprimir();
    cout << "\nVentas brutas: " << getVentasBrutas() 
        << "\nTarifa por comisi" << char(162) <<"n: " << getTarifaComision();
}