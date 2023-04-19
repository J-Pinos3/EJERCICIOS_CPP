#ifndef RACIONAL_h
#define RACIONAL_h

class RACIONAL{

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

private:
    int numerador;
    int denominador;
};





#endif //RACIONAL_h