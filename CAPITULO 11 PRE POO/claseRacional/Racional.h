#ifndef RACIONAL_h
#define RACIONAL_h
#include <iostream>

class RACIONAL{

friend RACIONAL operator+ (const RACIONAL& a, const RACIONAL& b);
friend RACIONAL operator- (const RACIONAL& a, const RACIONAL& b);
friend RACIONAL operator* (const RACIONAL& a, const RACIONAL& b);
friend RACIONAL operator/ (const RACIONAL& a, const RACIONAL& b);
friend ostream& operator<< (ostream& os, const RACIONAL &a);
friend istream& operator>> (istream& os, RACIONAL &a);

public:
    RACIONAL(int num = 1, int denom = 1);
    void sumar(const RACIONAL& frac2);
    void restar(const RACIONAL& frac2);
    void multiplicar(const RACIONAL& frac2);
    void dividir(const RACIONAL& frac2);
    static void imprimirFraccion(int numer, int denom);
    static void imprimirDecimal(int numer, int denom);
    static int maximoComunDivisor(int nume, int denom);
    int getNumerador() const;
    int getDenominador() const;
    
    RACIONAL operator-() const{
        return RACIONAL(-numerador, denominador);
    }

    RACIONAL& operator+= (const RACIONAL& a){
        numerador = numerador*a.denominador + denominador*a.numerador ;

        denominador *= a.denominador;
        return *this;
    }


    RACIONAL& operator-= (const RACIONAL& a){
        *this += (-a);
        return *this;
    }

    RACIONAL& operator++() {
        numerador += denominador;
        return *this;
    }

    RACIONAL& operator--() {
        numerador -= denominador;
        return *this;
    }


private:
    int numerador;
    int denominador;
};





#endif //RACIONAL_h