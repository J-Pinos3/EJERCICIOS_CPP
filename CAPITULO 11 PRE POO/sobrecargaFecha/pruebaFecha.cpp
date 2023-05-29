#include <iostream>
#include "fecha.h"  
using namespace std;

int main(int argc, char const *argv[])
{
    
    Fecha d1(12,27,2010);
    Fecha d2;
    Fecha d3 = Fecha(7,13,2010);

    cout <<"\nd1 es: " << d1 <<
        "\nd2 es: " << d2 
        << "\nd3 es: " << d3 << endl;


    cout <<"d1 += 7 es: " << (d1+=7) << endl;

    d2.setFecha(2,28,2008);
    cout <<"\n\nd2 es: " << d2 << endl;
    cout <<"++d2 es: " << ++d2 << " año bisiesto permite día 29" <<endl;


    cout <<"\n\nPrueba de incremento prefijo\n";
    cout << "d3 es: " << d3 <<endl;
    cout << "++d3 es: " << ++d3 <<endl;
    cout << "d3 es: " << d3 <<endl<<endl;
    

    cout <<"\n\nPrueba de incremento postfijo\n";
    cout << "d3 es: " << d3 <<endl;
    cout << "d3++ es: " << d3++ <<endl;
    cout << "d3 es: " << d3 <<endl<<endl;

    return 0;
}
