#ifndef RECTANGULO_H
#define RECTANGULO_H
/*
9.11 (Clase Rectangulo) Cree una clase Rectangulo con los atributos longitud y anchura, cada una de las 
cuales tiene un valor predeterminado de 1. Proporcione funciones miembro que calculen el perimetro y el area
del rectángulo. Además, proporcione funciones establecer y obtener para los atributos longitud y anchura. Las 
funciones establecer deben verificar que longitud y anchura sean números de punto flotante mayores que 0.0 y 
menores que 20.0.
*/

class Rectangulo{

public:
    explicit Rectangulo(double l = 1, double a = 1);
    explicit Rectangulo(double x1, double y1, double x2, double y2,double x3, double y3,double x4, double y4);
    double calcular_perimetro();
    double calcular_area();

    void set_largo(double l);
    void set_ancho(double a);

    double get_largo() const;
    double get_ancho() const;
    

    void set_coordenadas(double x1, double y1, double x2, double y2,double x3, double y3,double x4, double y4);
    double get_longitud() const;
    double get_anchura() const;
    double get_perimetro();
    double get_area();
    static double pendiente(double x1, double y1, double x2, double y2);
    static double dist_puntos(double x1, double y1, double x2, double y2);

private:
    double largo;
    double ancho;
    double x1; 
    double y1; 
    double x2; 
    double y2;
    double x3; 
    double y3;
    double x4; 
    double y4;
};


#endif //RECTANGULO_H