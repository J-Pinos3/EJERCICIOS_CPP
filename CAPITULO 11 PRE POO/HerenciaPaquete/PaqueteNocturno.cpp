#include <stdexcept>
#include "PaqueteNocturno.h"

using std::string;
using std::invalid_argument;

PaqueteNocturno::PaqueteNocturno(
    string nom, string direc,string ciud, string estad,
    string cod_post, string desti,
    double _peso, double _costo, double cuot_kg)
    :Paquete(nom, direc, ciud, estad, cod_post, desti, _peso, _costo)
{
    setCuotaKg(cuot_kg);
}

void PaqueteNocturno::setCuotaKg(double cuot_kg){

    if(cuot_kg < 0.0){
        throw invalid_argument("La cuota por kg en la noche debe ser > 0.0");
    }

    cuota_por_kg = cuot_kg;
}


double PaqueteNocturno::getCuotaKg() const{ return cuota_por_kg; }

double PaqueteNocturno::calcularCosto(){


    return getCuotaKg()  + Paquete::calcularCosto();
}