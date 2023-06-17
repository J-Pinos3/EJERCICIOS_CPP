#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h"
using namespace std;

Array::Array(int tamanioArreglo):
    tamanio(tamanioArreglo > 0 ? tamanioArreglo : throw invalid_argument("El tamaño del arreglo debe ser > 0")),
    ptr(new int[tamanio])
    {
        for(size_t i = 0; i < tamanio; i++){
            ptr[i] = 0;
            //*(ptr+i) = 0
        }
    }

Array::Array(const Array& arrCopia):
    tamanio(arrCopia.tamanio), ptr(new int[tamanio])
    {
        for(size_t i = 0; i < tamanio; i++){
            this->ptr[i] = arrCopia[i];

        }
    }

Array::~Array(){
    delete[] ptr;//libera el espacio del array generado;
}


size_t Array::getTamanio() const{
    return tamanio;
}

const Array& Array::operator=(const Array &derecho){
    if(&derecho != this){ //evita la auto asignacion
        if(tamanio != derecho.tamanio){
            delete []ptr;
            ptr = nullptr;
            tamanio = derecho.tamanio;
            ptr = new int[tamanio];
        }

        for(size_t i = 0; i < tamanio; i++){
            this->ptr[i] = derecho[i];
        }
    }

    return *this;
}


bool Array::operator==(const Array &derecho) const{
    if(tamanio != derecho.tamanio)
        return false;

    for(size_t i =0; i < tamanio; i++){
        if(ptr[i] != derecho[i]){
            return false;//el contenido de los arrays no es igual
        }
    }


    return true;
}

int & Array::operator[](int subindice){
    if(subindice < 0 || subindice >= tamanio)
    {   
        throw out_of_range("Subíndice fuera de rango");       
    }

    return ptr[subindice];
}

int Array::operator[](int subindice) const{
    if(subindice < 0 || subindice >= tamanio)
    {   
        throw out_of_range("Subíndice fuera de rango");       
    }

    return ptr[subindice];
}

istream& operator>>(istream& entrada, Array & a){
    for(size_t i = 0; i < a.tamanio; i++){
        entrada >> a.ptr[i];
    }
    return entrada;
}


ostream & operator<<(ostream& salida ,const Array& a){
    for(size_t i=0; i < a.tamanio; i++ ){
        salida << setw(12) << a.ptr[i];

        if( (i+1)%4 == 0 )
            salida << endl;
    }

    return salida;
}