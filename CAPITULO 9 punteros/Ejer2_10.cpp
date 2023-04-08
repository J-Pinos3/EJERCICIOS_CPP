#include <iostream>
#include <cstdlib>//cstring
#include <cstring>
using namespace std;


int main(int argc, char const *argv[]) {

    char *Cadena = (char *)"Montes de toledo en castilla la mancha";
    int *Ptr_entero, longitud_Cadena, entero = 15;
    char *Ptr_cadena;

    longitud_Cadena = strlen(Cadena);
    cout <<"longitud_Cadena: "<<longitud_Cadena<<endl;
    Ptr_cadena = new char[longitud_Cadena+1];
    strcpy(Ptr_cadena, Cadena);

    Ptr_entero = new int(5);
    //*Ptr_entero = entero;

    cout <<"Ptr_cadena = "<<Ptr_cadena<<",  longitud_Cadena = "<< longitud_Cadena<<endl;
    delete Ptr_cadena;

    cout <<"*Ptr_entero = "<<*Ptr_entero<<endl;
    cout <<"Ptr_entero = "<<Ptr_entero<<endl;

    delete Ptr_entero;
  return 0;
}
