#ifndef PAQUETE_DOS_DIAS_h
#define PAQUETE_DOS_DIAS_h
#include "Paquete.h"
#include <string>

using std::string;

class PaqueteDosDias: public Paquete{

public:
    PaqueteDosDias(
        string nom, string direc,string ciud, string estad,
        string cod_post, string desti,
        double _peso, double _costo, double val_fij
    );

    void setValorFijo(double val_fij);

    double getValorFijo() const;

    double calcularCosto();

private:
    double valor_fijo;

};

#endif //PAQUETE_DOS_DIAS_h