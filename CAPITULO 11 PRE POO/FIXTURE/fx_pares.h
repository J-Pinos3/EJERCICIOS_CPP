#ifndef FX_PARES_h
#define FX_PARES_h
#include <vector>

class fixturePares{

public:
    fixturePares(int N = 6);
    void mostrarEquipos(int N = 6);

private: 
    std::vector<int> lista;
    int totalFechas;
    int partidos_x_Fecha;
    int totalPartidos;
};


#endif //FX_PARES_h

