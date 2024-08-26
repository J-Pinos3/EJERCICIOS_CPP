#ifndef AVE_H
#define AVE_H
#include "SerVivo.h"
#include <string>

class Ave: public SerVivo{

public:
    Ave(bool tiene_alas, bool _vuela, const std::string &movim,
        const std::string &piel, const std::string &habitat,
        const std::string &comida);
    virtual ~Ave(){}

    virtual void MeAlimento() override;
    virtual void Habito() override;
    virtual void MeReproduzco() override;

    //virtual puras por lo que la clase es abstracta
    virtual void Respiro() override;
    virtual void MeDesplazo() override;
private:
    bool tieneAlas;
    bool vuela;
    std::string tipoMovimiento;
    std::string tipoPiel;
    std::string lugarHabitat;
    std::string tipoAlimento;
};

#endif //AVE_H