#include <iostream>
using namespace std;
#include "lista.h"

int main(int argc, char const *argv[])
{
    
    Lista miLista;
    Elemento *e;

    miLista.Nuevo('*');
    miLista.Nuevo('-');
    miLista.Nuevo('+');
    miLista.Nuevo('/');
    miLista.Nuevo('%');


    //se muestran en la pantalla
    e= miLista.Primero();
    while(e){
        cout << e->Tipo() << ", ";
        e = miLista.Siguiente(e);
    }

    cout << endl;
    return 0;
}
