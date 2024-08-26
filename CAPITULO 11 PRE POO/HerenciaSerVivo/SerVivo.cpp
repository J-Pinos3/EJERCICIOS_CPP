#include <iostream>
#include "SerVivo.h"
using std::cout;

SerVivo::SerVivo(){
    posicionX = 0;
    posicionY = 0;
    vecesReproduciendoce = 0;
    vecesComiendo =0;
}

void SerVivo::MeAlimento(){
    vecesComiendo++;
}

void SerVivo::Habito(){
    cout << "Estoy en un habitat";
}

void SerVivo::MeReproduzco(){
    vecesReproduciendoce++;
}

int SerVivo::getPosicionX() const{
    return posicionX;
}

int SerVivo::getPosicionY() const{
    return posicionY;
}

int SerVivo::vecesReproducido() const{
    return vecesReproduciendoce;
}

int SerVivo::vecesComidas() const{
    return vecesComiendo;
}