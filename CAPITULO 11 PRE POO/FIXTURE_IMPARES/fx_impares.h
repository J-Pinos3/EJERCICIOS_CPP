#ifndef FX_IMPARES_h
#define FX_IMPARES_h
#include <vector>

class fixtureImpares{

public:
    fixtureImpares(int N = 5);
    void mostrarEquipos(int N = 5);

private: 
    std::vector<int> lista;
    int totalFechas;
    int partidos_x_Fecha;
    int totalPartidos;
};


#endif //FX_IMPARES_h

