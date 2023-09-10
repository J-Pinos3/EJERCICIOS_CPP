#include <algorithm>
#include <stdexcept>
#include <iostream>
#include "fx_impares.h"
using namespace std;


fixtureImpares::fixtureImpares(int N){

    if (N < 0) {
        throw invalid_argument("El número de equipos debe ser > 0");
    }

    totalFechas = N;
    partidos_x_Fecha = (N-1)/2;
    totalPartidos = ( (N-1)/2 )* N;

    for(int k = 1; k <= N; k++ ){
        this->lista.push_back(k);
    }
}



void fixtureImpares::mostrarEquipos(int N ){

    cout << "Fixture" << endl;
    for(int fecha = 1; fecha <= totalFechas; fecha++){
        cout << "Fecha " << fecha << "\n";
        for(int partido = 0; partido < partidos_x_Fecha; partido++){

            int local = lista.at(partido);
            int visitante = lista.at(totalFechas - partido - 1); // Obtener el equipo en sentido contrario

            cout << "Partido "<< partido + 1 << ": Equipo " << local << " vs Equipo " << visitante << "\n";
        }
        cout << endl;
        // Rotar equipos
        int primerEquipo = lista.front();
        lista.erase(lista.begin());
        lista.push_back(primerEquipo);
    }

}