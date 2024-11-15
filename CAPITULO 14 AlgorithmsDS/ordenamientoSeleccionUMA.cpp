#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <random>
using std::cin;
using std::cout;
using std::array;
using std::default_random_engine;
using std::time;
using std::uniform_int_distribution;

const int MAX = 10;

inline void intercambio(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int posicion_menor(const array<int, MAX>& arreglo, int pos){
    int pos_menor = pos;
    for(int i = pos_menor+1; i < int(arreglo.size()); i++){
        if(arreglo[i] < arreglo[pos_menor]){
            pos_menor = i;
        }
    }
    return pos_menor;
}

inline void subir_menor(array<int, MAX>& arreglo, int pos){
    int pos_menor = posicion_menor(arreglo, pos);
    if(pos != pos_menor){
        intercambio(arreglo[pos], arreglo[pos_menor]);
    }
}

void seleccion(array<int, MAX>& arreglo){
    for(int pos = 0; pos < int(arreglo.size()-1); pos++){
        subir_menor(arreglo, pos);
    }
}

void mostrarArray(const array<int, MAX> & arreglo){
    cout <<"Elementos del arreglo"<< std::endl;
    for(const int elem : arreglo){
        cout << elem << " || ";
    }
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    array<int, MAX> arreglo = {5,7,9,0,4,1,3,6,11,8};
    mostrarArray(arreglo);

    seleccion(arreglo);

    cout <<"\nArreglo ordenado:\n";
    mostrarArray(arreglo);
    return 0;
}
