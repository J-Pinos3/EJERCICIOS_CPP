
#include <iostream>
#include <cmath>
#include <stdexcept>
#include "Racional.h"
using namespace std;

RACIONAL::RACIONAL(int num, int denom ){
    this -> numerador = num;
    
    if(denom == 0){
        throw invalid_argument("El denominador no debe ser 0.");
    }else{
        this -> denominador = denom;
    }
}


int RACIONAL::maximoComunDivisor(int nume, int denom){
    int u = abs(nume);
    int v = abs(denom);

    if(v == 0){
        return 0;
    }
    int r;
    while(v != 0){
        r = u%v;
        u=v;
        v=r;
    }
    return u;
}

void RACIONAL::imprimirFraccion(int numer, int denom){
    cout << numer << " / " << denom << endl;
}

void RACIONAL::imprimirDecimal(int numer, int denom){
    cout << (double)numer/denom << endl;
}

void RACIONAL::sumar(const RACIONAL& frac2){
    int numeradorSuma = numerador*frac2.denominador + denominador*frac2.numerador ;
    int denominadorSuma = denominador * frac2.denominador;
    int divis = RACIONAL::maximoComunDivisor(numeradorSuma, denominadorSuma);

    numeradorSuma/=divis;
    denominadorSuma/=divis;

    RACIONAL::imprimirFraccion(numeradorSuma, denominadorSuma);
    
}


void RACIONAL::restar(const RACIONAL& frac2){
    int numeradorResta = numerador*frac2.denominador - denominador*frac2.numerador ;
    int denominadorResta = denominador * frac2.denominador;
    int divis = RACIONAL::maximoComunDivisor(numeradorResta, denominadorResta);

    numeradorResta/=divis;
    denominadorResta/=divis;    
    RACIONAL::imprimirDecimal(numeradorResta, denominadorResta);    
}

void RACIONAL::multiplicar(const RACIONAL& frac2){
    int numeradorMultiplic = numerador * frac2.numerador ;
    int denominadorMultiplic = denominador * frac2.denominador;
    int divis = RACIONAL::maximoComunDivisor(numeradorMultiplic, denominadorMultiplic);

    numeradorMultiplic/=divis;
    denominadorMultiplic/=divis;
    RACIONAL::imprimirFraccion(numeradorMultiplic, denominadorMultiplic);
    RACIONAL::imprimirDecimal (numeradorMultiplic, denominadorMultiplic);
}

void RACIONAL::dividir(const RACIONAL& frac2){
    int numeradorDivis = numerador * frac2.denominador ;
    int denominadorDivis = denominador * frac2.numerador;
    int divis = RACIONAL::maximoComunDivisor(numeradorDivis, denominadorDivis);

    numeradorDivis/=divis;
    denominadorDivis/=divis;

    RACIONAL::imprimirFraccion(numeradorDivis, denominadorDivis);
    RACIONAL::imprimirDecimal (numeradorDivis, denominadorDivis);
}

int RACIONAL::getNumerador() const{
    return (this->numerador);
}

int RACIONAL::getDenominador() const{
    return (this->denominador);
}

RACIONAL operator+ (const RACIONAL& a, const RACIONAL& b){
    RACIONAL tmp;
    tmp.numerador = a.numerador*b.denominador + a.denominador*b.numerador;
    tmp.denominador = a.denominador * b.denominador;
    int divis = RACIONAL::maximoComunDivisor(tmp.numerador, tmp.denominador);
    
    tmp.numerador /= divis;    tmp.denominador /= divis;
    
    return tmp;
}

RACIONAL operator- (const RACIONAL& a, const RACIONAL& b){
    RACIONAL tmp;
    tmp.numerador = a.numerador*b.denominador - a.denominador*b.numerador;
    tmp.denominador = a.denominador * b.denominador;
    int divis = RACIONAL::maximoComunDivisor(tmp.numerador, tmp.denominador);
    
    tmp.numerador /= divis;    tmp.denominador /= divis;
    
    return tmp;
}

RACIONAL operator* (const RACIONAL& a, const RACIONAL& b){
    RACIONAL tmp;
    tmp.numerador = a.numerador * b.numerador ;
    tmp.denominador = a.denominador * b.denominador;
    int divis = RACIONAL::maximoComunDivisor(tmp.numerador, tmp.denominador);
    
    tmp.numerador /= divis;    tmp.denominador /= divis;
    
    return tmp;
}

RACIONAL operator/ (const RACIONAL& a, const RACIONAL& b){
    RACIONAL tmp;
    tmp.numerador = a.numerador * b.denominador ;
    tmp.denominador = a.denominador * b.numerador;
    int divis = RACIONAL::maximoComunDivisor(tmp.numerador, tmp.denominador);
    
    tmp.numerador /= divis;    tmp.denominador /= divis;
    
    return tmp;
}

ostream& operator<< (ostream& os, const RACIONAL &a){
    os << a.numerador << " / " << a.denominador << endl;
    return os;
}

istream& operator>> (istream& os, RACIONAL &a){
    os >> a.numerador;
    os >> a.denominador;
    return os;
}