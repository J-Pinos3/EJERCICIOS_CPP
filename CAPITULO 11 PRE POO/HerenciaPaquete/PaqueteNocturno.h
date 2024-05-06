#ifndef PAQUETE_TRES_DIAS_H
#define PAQUETE_TRES_DIAS_H
#include "Paquete.h"
#include <string>

using std::string;


class PaqueteNocturno: public Paquete{

public:
    PaqueteNocturno(
        string nom, string direc,string ciud, string estad,
        string cod_post, string desti,
        double _peso, double _costo, double cuot_kg
    );

    void setCuotaKg(double cuot_kg);
    
    double getCuotaKg() const;

    double calcularCosto();

private:
    double cuota_por_kg;

};


#endif //PAQUETE_TRES_DIAS_H