#include <iostream>
#include <stdexcept>
#include <string>
#include "fecha.h"
using namespace std;

const array<unsigned int, 13> Fecha::dias= {0,31,28,31,30,31,30,31,31,30,31,30,31};

Fecha::Fecha(int mes, int dia, int anio){
    setFecha(mes, dia, anio);
}

void Fecha::setFecha(int mes, int dia, int anio){
    if (mes >= 1 && mes <= 12){
        this->mes = mes;
    }else{
        throw invalid_argument("El mes debe ser >= 1 y <= 12.");
    }


    if (anio >= 1900 && anio <= 2200){
        this->anio = anio;
    }else{
        throw invalid_argument("El año debe ser >= 1900 y <= 2200.");
    }

    //prueba si el año es bisiesto
    //pongo ! xq voy a filtrar los que no son bisiestos
    if( (mes == 2 && anioBisiesto(anio)  && dia >= 1 && dia <= 29) 
    || (dia >= 1 && dia <= dias[mes]) )
    {
        this->dia = dia;
    }else{
        throw invalid_argument("El día no están en un rango adecuado para el mes y año actuales.");        
    }

}

//PREFIJO
Fecha& Fecha::operator++(){
    ayudaIncremento();
    return *this;
}

//POSTFIJO
Fecha Fecha::operator++(int){
    Fecha temp = *this;
    ayudaIncremento();

    return temp;
}

//SUMA LOS DÍAS ESPECIFICADOS A LA FECHA
Fecha &Fecha::operator+=(unsigned int diasAdicionales){
    for(int i = 0; i < diasAdicionales; i++){
        ayudaIncremento();
    }
    return *this;
}


bool Fecha::anioBisiesto(int anioprueba){
    if( (anioprueba%4 != 0) || (anioprueba%100== 0 && anioprueba%400!=0) )
        return false; //no es bisiesto
    else
        return true;  //es bisiesto
    
}


bool Fecha::finDeMes(int diaPrueba) const{
    if(mes == 2 && anioBisiesto(anio)){
        return diaPrueba == 29;
    }else{
        return diaPrueba == dias[mes];
    }
}


void Fecha::ayudaIncremento(){
    if( !finDeMes(dia) ){
        ++dia;
    }else{
        //aquí ya es fin de mes y no es diciembre
        if(mes < 12){
            ++mes;
            dia = 1;
        }else{
            ++anio;
            mes = 1;
            dia = 1;
        }
    }
}



ostream &operator<< (ostream& salida, const Fecha& d){
    static string nombreMes[13] = {"","Enero","Febrero","Marzo","Abril",
    "Mayo","Junio","Julio","Agosto","Septiembre","Octubre",
    "Noviembre","Diciembre"};

    salida << nombreMes[d.mes] << " " << d.dia << ", " << d.anio;
    return salida;
}