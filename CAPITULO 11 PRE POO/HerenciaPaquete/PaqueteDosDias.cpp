#include <stdexcept>
#include "PaqueteDosDias.h"

using std::string;
using std::invalid_argument;

PaqueteDosDias::PaqueteDosDias(
    string nom, string direc,string ciud, string estad,
    string cod_post, string desti,
    double _peso, double _costo, double val_fij)
    :Paquete(nom, direc, ciud, estad, cod_post, desti, _peso, _costo)
{
    setValorFijo(val_fij);
}

void PaqueteDosDias::setValorFijo(double val_fij){
    if(val_fij < 0.0){
        throw invalid_argument("La cuota fija deber ser > 0.0");
    }

    valor_fijo = val_fij;
}


double PaqueteDosDias::getValorFijo() const{ return valor_fijo; }


double PaqueteDosDias::calcularCosto(){
    return getValorFijo() + Paquete::calcularCosto();
}