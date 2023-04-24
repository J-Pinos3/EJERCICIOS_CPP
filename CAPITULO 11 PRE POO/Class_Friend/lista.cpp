#include "lista.h"

Elemento::Elemento(char a) : tipo(a), sig(nullptr)
{

}

void Lista::Nuevo(char k){
    Elemento *p;
    p = new Elemento(k);
    p->sig = Cabeza;
    Cabeza = p;
}

void Lista::LiberarLista ( ){
    Elemento *p;
    while(Cabeza){
        p=Cabeza;
        Cabeza = p->sig;
        delete p;
    }
}