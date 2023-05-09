#include <iostream>
#include <array>
#include <ctime>
#include <random>
using namespace std;

const int FILAS = 3;
const int COLUMNAS = 4;

void rellenarMatriz(array< array<int, COLUMNAS>, FILAS > &m);
void mostrarMatriz(const array< array<int, COLUMNAS>, FILAS > &m);

int main(int argc, char const *argv[])
{
    array< array<int, COLUMNAS>, FILAS > matriz{};
    cout <<"matriz.size(): "<<matriz.size() << endl<<endl;

    rellenarMatriz(matriz);
    mostrarMatriz(matriz);



    return 0;
}

void rellenarMatriz(array< array<int, COLUMNAS>, FILAS > &m){
    default_random_engine motor( static_cast<int>(time(0)) );
    uniform_int_distribution <int> intAleatorio(-10,10);

    for(auto &i : m){
        for(int &j : i){
            j = intAleatorio(motor);
        }
    }

}


void mostrarMatriz(const array< array<int, COLUMNAS>, FILAS > &m){

    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            cout << m[i][j] << "  ";
        }
        cout << endl;
    }

}