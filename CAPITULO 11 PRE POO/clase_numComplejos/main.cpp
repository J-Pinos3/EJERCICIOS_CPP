#include <iostream>
#include "complejos.h"
using namespace std;
using namespace umalcc;

int main()
{

    Complejo num1, num2, resp;
    cout <<"COMPLEJO 1"<<endl;
    num1.Ingresar_Numero();

    cout <<"COMPLEJO 2"<<endl;
    num2.Ingresar_Numero();

    resp.Sumar(num1,num2);
    resp.Mostrar_Numero();
    cout <<endl;
    resp.Restar(num1,num2);
    resp.Mostrar_Numero();
    return 0;
}
