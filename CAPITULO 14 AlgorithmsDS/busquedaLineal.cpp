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

const int MAX = 15;

int buscar(int valor, const array<int, MAX> & arreglo);

void llenarArray(array<int, MAX> & arreglo);

void mostrarArrar(const array<int, MAX> & arreglo);

//returns index of existing element
int elemRepetido(int elem, const array<int, MAX> & arreglo);


int main()
{
    int elementoABuscar = 0;
    array<int, MAX> arr={};
    cout <<"Ingrese el valor a buscar: ";       cin >> elementoABuscar;
    llenarArray(arr);
    mostrarArrar(arr);


    int indice = buscar(elementoABuscar, arr);
    if(indice == -1){
        cout <<"El elemento: " << elementoABuscar << " no existe\n";
    }else{
        cout <<"Elemento " << arr[indice] 
        << " encontrado en la posici"<<char(162)<<"n: " << indice;
    }



    return 0;
}

int buscar(int valor, const array<int, MAX> & arreglo){
    //otra forma
    /*
    while( (i < arreglo.size())&&(valor!=arreglo[i]) ){
        ++i;
    }
    */
    for(int i = 0; i < arreglo.size(); i++){
        if(valor == arreglo[i]){
            return i;
        }
    }

    return -1;
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