#include <iostream>
#include "cesar.h"
using namespace std;

int main()
{
    string msg;
    int clave;
    char op = '0';
    cout <<"HOLA MUNDO"<<endl;

    while(1){

        do{
            cout <<"\nSelecciona:\n"
                 <<"1) Encriptar\n"
                 <<"2) Desencriptar\n";
            cout <<"opcion: ";
            cin >> op;

        }while(op != '1' && op != '2');
        cin.ignore();


        /*
        cout <<"Ingrese la clave: ";
        cin >> clave;
        cin.ignore();
        cout <<"Ingrese el mensaje: ";
        getline(cin, msg);

        if(op == '1'){
            string nuevo = Cifrar(msg, clave);
            cout <<"\nMensaje encriptado: " << nuevo << endl;
        }else{
            string nuevo = Descifrar(msg, clave);
            cout <<"\nMensaje desencriptado: " << nuevo << endl;
        }

        */

        cout <<"Ingrese el mensaje: ";
        getline(cin, msg);

        if(op == '1'){
            string nuevo = Sustitucion::Cifrar(msg);
            cout <<"\nMensaje encriptado: " << nuevo << endl;
        }else{
            string nuevo = Sustitucion::Descifrar(msg);
            cout <<"\nMensaje desencriptado: " << nuevo << endl;
        }


        cin.ignore();
        system("cls");
    }
    return 0;
}
