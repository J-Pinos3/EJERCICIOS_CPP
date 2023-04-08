#include <iostream>
#include "Hora.h"

Hora::Hora(){
  horas = 0;
  minutos = 0;
  segundos = 0;
}


Hora::Hora(int horas, int minutos, int segundos){
  this->horas = horas;
  this->minutos = minutos;
  this->segundos = segundos;
}


void Hora::visualizarHora(){
  std::cout << horas << ":" << minutos << ":" << segundos << std::endl;
}

Hora Hora::sumarHoras(Hora h2){
    Hora h3;
    h3.horas = this->horas + h2.horas;
    h3.minutos = this->minutos + h2.minutos;
    h3.segundos = this->segundos + h2.segundos;

    return h3;
}


void Hora::setHoras(int horas){
    this->horas = horas;
}


void Hora::setMinutos(int minutos){
    this->minutos = minutos;
}

void Hora::setSegundos(int segundos){
    this->segundos = segundos;
}





//
