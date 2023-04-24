#ifndef MAZODECARTAS_H
#define MAZODECARTAS_H

#include "Carta.h"
#include <vector>

class MazoDeCartas{

public:
    //MazoDeCartas(const Carta &c1);
    MazoDeCartas();
    void barajar();
    Carta repartirCarta();
    bool masCartas() const;

private:
    
    std::vector<Carta> mazo;
    int cartaActual;
    const int numeroDeCartas = 52;

};


#endif //MAZODECARTAS_H