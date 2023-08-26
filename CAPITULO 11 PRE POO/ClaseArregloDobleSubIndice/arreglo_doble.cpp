#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "arreglo_doble.h"
using namespace std;


Array_Doble::Array_Doble(int fil, int col):
    filas(fil > 0? fil : throw invalid_argument("El número de filas debe ser un valor positivo")),
    columnas(col > 0? col : throw invalid_argument("El número de columnas debe ser un valor positivo")),
    ptr(new int[filas*columnas])
{
    size_t tamanio = filas*columnas;
    for(size_t i = 0; i < tamanio; i++){
        this->ptr[i] = 0;
    }

}


Array_Doble::Array_Doble(const Array_Doble &copia):
    filas(copia.filas),  columnas(copia.columnas), ptr(new int[filas*columnas])   
{
    size_t tamanio = filas*columnas;

    for(int i = 0; i < tamanio; i++){
        this->ptr[i] = copia[i];
    }


}

Array_Doble::~Array_Doble(){
    delete[] ptr;
}

size_t Array_Doble::getTamanio() const{
    return filas * columnas;
}


const Array_Doble&  Array_Doble::operator= (const Array_Doble &derecho){
    
    size_t tamanio = filas*columnas;

    if( &derecho != this ){

        if( tamanio != derecho.getTamanio() ){
            delete[] ptr;
            ptr = nullptr;
            tamanio = derecho.getTamanio();
            ptr = new int[tamanio];
        }
        for(size_t i = 0; i < tamanio; i++){
            this->ptr[i] = derecho[i];
        }

    }
    return *this;
}


bool Array_Doble::operator== (const Array_Doble &derecho ) const{
    
    size_t tamanio = filas*columnas;

    if( tamanio != derecho.getTamanio() )  return false;


    for( size_t i = 0; i < tamanio; i++ ){
        if( ptr[i] != derecho[i] ){
            return false;
        }
    }

}



int& Array_Doble::operator[](int subindice){

    size_t tamanio = filas * columnas;
    if( subindice < 0 || subindice >= tamanio ){
        throw out_of_range("Subíndice fuera de rango");
    }

    return this->ptr[subindice];
}


int Array_Doble::operator[] (int subindice) const{
    size_t tamanio = filas * columnas;
    if( subindice < 0 || subindice >= tamanio ){
        throw out_of_range("Subíndice fuera de rango");
    }

    return this->ptr[subindice];
}

int& Array_Doble::operator() (int f, int c){

    int i = 0,  k = 0;

    while(i < c-1){//me sitúo en la columna en la que está ese elemento
        i++;
    }

    //j=i;
    for(k = 0; k < f-1; k++){
        i+=columnas;
    }

    return ptr[i];
}


int Array_Doble::operator() (int f, int c) const{
    int i = 0,  k = 0;

    while(i < c){//me sitúo en la columna en la que está ese elemento
        i++;
    }

    //j=i;
    for(k = 0; k < f-1; k++){
        i+=columnas;
    }

    return ptr[i];
}


 std::ostream& operator<<(std::ostream &salida, const Array_Doble &a){

    size_t tamanio = a.filas * a.columnas;
    for(size_t i = 0; i < tamanio; i++){
        salida << setw(12) << a.ptr[i];

        if( (i+1) % a.columnas == 0){
            salida << endl;
        }
    }


    return salida;
}


 std::istream& operator>>(std::istream &entrada, Array_Doble & a){

    size_t tamanio = a.filas * a.columnas;
    for(size_t i = 0; i < tamanio; i++){
        entrada >> a.ptr[i];
    }


    return entrada;

}

