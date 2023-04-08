#include <iostream>
#include <new>
#include <string>
using namespace std;

struct Nodo;
typedef Nodo* PtrNodo;
struct Nodo{
    PtrNodo sig;
    string dato;
};

void escribir(PtrNodo lista){
    PtrNodo ptr = lista;
    while(ptr != NULL){
        cout << ptr->dato << endl;
        ptr = ptr->sig;
    }
}

PtrNodo buscar(PtrNodo lista, const string& dt){
    PtrNodo ptr = lista;
    while( ( ptr!=NULL )&&( ptr->dato != dt ) ){
        ptr = ptr->sig;
    }
    return ptr;
}

PtrNodo leer_inversa(){
    PtrNodo lista = nullptr;
    string dt;      cin >> dt;
    while(dt != "fin" ){
        PtrNodo ptr = new Nodo;
        ptr->dato = dt;
        ptr->sig = lista;
        lista = ptr;
        cin >> dt;
    }
    return lista;
}

void destruir(PtrNodo &lista){
    while(lista != NULL){
        PtrNodo ptr = lista;
        lista = lista->sig;
        delete ptr;
    }
}

int main(int argc, char const *argv[])
{
    PtrNodo lista;
    lista = leer_inversa();
    escribir(lista);
    PtrNodo ptr = buscar(lista, "juan");
    if(ptr != NULL){
        cout << "Nombre: " << ptr->dato << endl;
    }

    destruir(lista);
    
    return 0;
}
