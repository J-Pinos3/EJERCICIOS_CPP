#include "Rectangulo.h"
#include <iostream>
#include <stdexcept>

Rectangulo::Rectangulo(double l, double a ){
    if( (l >= 0.0 && l < 20.0) && (a >= 0.0 && a < 20.0) ){
        this->largo = l;
        this->ancho = a;
    }else{
        throw std::invalid_argument("El largo o el ancho son incorrectos.");
    }
}


Rectangulo::Rectangulo(double x1, double y1, double x2, double y2,double x3, double y3,double x4, double y4){
    set_coordenadas(x1, y1, x2, y2, x3, y3, x4, y4);
}

double Rectangulo::calcular_perimetro(){
    return 2.0*(largo +ancho);
}
double Rectangulo::calcular_area(){
    return largo*ancho;
}


void Rectangulo::set_largo(double l){
    if(l >= 0.0 && l < 20.0){
        this->largo = l;
    }else{
        throw std::invalid_argument("El largo es incorrecto.");
    }
}
void Rectangulo::set_ancho(double a){
    if(a >= 0.0 && a < 20.0){
        this->ancho = a;
    }else{
        throw std::invalid_argument("El ancho es incorrecto.");
    }
}

double Rectangulo::get_largo() const{
    return largo;
}
double Rectangulo::get_ancho() const{
    return ancho;
}




double Rectangulo::dist_puntos(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

double Rectangulo::pendiente(double x1, double y1, double x2, double y2){
    return (y2-y1)/(x2-x1);
}   
                                        //A                         B                   C                   D
void Rectangulo::set_coordenadas(double x1, double y1, double x2, double y2, double x3, double y3,double x4, double y4){
    //if(l >= 0.0 && l < 20.0){
    if( (x1 >= 0.0 && x1 < 20.0) && (y1 >= 0.0 && y1 < 20.0) && (x2 >= 0.0 && x2 < 20.0) && (y2 >= 0.0 && y2 < 20.0)&&
        (x3 >= 0.0 && x3 < 20.0) && (y3 >= 0.0 && y3 < 20.0) && (x4 >= 0.0 && x4 < 20.0) && (y4 >= 0.0 && y4 < 20.0))
    {

        //PENDIENTE AB
        double mab = Rectangulo::pendiente(x1,y1, x2,y2);

        //PENDIENTE BC
        double mbc = Rectangulo::pendiente(x2,y2, x3,y3);

        //PENDIENTE CD
        double mcd = Rectangulo::pendiente(x3,y3, x4,y4);

        //PENDIENTE AD
        double mad = Rectangulo::pendiente(x1,y1, x4,y4);

        if((mab == mcd) && (mbc == mad) && (mab != mbc)){
            std::cout <<"Las coordenadas representan un rectángulo" << std::endl;
            this->x1=x1;
            this->y1=y1;
            this->x2=x2;
            this->y2=y2;
            this->x3=x3;
            this->y3=y3;
            this->x4=x4;
            this->y4=y4;
        }        
    }else{
        throw std::invalid_argument("Las coordenadas ingresadas no represantan un rectángulo.");
    }
}

double Rectangulo::get_longitud() const{
    double longitud = 0;
    if( ( Rectangulo::dist_puntos(x1,y1, x2,y2) == Rectangulo::dist_puntos(x3,y3, x4,y4))&&(Rectangulo::dist_puntos(x1,y1, x2,y2) < Rectangulo::dist_puntos(x2,y2, x3,y3)) ){
        longitud = Rectangulo::dist_puntos(x2,y2, x3,y3);
    } 
    return longitud;
}

double Rectangulo::get_anchura() const{
    double anchura = 0;
    if( ( Rectangulo::dist_puntos(x1,y1, x2,y2) == Rectangulo::dist_puntos(x3,y3, x4,y4))&&(Rectangulo::dist_puntos(x1,y1, x2,y2) < Rectangulo::dist_puntos(x2,y2, x3,y3)) ){
        anchura = Rectangulo::dist_puntos(x1,y1, x2,y2);
    } 
    return anchura;
}

double Rectangulo::get_perimetro(){
    return 2*(get_anchura() + get_longitud());
}
double Rectangulo::get_area(){
    return get_anchura() * get_longitud();
}