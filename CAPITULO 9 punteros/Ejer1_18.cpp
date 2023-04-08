#include <iostream>
#include <cmath>
using namespace std;

//recibe los coeficientes de la ecuación y sus soluciones
bool ecuacionCuadratica(double a, double b, double c, double *x1Ptr, double *x2Ptr);
void imprimirCuadratica(double a, double b, double c);


int main(int argc, char const *argv[]) {


    imprimirCuadratica(2.0,-2.0,-1.5);
    cout <<endl<<endl;
    imprimirCuadratica(1.0, -6.0, 9.0);
    cout <<endl<<endl;
    imprimirCuadratica(2.0, 0.0, 2.0);
    cout <<endl<<endl;
    imprimirCuadratica(17.5, 3.47, 8);






  return 0;
}

bool ecuacionCuadratica(double a, double b, double c, double *x1Ptr, double *x2Ptr){

    bool es_valida = false;
    double discriminante = b*b -4.0*a*c ;


    if(discriminante >= 0){
        discriminante = sqrt(discriminante);
          *x1Ptr = (-b +discriminante)/(2.0*a);
          *x2Ptr = (-b -discriminante)/(2.0*a);

          es_valida = true;
    }


    return es_valida;
}



void imprimirCuadratica(double a, double b, double c){

    double x1 = 0.0, x2 = 0.0;

    if( ecuacionCuadratica(a, b, c , &x1, &x2) ){
          cout <<a << " x*x + " << b <<" x + "<< c <<endl;
          cout <<"Tiene soluciones reales"<<endl<<endl;
          cout <<"x1 = "<< x1<<endl;
          cout <<"x2 = "<< x2<<endl;
    }else{

        cout <<a << " x*x + " << b <<" x + "<< c <<endl;
        cout <<"No tiene soluciones reales"<<endl<<endl;
    }





}
