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

void ordenamientoInsercion(array<int, MAX> & arreglo);
void insercionHelper(array<int, MAX> & arreglo, int pos);

void llenarArray(array<int, MAX> & arreglo);

void mostrarArrar(const array<int, MAX> & arreglo);

//returns index of existing element
int elemRepetido(int elem, const array<int, MAX> & arreglo);


int main(int argc, char const *argv[])
{
    array<int, MAX> arreglo;
    llenarArray(arreglo);
    mostrarArrar(arreglo);
    ordenamientoInsercion(arreglo);

    cout <<"\nArreglo ordenado\n";
    mostrarArrar(arreglo);
    
    return 0;
}

void ordenamientoInsercion(array<int, MAX> & arreglo){
    for(int i = 1; i < arreglo.size(); i++){
        insercionHelper(arreglo, i);
    }
}

void insercionHelper(array<int, MAX> & arreglo, int pos){
    int actual = pos;
    int anterior = pos-1;
    int temp = 0;

    while(arreglo[actual] < arreglo[anterior]){
        if(arreglo[actual] < arreglo[anterior]){
            temp = arreglo[actual];
            arreglo[actual] = arreglo[anterior];
            arreglo[anterior] = temp;
        }else{
            break;
        }
        actual--;
        anterior--;
    }



}


void llenarArray(array<int, MAX> & arreglo){
    default_random_engine motor (static_cast<unsigned int>(  time(0) ));
    uniform_int_distribution<unsigned int> intAleatorio(0,20);
    for(int i = 0; i < arreglo.size(); i++){
        arreglo[i] = intAleatorio(motor);
        
        int repetido = elemRepetido(arreglo[i], arreglo);
        if( repetido > 1){
            arreglo[i] += 10;
        }
    }
}


void mostrarArrar(const array<int, MAX> & arreglo){
    cout <<"Elementos del arreglo"<< std::endl;
    for(const int elem : arreglo){
        cout << elem << " || ";
    }
    cout << "\n";
}


//devuelve > 1 si hay repetido
//devuelve -1 si no existe en el array
int elemRepetido(int elem, const array<int, MAX> & arreglo){
    int indice = 0;
    for(int i = 0; i < arreglo.size(); i++){
        if(elem == arreglo[i]){
            indice +=1;
        }
    }

    return indice;
}