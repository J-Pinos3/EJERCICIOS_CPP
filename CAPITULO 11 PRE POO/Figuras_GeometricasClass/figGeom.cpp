
#include <stdexcept> //para invalid_argument
#include <cmath>
#include "figGeom.h"


GEOMETRIA::GEOMETRIA():area(0), perimetro(0), volumen(0){  }


double GEOMETRIA::get_area() const{ return area; }
double GEOMETRIA::get_perimetro() const{ return perimetro; }
double GEOMETRIA::get_volumen() const{ return volumen; }


void GEOMETRIA::area_triangulo(double base, double altura){
    if(base < 0 || altura < 0){
        throw std::invalid_argument("La base o altura ingresadas son incorrectas.");
    }else{
        area = base * altura /2.0;
    }
}

void GEOMETRIA::perimetro_triangulo(double l1, double l2, double l3){
    if(l1 < 0 || l2 < 0 || l3 < 0){
        throw std::invalid_argument("Los lados ingresados son incorrectas.");
    }else{
        perimetro = l1 + l2 + l3;
    }
}


void GEOMETRIA::area_circulo(double radio){
    if(radio < 0){
        throw std::invalid_argument("El radio ingresado es incorrecto.");
    }else{
        area = 3.1416 * radio*radio;
    }
}

void GEOMETRIA::perimetro_circulo(double radio){
    if(radio < 0){
        throw std::invalid_argument("El radio ingresado es incorrecto.");
    }else{
        perimetro = 2.0 * 3.1416 *radio;
    }
}

void GEOMETRIA::area_esfera(double radio){
    if(radio < 0){
        throw std::invalid_argument("El radio ingresado es incorrecto.");
    }else{
        area = 4.0 * 3.1416 * radio * radio;
    }
}

void GEOMETRIA::volumen_esfera(double radio){
    if(radio < 0){
        throw std::invalid_argument("El radio ingresado es incorrecto.");
    }else{
        volumen = 4.0/3 * 3.1416 * radio * radio * radio;
    }
}


void GEOMETRIA::area_cuadrado(double lado){
    if(lado < 0){
        throw std::invalid_argument("El lado ingresado es incorrecto");
    }else{
        area = lado*lado;
    }
}

void GEOMETRIA::perimetro_cuadrado(double lado){
    if(lado < 0){
        throw std::invalid_argument("El lado ingresado es incorrecto");
    }else{
        perimetro = 4.0*lado;
    }
}

void GEOMETRIA::area_cubo(double lado){
    if(lado < 0){
        throw std::invalid_argument("El lado ingresado es incorrecto");
    }else{
        area = 6.0 * lado * lado;
    }
}
    
void GEOMETRIA::volumen_cubo(double lado){
    if(lado < 0){
        throw std::invalid_argument("El lado ingresado es incorrecto");
    }else{
        volumen = lado*lado*lado;
    }
}


void GEOMETRIA::area_rectangulo(double base, double altura){
    if(base < 0 || altura < 0){
        throw std::invalid_argument("La base o altura ingresadas son incorrectas");
    }else{
        area = base * altura;
    }

}
void GEOMETRIA::perimetro_rectangulo(double base, double altura){
    if(base < 0 || altura < 0){
        throw std::invalid_argument("La base o altura ingresadas son incorrectas");
    }else{
        perimetro = 2.0 * (base + altura);
    }
}

void GEOMETRIA::superficie_paralelepipedo(double largo, double ancho, double alto){
    if(largo < 0 || ancho < 0 || alto < 0){
        throw std::invalid_argument("El largo, ancho o alto ingresados son incorrectos");
    }else{
        double sup_lateral = 2.0*largo * alto + 2.0*ancho*alto;
        double sup_base = largo * ancho;
        area = sup_lateral + (2.0 * sup_base);
    }
}

void GEOMETRIA::volumen_paralelepipedo(double largo, double ancho, double alto){
    if(largo < 0 || ancho < 0 || alto < 0){
        throw std::invalid_argument("El largo, ancho o alto ingresados son incorrectos");
    }else{
        volumen = largo * ancho * alto;
    }
}


void GEOMETRIA::area_trapecio(double baseMayor, double baseMenor, double altura){
    if( baseMayor < 0||  baseMenor < 0 || altura < 0 ){
        throw std::invalid_argument("Las bases o la altura ingresadas son incorrectas");
    }else{
        area = (baseMayor + baseMenor) * altura /2.0;
    }
}


void GEOMETRIA::area_cilindro(double radio, double altura){
    if(radio < 0 || altura < 0){
        throw std::invalid_argument("El radio o la altura ingresados son incorrectos.");
    }else{
        area = (2.0 * 3.1416 * radio * altura) + (2.0 * 3.1416 * radio * radio);
    }    
}

void GEOMETRIA::volumen_cilindro(double radio, double altura){
    if(radio < 0 || altura < 0){
        throw std::invalid_argument("El radio o la altura ingresados son incorrectos.");
    }else{
        volumen = 3.1416 * radio * radio * altura;
    }
}
