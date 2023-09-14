#include "lista.h"
#include <cassert>


namespace umalcc{

    ListaInt::ListaInt(): sz(0), ve() { }


    ListaInt::ListaInt(const ListaInt& o){
        this->sz = o.sz;
        for(size_t i = 0; i < this->sz;i++){
            ve.at(i) = o.ve.at(i);
        }
    }



    ListaInt& ListaInt::operator= (const ListaInt& o){
        if(this != &o){
            this->sz = o.sz;
            for(size_t i = 0; i < this->sz;i++){
                ve.at(i) = o.ve.at(i);
            }
        }

        return *this;
    }


    bool ListaInt::llena() const{
        return sz == (int)(ve.size());
    }

    int ListaInt::size() const{
        return sz;
    }

    void ListaInt::clear(){
        sz = 0;
        for(size_t i = 0; i < this->sz;i++){
                ve.at(i) = 0;
        }
    }


    void ListaInt::insertar(int pos, int dato){
        assert( !llena() && pos >= 0 & pos <= size() );
        abrir_hueco(pos);
        ve[pos] = dato;
    }

    void ListaInt::eliminar(int pos){
        assert( pos >= 0 & pos <= size() );
        cerrar_hueco(pos);
    }


    int ListaInt::acceder(int pos) const{
        assert( pos >= 0 & pos <= size() );
        return ve[pos];
    }

    void ListaInt::modificar(int pos, int dato){
        assert( pos >= 0 & pos <= size() );
        ve[pos] = dato;
    }


    //MÉTODOS PRIVADOS
    void ListaInt::abrir_hueco(int pos){
        assert( sz < (int)(ve.size()) );
        //HAY UN ELEMENTO MÁS
        for(int i = sz; i > pos; i--){
            ve[i] = ve[i-1];
        }
        sz++;
    }


    void ListaInt::cerrar_hueco(int pos){
        assert(sz > 0);
        sz--;
        for(int i = pos;  i < sz; i++){
            ve[i] = ve[i+1];
        }
    }
}