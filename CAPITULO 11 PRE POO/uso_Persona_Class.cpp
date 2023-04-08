#include <iostream>
#include <string>
#include <cstdlib>
#include "Persona_class.h"
using namespace std;

//g++ -o usoPersona.exe .\uso_Persona_Class.cpp .\Persona_class.cpp
int main(int argc, char const *argv[]) {

    Persona_class pers1, pers2;

    pers1.setNombre("Juan Alberto");
    pers1.setEdad(28);
    pers1.mostrar_DatosCompletos();

    cout <<"\n\nIngrese el nombre de la segunda persona: ";
    string nomb;
    getline(cin, nomb);

    cout <<"Ingrese la edad de la segunda persona: ";
    int edad;
    cin >> edad;
    pers2.setNombre(nomb);
    pers2.setEdad(edad);
    pers2.mostrar_DatosCompletos();



    system("pause");
  return 0;
}
