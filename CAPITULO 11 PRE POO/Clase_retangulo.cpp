#include <iostream>
using namespace std;

class  Rectangulo{

    public:
        Rectangulo(int _largo, int _ancho);

        void perimetro_rect();

        void area_rect();


    private:
        int largo;
        int ancho;
};

Rectangulo::Rectangulo(int _largo, int _ancho){

    largo = _largo;
    ancho = _ancho;
}//constructor

void Rectangulo::perimetro_rect(){

    int perimetro = 2*largo + 2*ancho;
    cout <<"Perimetro: "<< perimetro << endl << endl;
}//FIN DEL METODO perimetro_rect


void Rectangulo::area_rect(){
    int area = largo*ancho;
    cout <<char(181)<<"rea: "<< area << endl << endl;

}//FIN DEL METRODO area_rect




int main() {

Rectangulo figura_1(2,10);
Rectangulo figura_2(8,3);



cout <<"Figura 1"<<endl;
figura_1.perimetro_rect();
figura_1.area_rect();


cout <<"Figura 2"<<endl;
figura_2.perimetro_rect();
figura_2.area_rect();



  return 0;
}
