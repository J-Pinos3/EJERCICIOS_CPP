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


//*******************************************************************

static const int CLAVES[10] = {4,5,8,-20,1,6,7,8,11,24};

struct Sustitucion{

    static std::string Cifrar(std::string t);
    static std::string Descifrar(std::string t);

private:
    static std::string _enc(std::string, bool invertir);
};

inline std::string Sustitucion::Cifrar(std::string t) { return _enc(t, false); }
inline std::string Sustitucion::Descifrar(std::string t){ return _enc(t, true); }

inline std::string Sustitucion::_enc(std::string t, bool invertir){
    std::transform(t.begin(), t.end(), t.begin(), toupper );



    std::string r = "";
    int i = 0;
    for(auto c: t){
        if( isalnum(c) ){

            if(!invertir){
                c+=CLAVES[i];
            }else{
                c-=CLAVES[i];
            }


            if(c > 'Z'){
                c -= 26;//26 xq son las letras del abecedario
            }

            if(c < 'A'){
                c += 26;
            }

            if(++i > 9){
                i = 0;
            }
        }

        r+=c;
    }
    return r;
}

#endif // CESAR_H
