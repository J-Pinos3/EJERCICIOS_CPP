#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>


class Array{

    friend std::ostream& operator<<(std::ostream &, const Array &);
    friend std::istream& operator>>(std::istream &, Array &);

public:

    explicit Array(int = 10);
    Array(const Array &); //constructor de copia
    ~Array();
    size_t getTamanio() const;

    const Array& operator= (const Array &);
    bool operator== (const Array & ) const;

    bool operator!=(const Array &derecho) const{
        return !(*this== derecho);//ya está sobrecargado el ==
    }

    int& operator[](int); //devuelve un lvalue  modificable para objetos no const
    int operator[] (int) const;//devuelve un rvalue para objetos const

private:
    size_t tamanio;
    int *ptr;//puntero al primer elemento del arreglo dinámico

};

#endif //ARRAY_H