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

int buscarBinariamente(int valor, const array<int, MAX> & arreglo);

void llenarArray(array<int, MAX> & arreglo);

void mostrarArrar(const array<int, MAX> & arreglo);

//returns index of existing element
int elemRepetido(int elem, const array<int, MAX> & arreglo);


int main()
{
    int elementoABuscar = 0;
    //in order to use the binary search algorythm, our array must be sorted
    array<int, MAX> arr={1,5,7,13,18,22,24,26,30,34};
    mostrarArrar(arr);
    cout <<"Ingrese el valor a buscar: ";       cin >> elementoABuscar;

    
    int res = buscarBinariamente(elementoABuscar, arr);
    if(res == -1){
        cout <<"No se pudo encontrar el valor: " << elementoABuscar << std::endl;
    }else{
        cout <<"Elemento: " << elementoABuscar << " encontrado en la posicion: " << res << std::endl;
    }

    return 0;
}

int buscarBinariamente(int valor, const array<int, MAX> & arreglo){

    int inicio = 0, final = arreglo.size()-1;
    int medio = (inicio+ final) /2;

    
    while( (medio != valor) && (inicio <= final) ){
        if (arreglo[medio] == valor){
            return medio;
        }else if (valor < arreglo[medio]){
            
            final = medio -1 ;//minus 1 so i discard the half value
        }else if(valor > arreglo[medio] ){
            inicio = medio + 1; //plus 1 so i discard the half value
        }
        medio = (inicio+ final)/2;
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