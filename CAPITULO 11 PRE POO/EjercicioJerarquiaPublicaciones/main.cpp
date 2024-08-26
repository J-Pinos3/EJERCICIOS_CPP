#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

class Publicacion{

public:
    void NombrarEditor(const char *s){
        strcpy(editor, s);
    }

    void PonerFecha(unsigned long fe){
        fecha = fe;
    }

    void EscribirEditor(){
        cout << editor << endl;
    }

    void EscribirFecha(){
        cout << fecha << endl;
    }

private:
    char editor[50];
    unsigned long fecha;
};


class Revista: public Publicacion{

public:
    void NumerosPorAnio(unsigned n){
        numerosPorAnio =  n;
    }

    void FijarCirculacion(unsigned long n){
        circulacion = n;
    }

    void EscribirNumerosPorAnio(){
        cout << numerosPorAnio << endl;
    }

    void EscribirCirculacion(){
        cout << circulacion << endl;
    }

private:
    unsigned numerosPorAnio;
    unsigned long circulacion;
};


class Libro: public Publicacion{

public:
    void PonerISBN(const char *s){
        strcpy(isbn, s);
    }

    void PonerAutor(const char *s){
        strcpy(autor, s);
    }

    void EscribirISBN(){
        cout << isbn << endl;
    }

    void EscribirAutor(){
        cout << autor << endl;
    }

private:
    char isbn[20];
    char autor[40];

};

int main(){

    Libro L;
    Revista R;

    L.NombrarEditor("Libro de Schaum");
    L.PonerFecha(2024);
    L.PonerISBN("84-50");
    L.PonerAutor("Lucas García");

    R.NombrarEditor("MCGraw-Hill");
    R.PonerFecha(2021);
    R.NumerosPorAnio(12);
    R.FijarCirculacion(30000);


    return 0;
}
