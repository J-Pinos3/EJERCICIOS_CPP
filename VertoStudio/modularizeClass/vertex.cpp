#include "vertex.h"
#include <iostream>

void Vertex::setCoordinatesToCero(){
    x = y = z = 0;
}

void Vertex::showCoordinates(){
    std::cout << "x: "<< x << 
                "\ny: " << y 
                << "\nz: " << z << std::endl; 
}

void Vertex::setCoordinates(int vx, int vy, int vz){
    this->x = vx;
    this->y = vy; 
    this->z = vz;
}

void Vertex::setCoordinatesToOne(){
    x = y = z = 1;
}