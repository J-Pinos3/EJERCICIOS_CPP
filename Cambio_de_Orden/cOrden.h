#ifndef CORDEN_H
#define CORDEN_H

#include <iostream>
#include <string>
using namespace std;


struct CambioOrden{
    static string Encriptar(string t, int veces);
    static string Desencriptar(string t, int veces);
};

inline string CambioOrden::Encriptar(string t, int veces){
    if(t.length() < 2 || !veces){
        return t;
    }

    string n = "";
    while( t.length() ){//mientras el texto tenga longitud
        if( t.length() > 1 ){
            n += t.at(t.length()-1);
        }
        n += t.at(0);

        if( t.length() > 2 ){
            t= t.substr(1, t.length()-2);
        }else{
            break;
        }

    }

    return Encriptar(n, veces -1);
}

inline string CambioOrden::Desencriptar(string t, int veces){
    if(t.length() < 2 || !veces){
        return t;
    }

    string n = "";

    for(int i = 1; i < t.length(); i+=2){
        n+= t.at(i);
    }

                                //si es impar, restamos 1
    int ultimo = t.length() - (t.length() % 2 ? 1 : 2) ;
    for(int i = ultimo; i >= 0; i-=2){
        n+= t.at(i);
    }

    return Desencriptar(n, veces -1);
}





#endif // CORDEN_H
