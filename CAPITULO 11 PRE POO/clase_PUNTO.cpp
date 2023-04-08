#include <cstdlib>
#include <iostream>
using namespace std;

class Punto{

public:
      float Obtener_X(){
        return x;
      }

      float Obtener_Y(){
        return y;
      }

      float Obtener_Z(){
        return z;
      }


      void PonerX (float valx){
        x = valx;
      }

      void PonerY(float valy){
        y = valy;
      }

      void PonerZ (float valz){
        z = valz;
      }


      explicit Punto(float valx): x(valx), y(0.0), z(0.0) { } //constructor


      Punto();  //constructor por defecto
      Punto(float a, float b, float c);   //constructor alternativo
      Punto( const Punto &p); //constructor de copia
      void EscribirPunto(); //selector getter no se puede usar en la declaracion
      void AsignarPunto(float p1, float p2, float p3); //modificador


private:
        float x, y, z;

};

Punto::Punto(){
  x = 1;
  y = -1;
  z = 0;
}


Punto::Punto(float a, float b, float c){
  x = a;
  y = b;
  z = c;
}


Punto::Punto(const Punto &p){
  x = p.x;
  y = p.y;
  z = p.z;
}


void Punto::EscribirPunto(){
cout << Obtener_X() << "     " << Obtener_Y() << "     " << Obtener_Z()<<endl;
}

void Punto::AsignarPunto(float p1, float p2, float p3){
  x = p1;
  y = p2;
  z = p3;
}


int main() {

Punto p, p1;
Punto p2 = Punto(5.0,6.0,7.0);
Punto p3(8.0);
Punto p4(1.1,2.2,3.3);
Punto p5;
Punto p6;
//Punto p7 = 56; //error
p6 = Punto();

p.AsignarPunto(11,89,32);
p1.PonerX(0);
p1.PonerZ(2);


cout <<"Para p, con constructor x defecto, luego AsignarPunto: ";
p.EscribirPunto();

cout <<"\nPara p1, con constructor x defecto, luego PonerX y PonerZ: ";
p1.EscribirPunto();

cout <<"\nPara p2, usando constructor alternativo: ";
p2.EscribirPunto();

cout <<"\nPara p3, usando constructor explicit, (recibe x): ";
p3.EscribirPunto();

cout <<"\nPara p4, usando constructor alternativo sin =: ";
p4.EscribirPunto();

cout <<"\nPara p5, usando constructor por defecto: ";
p5.EscribirPunto();

cout <<"\nPara p6, tambien usando constructor por defecto: ";
p6.EscribirPunto();

//cout <<"\nPara p7, usando constructor explicit: ";NO FUNCIONA P7
//p7.EscribirPunto();
cout <<endl;
  return 0;
}
