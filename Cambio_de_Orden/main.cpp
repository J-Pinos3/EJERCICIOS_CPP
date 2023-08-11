#include <iostream>
#include "cOrden.h"
using namespace std;

int main()
{

    string msg;
    int clave;
    char opt;

    while(1){

        do{
            cout <<"1) Encriptar\n"
                 <<"2) Desencriptar\n";
            cout <<"> ";
            cin >> opt;
        }while(opt != '1' && opt != '2');


        cout <<"\nIngresa la clave: ";
        cin >> clave;
        cin.ignore();
        cout <<"Escribe el mensaje: ";
        getline(cin, msg);

        cout <<"Mensaje ingresado: \"" << msg << "\"" << endl;

        if(opt == '1'){
            string nuevo = CambioOrden::Encriptar(msg, clave);
            cout <<"\nMensaje encriptado:\"" << nuevo <<"\"" << endl << endl;
        }else{
            string nuevo = CambioOrden::Desencriptar(msg, clave);
            cout <<"\nMensaje desencriptado:\"" << nuevo << "\"" << endl << endl;
        }


    }


    return 0;
}
