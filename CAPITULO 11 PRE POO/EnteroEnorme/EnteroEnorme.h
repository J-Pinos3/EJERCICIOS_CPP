#ifndef ENTEROENORME_H
#define ENTEROENORME_H

#include <array>
#include <string>

class EnteroEnorme{

public:

    //CONSTRUCTORES
    EnteroEnorme(long a = 0);
    EnteroEnorme(const std::string &num); //construcor de copia
    

    //MÉTODOS SUMAR
    EnteroEnorme operator+(const EnteroEnorme& a);
    EnteroEnorme operator+(int a);
    EnteroEnorme operator+(const std::string& a);

    //MÉTODOS RESTAR
    EnteroEnorme operator-(const EnteroEnorme& a );
    EnteroEnorme operator-(int a );
    EnteroEnorme operator-(const std::string& a );

    //MÉTODOS COMPARAR
    bool esIgual(const EnteroEnorme& a ) const;
    bool noEsIgual(const EnteroEnorme& a ) const;
    bool esMayor(const EnteroEnorme& a ) const;
    bool esMenor(const EnteroEnorme& a ) const;
    bool esMayoroIgual(const EnteroEnorme& a ) const;
    bool esMenoroIgual(const EnteroEnorme& a ) const;

    bool esCero() const;
    void entrada(const std::string& a);
    std::string toString() const;


private:
    std::array<short, 40> entero;

};







#endif //ENTEROENORME_H