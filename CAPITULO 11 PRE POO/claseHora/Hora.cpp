#include <iostream>
#include "Hora.h"

Hora::Hora(){
  horas = 0;
  minutos = 0;
  segundos = 0;
}


Hora::Hora(int horas, int minutos, int segundos){

    if(horas < 0 || horas >=60 || minutos < 0 || minutos >=60 || segundos < 0 || segundos >=60 ){
        throw std::invalid_argument("La hora, minuto o segundo ingresados no estuvieron en el rango permitido");
    }

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
    if(horas < 0 || horas >= 60){
        throw std::invalid_argument("La hora ingresada no está en el rango permitido");
    }
    this->horas = horas;
}


void Hora::setMinutos(int minutos){
    if(minutos < 0 || minutos >= 60){
        throw std::invalid_argument("El minuto ingresado no está en el rango permitido");
    }
    this->minutos = minutos;
}

void Hora::setSegundos(int segundos){
    if(segundos < 0 || segundos >= 60){
        throw std::invalid_argument("El segundo ingresado no está en el rango permitido");
    }
    this->segundos = segundos;
}




