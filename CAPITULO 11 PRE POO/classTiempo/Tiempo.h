#ifndef TIEMPO_H
#define TIEMPO_H

class TIEMPO{

public:
    TIEMPO();
    void setTiempo(int h, int m, int s);
    void imprimirUniversal() const;
    void imprimirEstandar() const;

private:
    unsigned int horas ;
    unsigned int minutos ;
    unsigned int segundos ;

};


#endif //TIEMPO_H