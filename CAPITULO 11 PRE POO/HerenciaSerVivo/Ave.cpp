#include <iostream>
#include "Ave.h"
using std::cout;

Ave::Ave(bool tiene_alas, bool _vuela, const std::string &movim,
    const std::string &piel, const std::string &habitat,
    const std::string &comida):SerVivo()
{

    tieneAlas = tiene_alas;
    vuela = _vuela;
    tipoMovimiento = movim;
    tipoPiel = piel;
    lugarHabitat = habitat,
    tipoAlimento = comida;

}


void Ave::MeAlimento() {
    cout << "Como Ave me alimento de: " << tipoAlimento << "\n"; 
}

void Ave::Habito() {
    cout << "Como Ave habito en: " << lugarHabitat << "\n"; 
}

void Ave::MeReproduzco() {
    cout << "Como Ave reproducido: " << vecesReproducido() << " veces\n"; 
}