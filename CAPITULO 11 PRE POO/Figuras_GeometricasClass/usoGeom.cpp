#include <iostream>
using namespace std;
#include "figGeom.h"

int main(int argc, char const *argv[])
{
    
    GEOMETRIA figura;
    GEOMETRIA *ptr_fig = &figura;

    ptr_fig->area_triangulo(5.4,14.6);
    cout <<"Area de un triangulo de lados 5.4 y 14.6: " << ptr_fig->get_area() << endl << endl;


    ptr_fig->perimetro_circulo(3.2);
    cout <<"Perimetro de un circulo de radio 3.2: " << ptr_fig->get_perimetro() << endl << endl;



    ptr_fig->volumen_paralelepipedo(1.5, 7.6, 3.2);
    cout <<"Volumen de un paralelepipedo de lados 1.5, 7.6 y 3.2: " << ptr_fig->get_volumen() << endl << endl;


    ptr_fig->area_cilindro(3.5, 7.4);
    cout <<"Area de un cilindro de radio 3.5 y altura 7.4: " << ptr_fig->get_area() << endl << endl;

    return 0;
}
