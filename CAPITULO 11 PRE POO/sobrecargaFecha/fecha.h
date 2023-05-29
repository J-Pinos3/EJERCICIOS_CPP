#ifndef FECHA_H
#define FECHA_H

#include <array>
#include <iostream>


class Fecha{

    friend std::ostream &operator<< (std::ostream&, const Fecha&);

public:
/*
    Fecha(int m = 1, int d = 1, int a = 1900): mes(m), dia(d), anio(a)
    {} 
*/
    Fecha(int m = 1, int d = 1, int a = 1900);
    void setFecha(int d, int m, int a);
    Fecha &operator++();//prefijo
    Fecha operator++(int);//postfijo

    Fecha &operator+=(unsigned int);//suma días
    static bool anioBisiesto(int);
    bool finDeMes(int) const;

private:
    unsigned int mes;
    unsigned int dia;
    unsigned int anio;
    static const std::array<unsigned int, 13> dias;//dias por mes
    void ayudaIncremento();


};


#endif //FECHA_H