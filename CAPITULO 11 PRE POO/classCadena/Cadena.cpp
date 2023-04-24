#include <cstring>
#include <new>
#include "Cadena.h"

Cadena::Cadena(){
    cad = nullptr;
}

Cadena::Cadena(char *c){
    cad = new char[strlen(c)+1];
    strcpy(cad,c);
}

Cadena::Cadena(int n){
    cad = new char[n+1];
    cad[0]='\0';
}

Cadena::Cadena(const Cadena& c){
    cad = new char[ strlen(c.cad)+1 ];
    strcpy(cad, c.cad);
}

Cadena::~Cadena(){
    delete[] cad;
}

void Cadena::asignar(char *dest){
    delete[] cad;

    cad = new char[strlen(dest)+1];
    strcpy(cad, dest);
}

char *Cadena::Leer(char *c){
    strcpy(c, cad);
    return c;
}