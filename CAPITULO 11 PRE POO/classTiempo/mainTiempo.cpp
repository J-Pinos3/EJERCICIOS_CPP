#include <iostream>
#include <array>
#include <string>
#include <ctime>
#include "Tiempo.h"
using namespace std;

void mostrar_hora_estandar(const array<TIEMPO,5> &arr);

int main(int argc, char const *argv[])
{
    
    time_t tiempo;
    string linea(10,'*');
    array<TIEMPO,5> arrTempo ={};

    TIEMPO t1 = TIEMPO(tiempo);
    TIEMPO t2 = TIEMPO();
    TIEMPO t3 = TIEMPO();

    for(int i = 0; i < arrTempo.size(); i++){
        arrTempo[i] = TIEMPO();
    }

    arrTempo[0].setTiempo(17,7,30);
    arrTempo[1].setTiempo(2,6,48);
    arrTempo[2].setTiempo(21,1,12);
    arrTempo[3].setTiempo(10,8,4);
    arrTempo[4].setTiempo(5,49,11);

    cout << endl << linea << endl;

    mostrar_hora_estandar(arrTempo);

    cout << endl << linea << endl;
    cout <<"Usando CTime "<< endl;
    t1.imprimirEstandar();
    cout << endl << linea << endl;

    t2.setTiempo(15,58,59);
    t2.tictac();
    t3.setTiempo(21,59,59);
    t3.tictac();

    return 0;
}

void mostrar_hora_estandar(const array<TIEMPO,5> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout <<"Hora: " << i+1 << endl;
        arr[i].imprimirEstandar();
    }
}