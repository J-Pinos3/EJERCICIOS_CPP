#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Tiempo.h"

using namespace std;

TIEMPO::TIEMPO(): horas(0), minutos(0), segundos(0){ }

TIEMPO::TIEMPO(std::time_t a){
    a = std::time(nullptr);
    std::tm tm =*std::localtime(&a);

    horas=tm.tm_hour;
    minutos=tm.tm_min;
    segundos=tm.tm_sec;
}

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

void TIEMPO::tictac(){
    segundos+=1;
    if( minutos < 60 && segundos == 60){
        minutos++;
        segundos=0;
    }

    if(minutos == 60){
        horas++;
        minutos = 0;
        segundos =0;
    }
    
    if(horas < 24 && minutos == 60){
        horas+=1;
        minutos = 0;
        segundos =0;
    }

    if(horas == 24){
        horas = 0;
        segundos = 0;
        minutos =0;
    }

    cout <<"La hora un segundo después es: "; imprimirUniversal();

}