#include <iostream>
#include <sstream>
#include <stdexcept>
#include "EnteroEnorme.h"
using namespace std;


EnteroEnorme::EnteroEnorme(long a){
    for(int i{0}; i < 40; i++){
        entero[i]=0;
    }


    for(int j{39}; a != 0 && j >= 0; j--){
        entero[j] = static_cast<short int>(a % 10);
        a/=10;
    }

}



EnteroEnorme::EnteroEnorme(const std::string &num){
    entrada(num);//llama a entrada para inicializar el gran entero
}


//sumar enteroenorme + enteroenorme
EnteroEnorme EnteroEnorme::operator+(const EnteroEnorme& a){
    EnteroEnorme tmp;
    int acarreo{0};
    for(int i = 39; i >= 0 ; i--){
        tmp.entero[i] = entero[i] + a.entero[i] + acarreo;

        if(tmp.entero[i] > 9){
            tmp.entero[i] %= 10;//reduce a  0 y 9
            acarreo = 1;
        }else{
            acarreo = 0;
        }
    }
    return tmp;
}


//sumar enteroenorme + int
EnteroEnorme EnteroEnorme::operator+(int a){
    EnteroEnorme tmp(a);
    return (*this) + tmp;
}

//sumar enteroenorme + string
EnteroEnorme EnteroEnorme::operator+(const std::string &num){
    EnteroEnorme tmp(num);
    return (*this) + tmp;
}

//restar enterorenorme - enterorenorme
EnteroEnorme EnteroEnorme::operator-(const EnteroEnorme& a ){

    if(esMenor(a)){
        throw logic_error("No se puede restar un valor grande de uno pequeño");
    }

    EnteroEnorme resultado("0");
    bool menosUno{false};


    for(int i{39}; i >= 0; i--){
        
        int valorSuperior{entero[i]};
        int valorInferior{a.entero[i]};


        if(menosUno){
            if(valorSuperior == 0){
                valorSuperior = 9;
            }else{
                valorSuperior -= 1;
                menosUno=false;
            }
        }

        if(valorSuperior >= valorInferior){
            resultado.entero[i] = valorSuperior - valorInferior;
        }else{
            valorSuperior += 10;
            menosUno = true;
        
            resultado.entero[i] = valorSuperior - valorInferior;
        }

    }


    return resultado;
}

//restar enteroenorme - int
EnteroEnorme EnteroEnorme::operator-(int a ){
    EnteroEnorme tmp(a);
    //return operator-(tmp);
    return (*this) - tmp;

}

//restar enteroenorme - string
EnteroEnorme EnteroEnorme::operator-(const std::string& a ){

    EnteroEnorme tmp(a);
    //return operator-(tmp);
    return (*this) - tmp;

}


bool EnteroEnorme::esIgual(const EnteroEnorme& a ) const{
    int i = 0;
    for(const int& valor: entero){
        if(valor != a.entero[i++]){
            return false;
        }
    }

    return true;
}


bool EnteroEnorme::noEsIgual(const EnteroEnorme& a ) const{

    return !(esIgual(a));
}


bool EnteroEnorme::esMayor(const EnteroEnorme& a ) const{

    return !(a.esMenor(*this));

}


bool EnteroEnorme::esMenor(const EnteroEnorme& a ) const{

    for(int i = 0; i < 49; i++){
        if(entero[i] > a.entero[i]){
            return false;
        }else if(entero[i] < a.entero[i]){
            return true;
        }
    }

    return false;    
}


bool EnteroEnorme::esMayoroIgual(const EnteroEnorme& a ) const{

    return (!esMayor(a) || esIgual(a));
}


bool EnteroEnorme::esMenoroIgual(const EnteroEnorme& a ) const{
    return (esIgual(a) || esMenor(a));

}



bool EnteroEnorme::esCero() const{
    for(int i = 0; i < 40; i++){
        if(entero[i] == 0){
            return false;
        }
    }
    return true;
}



void EnteroEnorme::entrada(const std::string& valor){

    for(int i{0}; i < 40; i++){
        entero[i] = 0;
    }

    unsigned int longitud= valor.length();

    for(unsigned int j{40-longitud}, k{0}; j < 40; j++, k++){
        if(isdigit(valor[k])){
            entero[j] = valor[k] - '0';
        }
    }

}


string EnteroEnorme::toString() const{
    int i;
    for(i=0; (i<40)&&(entero[i] == 0); i++ ){
        ;//salta los 0's iniciales del número 0053
    }

    if(i == 40){
        return "0";
    }else{

        ostringstream output;
        for(;i < 40; i++){
            output << entero[i];
        }
        return output.str();
        
    }
}





