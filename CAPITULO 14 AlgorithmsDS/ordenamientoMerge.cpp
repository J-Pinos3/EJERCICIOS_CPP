#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <random>
using std::cin;
using std::cout;
using std::vector;
using std::default_random_engine;
using std::time;
using std::uniform_int_distribution;

void mergeSort(vector<int>& arreglo, int inicio, int final);
void merge(vector<int>& arreglo, int inicio, int mitad, int final);
void imprimir(const vector<int>& arreglo);

int main()
{
    vector<int> arregflo = {12,5,69,8,0,3,4,-1,5,17,22,21,35,7};
    cout << "Arreglo desordenado\n";
    imprimir(arregflo);

    mergeSort(arregflo, 0, arregflo.size()-1);

    cout << "\nArreglo sordenado\n";
    imprimir(arregflo);    
    return 0;
}


void mergeSort(vector<int>& arreglo, int inicio, int final){
    if(inicio < final){
        int mitad = inicio + (final-inicio)/2;
        mergeSort(arreglo, inicio, mitad);
        mergeSort(arreglo, mitad+1, final);
        merge(arreglo, inicio, mitad, final);
    }
}

void merge(vector<int>& arreglo, int inicio, int mitad, int final){
    int i, j, k;
    int elementosIzq = mitad - inicio +1;
    int elementosDer = final - mitad;


    vector<int> izquierda(elementosIzq);
    vector<int> derecha(elementosDer);

    for (int a = 0; a< elementosIzq; a++){
        izquierda[a] = arreglo[inicio + a];
    }

    for (int b = 0; b< elementosDer; b++){
        derecha[b] = arreglo[mitad + 1 + b];
    }
    
    i = 0; j  = 0; k = inicio;

    //mezclar los valores de los vectores
    while( i < elementosIzq && j < elementosDer ){
        if(izquierda[i] <= derecha[j]){
            arreglo[k] = izquierda[i];
            i++;
        }else{
            arreglo[k] = derecha[j];
            j++;
        }
        k++;
    }

    while(j < elementosDer){
        arreglo[k] = derecha[j];
        j++;
        k++;
    }

    while(i < elementosIzq){
        arreglo[k] = izquierda[i];
        i++;
        k++;
    }
}

void imprimir(const vector<int>& arreglo){
    for(const int a : arreglo){
        cout << a << " | ";
    }
    cout <<"\n";
}