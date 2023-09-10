#include <algorithm>
#include <stdexcept>
#include <iostream>
#include "fx_pares.h"
using namespace std;


fixturePares::fixturePares(int N){

    if (N < 0) {
        throw invalid_argument("El número de equipos debe ser > 0");
    }

    totalFechas = N-1;
    partidos_x_Fecha = N/2;
    totalPartidos = (N-1) * (N/2);

    for(int k = 1; k <= N; k++ ){
        this->lista.push_back(k);
    }
}



void fixturePares::mostrarEquipos(int N ){

    cout << "Fixture" << endl;
    for(int fecha = 1; fecha <= totalFechas; fecha++){
        cout << "Fecha " << fecha << "\n";
        for(int partido = 0; partido < partidos_x_Fecha; partido++){
            int local = lista.at(partido);
            int visitante = lista.at(totalFechas - partido);//se obtiene el último equipo

            cout << "Partido "<< partido + 1 << ": Equipo " << local << " vs Equipo" << visitante << "\n";
        }
        cout << endl;
        //primer equipo fijo
        rotate( lista.begin()+1, lista.end()-1, lista.end() );
    }

}