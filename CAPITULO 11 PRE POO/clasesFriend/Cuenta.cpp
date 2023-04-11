#include "Cuenta.h"
#include <iostream>

void establecerX(Cuenta &c, int val){
    c.x = val;
}


void Cuenta::imprimit() const{
    std::cout << "x: " <<  x << std::endl;
}

Cuenta::Cuenta(): x(0){
    
}