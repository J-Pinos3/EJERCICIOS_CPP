#include <iostream>
#include "Hora.h"
using namespace std;

int main()
{


    Hora h1,h3;

    Hora h2(14,50,7);

    try{
        h1.setHoras(3);
        h1.setMinutos(15);
        h1.setSegundos(48);
    }catch(invalid_argument e){
        cout << "La hora ingresada no es correcta"<<endl;
    }



    h3 = h1.sumarHoras(h2);

    h1.visualizarHora();
    h2.visualizarHora();
    h3.visualizarHora();





    return 0;
}
