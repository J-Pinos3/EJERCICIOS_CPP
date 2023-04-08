#ifndef FIGGEOM_H
#define FIGGEOM_H


class GEOMETRIA{

public:
    GEOMETRIA();
    
    double get_area() const;
    double get_perimetro() const;
    double get_volumen() const;

    //TRIÁNGULO
    void area_triangulo(double base, double altura);
    void perimetro_triangulo(double l1, double l2, double l3);


    //CÍRCULO Y ESFERA
    void area_circulo(double radio);
    void perimetro_circulo(double radio);
    void area_esfera(double radio);
    void volumen_esfera(double radio);


    //CUADRADO Y CUBO
    void area_cuadrado(double lado);
    void perimetro_cuadrado(double lado);
    void area_cubo(double lado);
    void volumen_cubo(double lado);


    //RECTÁNGULO PARALELEPÍPEDO Y PARALELOGRAMO
    void area_rectangulo(double base, double altura);
    void perimetro_rectangulo(double base, double altura);
    void superficie_paralelepipedo(double largo, double ancho, double alto);
    void volumen_paralelepipedo(double largo, double ancho, double alto);


    //TRAPECIO
    void area_trapecio(double baseMayor, double baseMenor, double altura);


    //CILINDRO
    void area_cilindro(double radio, double altura);
    void volumen_cilindro(double radio, double altura);

private:
    double area;
    double perimetro;
    double volumen;

};



#endif //FIGGEOM_H