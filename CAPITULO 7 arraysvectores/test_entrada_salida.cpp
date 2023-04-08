#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palabra;
    string texto;
    char letra;

    cout <<"Ingresa una palabra: ";
    cin >> palabra;

    //cin.sync(); //si no le pongo, en la variable texto se almacena cadena vacía SI O SÍ NECESITO UNA DE ESTAS SENTENCIAS
    cin.ignore();
    cout <<"Ingresa algo de texto con (lineas o espacios en blanco antes del texto)";//cin ignora los espacios en blanco, si ingreso enter lo almacena
    getline(cin, texto);//si almacena lineas en blanco

    /*
    cin.ignore();
    cin.sync();
    */
    cout <<"Ingresa una letra/caracter: ";
    cin >> letra;


    cout <<"\n\n\npalabra: "<<palabra;
    cout <<"\n\nletra: "<<letra;
    cout <<"\n\ntexto: "<<texto;
    return 0;
}
