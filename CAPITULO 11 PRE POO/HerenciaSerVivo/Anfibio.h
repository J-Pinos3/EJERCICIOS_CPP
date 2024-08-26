#ifndef ANFIBIO_H
#define ANFIBIO_H
#include "SerVivo.h"
#include <string>

class Anfibio: public SerVivo{

public:
    Anfibio(bool venenoso, const std::string &movim,const std::string &piel, 
        const std::string &habitat, const std::string &comida);
    virtual ~Anfibio(){}

    virtual void Respiro() override;
    virtual void MeDesplazo() override;
private:
    bool esVenenoso;
    std::string tipoMovimiento;
    std::string tipoPiel;
    std::string lugarHabitat;
    std::string tipoAlimento;
};

#endif //ANFIBIO_H