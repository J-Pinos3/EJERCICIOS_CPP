#include "complejos.h"
#include <iostream>
using namespace std;
using namespace umalcc;
//umalcc::Complejo::Complejo() para evitar incluyo umalcc como namespace


///CREO UN ESPACIO DE NOMBVRES ANÓNIMO CON FUNCIONES AUXILIARES
namespace{
  //CUADRADO DE UN NÚMERO
    double cuadrado(double a){
        return a*a;
    }

  //VALOR ABSOLUTO
    double abs(double a){
        return (a >= 0)? a : -a;
    }

   //DOS REALES SON IGUALES
    bool iguales(double a, double b){
        return abs(a-b) == 0.0;
    }
}



Complejo::Complejo():real(0.0), imag(0.0) {   }


double Complejo::getParte_Real() const{ return real; }
double Complejo::getParte_Imag() const{ return imag; }


void Complejo::Sumar(const Complejo &a, const Complejo &b){
    this->real = a.getParte_Real() + b.getParte_Real();
    this->imag = a.getParte_Imag() + b.getParte_Imag();
}

void Complejo::Restar(const Complejo &a, const Complejo &b){
    this->real = a.getParte_Real() - b.getParte_Real();
    this->imag = a.getParte_Imag() - b.getParte_Imag();
}

void Complejo::Multiplicar(const Complejo &a, const Complejo &b){
    this->real = (a.getParte_Real() * b.getParte_Real()) - (a.getParte_Imag()*b.getParte_Imag());

    this->imag = (a.getParte_Real() * b.getParte_Imag()) + (a.getParte_Imag()*b.getParte_Real());
}

void Complejo::Dividir(const Complejo &a, const Complejo &b){

    double divisor = cuadrado(b.getParte_Real()) + cuadrado(b.getParte_Imag());
    if(iguales(0.0, divisor)){
        real = 0.0;
        imag = 0.0;
    }else{
        real = ( (a.getParte_Real() * b.getParte_Real()) + (a.getParte_Imag()*b.getParte_Imag()) )/divisor;
        imag = ( (a.getParte_Imag() * b.getParte_Real()) - (a.getParte_Real()*b.getParte_Imag()) )/divisor;
    }

}


bool Complejo::es_igual(const Complejo &b) const{
    return iguales(this->real, b.real)&&iguales(this->imag, b.imag);
}



void Complejo::Mostrar_Numero(){
    cout <<"{ "<< getParte_Real() <<" , " << getParte_Imag() <<" }"<<endl;
}

void Complejo::Ingresar_Numero(){
    cin >> real >> imag;
}

