#ifndef MAMIFERO_H
#define MAMIFERO_H
#include "SerVivo.h"
#include <string>

class Mamifero: public SerVivo{

public:
    Mamifero(const std::string &movim,const std::string &piel, 
        const std::string &habitat, const std::string &comida);
    virtual ~Mamifero(){}

    virtual void Respiro() override;
    virtual void MeDesplazo() override;
private:
    std::string tipoMovimiento;
    std::string tipoPiel;
    std::string lugarHabitat;
    std::string tipoAlimento;
};

#endif //MAMIFERO_H