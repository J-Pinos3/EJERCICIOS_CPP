#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main(int argc, char const *argv[])
{
    
    Array enteros1(7);
    Array enteros2;    

    cout << "El tamaño de enteros1 es: " << enteros1.getTamanio() <<
         "\nEl array enteros1 después de la inicialización es:\n" << enteros1;


    cout << endl << endl << "El tamaño de enteros2 es: " << enteros2.getTamanio() <<
         "\nEl array enteros2 después de la inicialización es:\n" << enteros2;


    cout <<"\n\n\nIntroduzca 17 números enteros: " << endl;
    cin >> enteros1 >> enteros2;


    cout <<"\n\n\nDespués de la entrada, los objetos Array contienen: "<<endl
        << "enteros1:\n " << enteros1 
        << "enteros2:\n " << enteros2 << endl;


    if(enteros1 != enteros2)
        cout <<"No son iguales\n";


    Array enteros3(enteros1);
        cout << "El tamaño de enteros3 es: " << enteros3.getTamanio() <<
         "\nEl array enteros3 después de la inicialización es:\n" << enteros3;


    cout <<"\n\nAsignando enteros2 a enteros1:\n";
    enteros1 = enteros2;

    cout << "enteros1:\n " << enteros1 
        << "\nenteros2:\n " << enteros2 << endl;

    if(enteros1 == enteros2)
        cout <<"Son iguales\n";

    cout << "\nenteros1[5] = " << enteros1[5] <<endl;

    cout <<"Asignando 1000 a enteros1[5]"<<endl;
    enteros1[5] = 1000;
    cout << "enteros1[5] = " << enteros1[5] <<endl;

    try
    {
        cout <<"asignar 1000 a enteros1[15]"<<endl;
        enteros1[15] = 1000;
    }
    catch(const out_of_range& er)
    {
       cout << "Error: " << er.what() << endl;
    }
    

    return 0;
}
