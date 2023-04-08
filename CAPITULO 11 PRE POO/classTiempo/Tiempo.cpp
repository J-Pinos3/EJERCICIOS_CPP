#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Tiempo.h"

using namespace std;

TIEMPO::TIEMPO(): horas(0), minutos(0), segundos(0){ }

void TIEMPO::setTiempo(int h, int m, int s){
    //las horas van de  0 - 23
    if( (h>=0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60) ){
        this->horas = h;
        this->minutos = m;
        this->segundos = s;
    }else{
        throw invalid_argument("Las horas, minutos o segundos no son correctas");
    }
}

void TIEMPO::imprimirUniversal() const{
    cout << setfill('0') << setw(2) << horas << ":" << setw(2) << minutos << ":" << setw(2) << segundos << "." <<endl;
}
void TIEMPO::imprimirEstandar() const{
    cout <<( (horas == 0 || horas ==12) ? 12 : horas %12 ) << ":" << setfill('0') << setw(2) << minutos << ":" <<
    setw(2) << segundos << (horas < 12 ? "AM":"PM")<< endl;
}

