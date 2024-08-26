#include "Anfibio.h"
    
Anfibio::Anfibio(bool venenoso, const std::string &movim,const std::string &piel, 
    const std::string &habitat, const std::string &comida):SerVivo()
{

    esVenenoso = venenoso;
    tipoMovimiento = movim;
    tipoPiel = piel;
    lugarHabitat = habitat;
    tipoAlimento = comida;

}