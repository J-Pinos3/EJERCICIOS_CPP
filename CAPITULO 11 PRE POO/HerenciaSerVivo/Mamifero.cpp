#include "Mamifero.h"

Mamifero::Mamifero(const std::string &movim,const std::string &piel, 
        const std::string &habitat, const std::string &comida):SerVivo()
{
    tipoMovimiento = movim;
    tipoPiel = piel;
    lugarHabitat = habitat;
    tipoAlimento = comida;
}