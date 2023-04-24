#ifndef TIEMPO_H
#define TIEMPO_H
#include <ctime>

class TIEMPO{

public:
    TIEMPO();
    TIEMPO(std::time_t a);
    void setTiempo(int h, int m, int s);
    void imprimirUniversal() const;
    void imprimirEstandar() const;
    void tictac();

private:
    unsigned int horas ;
    unsigned int minutos ;
    unsigned int segundos ;

};


#endif //TIEMPO_H