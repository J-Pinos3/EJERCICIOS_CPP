#ifndef ARRAY_DOBLE_H
#define ARRAY_DOBLE_H
#include <iostream>

class Array_Doble{

    friend std::ostream& operator<<(std::ostream &, const Array_Doble&);
    friend std::istream& operator>>(std::istream &, Array_Doble&);


public: 

    explicit Array_Doble(int f= 3, int c= 3); //por defecto una matriz de 3x3
    Array_Doble(const Array_Doble &);
    ~Array_Doble();
    size_t getTamanio() const;

    const Array_Doble& operator= (const Array_Doble &);
    bool operator== (const Array_Doble &) const;

    bool operator!=(const Array_Doble &derecho) const{
        return !(*this == derecho);
    }

    int& operator() (int, int);
    int operator() (int, int) const;

    int& operator[](int); //devuelve un lvalue  modificable para objetos no const
    int operator[] (int) const;//devuelve un rvalue para objetos const
    

private:
    size_t filas;
    size_t columnas;
    int *ptr;

};








#endif //ARRAY_DOBLE_H