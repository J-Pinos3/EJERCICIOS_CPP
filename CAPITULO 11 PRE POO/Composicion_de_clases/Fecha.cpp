#include <array>
#include <iostream>
#include <stdexcept>
#include "Fecha.h"
using namespace std;

Fecha::Fecha(int mm, int dd, int aa){
    if(mm > 0 && mm <= meses_X_anio){
        mes = mm;
    }else{
        throw invalid_argument("El mes debe estar entre 1 y 12");
    }

    anio = aa;//no se valida anio
    dia = comprobar_dia(dd);

    cout <<"Constructor del objeto Fecha para fecha ";
    imprimir();
    cout << endl;
}


void Fecha::imprimir() const{
    cout << mes << "/" << dia <<"/" << anio;
}


Fecha::~Fecha(){
    cout <<"Destructor del objeto Fecha para fecha ";
    imprimir();
    cout << endl;
}


unsigned int Fecha::comprobar_dia(int d) const{
    static const array<int, meses_X_anio+1> dias_X_mes=
    {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(d > 0 && d <= dias_X_mes[mes] ){
        return d;
    }

    if(mes == 2 && d == 29 && ( anio%400==0 || (anio%4==0 && anio%100!= 0) ) ){
        return d;
    }
    
    throw invalid_argument("Dia invalido para el mes y anio actuales");
}