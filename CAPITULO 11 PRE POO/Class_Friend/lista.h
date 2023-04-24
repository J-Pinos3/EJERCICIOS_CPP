#ifndef LISTA_H
#define LISTA_H

class Elemento{
public:
    Elemento(char d);
    char Tipo(){return tipo;}
private:
    char tipo;
    Elemento *sig;
    friend class Lista;
};



class Lista{

public:
    Lista() :Cabeza(nullptr) {}
    ~Lista() { LiberarLista(); }

    void Nuevo(char tipo);
    Elemento *Primero() { return Cabeza; }
    Elemento *Siguiente(Elemento *p){
        if(p){
            return p->sig;
        }else{
            return p;
        }
    }
    bool EstaVacio() { return Cabeza == nullptr; }

private:
    Elemento *Cabeza;
    void LiberarLista();
};

#endif //LISTA_H