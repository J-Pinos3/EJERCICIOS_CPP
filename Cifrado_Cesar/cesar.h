#ifndef CESAR_H
#define CESAR_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <cctype>
//using namespace std;


struct Cesar{

    static std::string Cifrar(std::string t, int clave);
    static std::string Descifrar(std::string t, int clave);
};


inline static std::string Cifrar(std::string t, int clave){

    std::transform(t.begin(), t.end(), t.begin(), toupper );

    std::string r = "";
    for(auto c: t){
        if( isalnum(c) ){
            c+=clave;
            if(c > 'Z'){
                c -= 26;//26 xq son las letras del abecedario
            }

            if(c < 'A'){
                c += 26;
            }
        }

        r+=c;
    }
    return r;
}


inline static std::string Descifrar(std::string t, int clave){
    return Cifrar(t, -clave);

}



#endif // CESAR_H
