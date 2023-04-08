/*
SE CREARÁ LA CLASE CARRO LA CUA TENDRÁ UNA LLAVE Y UN NÚMERO DE SERIE
LOS CARROS PODRÁN ENCENDER, ACELERAR Y FRENAR
CREAR 3 INSTANCIAS
*/
#include <iostream>
#include <string>
using namespace std;

class CARRO{

  public:
      CARRO(int _llave, string _placa);

      void encender(int _llave);

      void acelerar();

      void frenar();

      string marca;
      string modelo;


  private:
    int llave;
    string placa;
    bool acceso;
    int velocidad;

};

CARRO::CARRO(int _llave, string _placa){
    llave = _llave;
    placa = _placa;
    acceso = false;
    velocidad = 0;

}//CONSTRUCTOR

void CARRO::encender(int _llave){
    if(_llave == llave){
      acceso = true;
      cout <<"Carro encendido"<<endl;
    }else{
      acceso = false;
      cout <<"Carro apagado"<<endl;
    }

}//FIN DEL MÉTODO ENCENDER

void CARRO::acelerar(){
    if(acceso){
      velocidad += 10;//debido al constructor la velocidad =0
      cout <<"Tu velocidad es: "<<velocidad<<endl;
    }else{
      cout <<"Acceso denegado"<<endl;
    }

}//FIN DEL MÉTODO ACELERAR

void CARRO::frenar(){

  if(acceso){
    velocidad -= 5;//debido al constructor la velocidad =0
    cout <<"Tu velocidad es: "<<velocidad<<endl;
  }else{
    cout <<"Acceso denegado"<<endl;
  }

}//FIN DEL MÉTODO FRENAR



int main() {

//CARRO carro_1 = CARRO(101,"AB32");
CARRO carro_1(101,"AB32");
carro_1.encender(101);

CARRO carro_2(102,"HG72");
carro_2.encender(102);

CARRO carro_3(103,"LO98");
carro_3.encender(103);


  return 0;
}
