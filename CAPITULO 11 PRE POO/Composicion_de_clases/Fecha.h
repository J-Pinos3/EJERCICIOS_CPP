#ifndef FECHA_H
#define FECHA_H

class Fecha{

public:
    static const unsigned int meses_X_anio = 12;
    
    explicit Fecha(int dia = 1, int mes = 1, int anio = 1 );
    void imprimir() const;
    ~Fecha();

private:
    unsigned int mes;
    unsigned int dia;
    unsigned int anio;

    unsigned int comprobar_dia(int d) const;
};


#endif