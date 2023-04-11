#ifndef CUENTA_H
#define CUENTA_H


class Cuenta{

    friend void establecerX(Cuenta &c, int val);

public:
    Cuenta();
    void imprimit() const; 

private:
    int x;

};



#endif //CUENTA_H