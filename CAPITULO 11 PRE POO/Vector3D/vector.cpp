#include <iostream>
#include <cmath>
#include "vector.h"
using namespace std;

Vector::Vector(double a, double b, double c):x(a), y(b), z(c){}



void Vector::setX(double x){
    this->x = x;
}

void Vector::setY(double y){
    this->y = y;
}

void Vector::setZ(double z){
    this->z = z;
}



double Vector::getX() const{
    return x;
}

double Vector::getY() const{
    return y;
}

double Vector::getZ() const{
    return z;
}



void Vector::mostrar_vector() const{

    cout << "( " << getX() << ", " << getY() << ", " << getZ() << " )";
}


bool Vector::son_iguales(Vector a){
    return  ( a.getX()==this->getX() )&&( a.getY()==this->getY() )&&( a.getZ()==this->getZ() );
}


bool Vector::son_iguales_v2(Vector *a){
    return  ( a->getX()==this->getX() )&&( a->getY()==this->getY() )&&( a->getZ()==this->getZ() );
    //return  ( (*a).getX()==this->getX() )&&( (*a).getY()==this->getY() )&&( (*a).getZ()==this->getZ() );
}


bool Vector::son_iguales_v3(const Vector &a){
    return  ( a.getX()==this->getX() )&&( a.getY()==this->getY() )&&( a.getZ()==this->getZ() );
}



double Vector::pitagorazo(){
    return sqrt( pow(x,2) + pow(y,2) + pow(z,2)  );
}




