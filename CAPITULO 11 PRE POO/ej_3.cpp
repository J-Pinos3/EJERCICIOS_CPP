#include <iostream>
using namespace std;

class hora{

public:
    //constructor que inicializa a 0
    hora(){
      horas = 0;
      minutos = 0;
      segundos = 0;
    }

    //constructor con valores fijos
    hora(int a, int b, int c){
      horas = a;
      minutos = b;
      segundos = c;
    }

    //función visualizar
     void visualizar_hora(){
       cout << horas <<" : "<<minutos<<" : "<<segundos<<endl;
     }

     //funcion sumar
     hora sumar(hora objeto1, hora objeto2){
        hora resultado;

        resultado.horas = objeto1.horas + objeto2.horas;
        resultado.minutos = objeto1.minutos + objeto2.minutos;
        resultado.segundos = objeto1.segundos + objeto2.segundos;

        return resultado;
     }

     //asignar vhora
     void asignar_hora(int hor, int min, int seg){
        horas = hor;
        minutos = min;
        segundos = seg;
     }


private:
     int horas, minutos, segundos;

};



int main(){
  hora obj1;//se inicializa a 0;
  obj1.asignar_hora(10,40,7);
  hora obj2(2,36,54);
  hora obj3;
  obj3=obj3.sumar(obj1, obj2);

  cout <<"Hora 1: ";
  obj1.visualizar_hora();

  cout <<endl;

  cout <<"Hora 2: ";
  obj2.visualizar_hora();

  cout <<endl;

  cout <<"Hora resultado: ";
  obj3.visualizar_hora();

  return 0;
}
