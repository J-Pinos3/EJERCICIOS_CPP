
#include "MazoDeCartas.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

default_random_engine motor(static_cast<unsigned int>(time(0)) );

MazoDeCartas::MazoDeCartas(){
    cartaActual = 0;
    for(int i = 0; i < 52; i++){
        Carta carta( static_cast<Carta::Face>(i % 13), static_cast<Carta::Suit>(i/13));
        mazo.push_back(carta);
    }
}

void MazoDeCartas::barajar(){
    uniform_int_distribution<int> randomInt(0, mazo.size() - 1);
    cartaActual = 0;
    
    for(int i = 0; i < mazo.size(); i++){
        int j = randomInt(motor);
        Carta temp = mazo[i];
        mazo[i] = mazo[j];
        mazo[j] = temp;
    }
}

Carta MazoDeCartas::repartirCarta(){
    return mazo[cartaActual++];
}

bool MazoDeCartas::masCartas() const{
    return cartaActual < mazo.size();
}