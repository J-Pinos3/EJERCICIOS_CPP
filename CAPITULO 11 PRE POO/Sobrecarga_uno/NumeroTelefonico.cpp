#include <iomanip>
#include "NumeroTelefonico.h"
using namespace std;


//el operador << no puede ser un método (función miembro) xq se invoca con cout <<
ostream &operator<< (ostream& salida, const NumeroTelefonico& numero){
    salida << "("<< numero.codigoArea <<") "
    << numero.intercambio << "-" << numero.linea;
    return salida;
}


istream &operator>> (istream& entrada, NumeroTelefonico& numero){
    entrada.ignore(); //omite (
    entrada >> setw(3) >> numero.codigoArea;
    entrada.ignore(2);
    entrada >> setw(3) >> numero.intercambio;
    entrada.ignore();
    entrada >> setw(4) >> numero.linea;
    return entrada;
}