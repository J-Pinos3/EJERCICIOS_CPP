#include <iostream>
#include "Rectangulo.h"
using namespace std;


int main(int argc, char const *argv[])
{

    Rectangulo r1(10,3.7);
    cout <<"Dado un rectángulo largo: " <<r1.get_largo() << " y ancho: " <<  r1.get_ancho() << endl;
    cout <<"Su área es: " << r1.calcular_area() <<endl;
    cout <<"Su perímetro es: " << r1.calcular_perimetro() << endl << endl;

    Rectangulo r2(2,2,10,2,10,5,2,5);






    return 0;
}
