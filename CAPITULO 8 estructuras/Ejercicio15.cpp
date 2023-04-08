#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

struct NUM_COMPLEJO{
  float x_real;
  float y_imaginaria;

};

int MenuComplejos();


int main() {
NUM_COMPLEJO numero_complex, numero_complex2;
float parte_real, parte_imaginaria;
int eleccion = 1;

  while( (eleccion <= 4)&&( eleccion >= 1) ){

    eleccion = MenuComplejos();

      switch(eleccion){

          case 1:{

              cout <<"SUMA DE N"<<char(233)<<"MEROS COMPLEJOS"<<endl;

              cout <<"\n|Ingrese el primer numero complejo|"<<endl;
              cout <<"Ingrese la parte real del numero complejo: "<<endl;
              cin >> numero_complex.x_real;

              cout <<"Ingrese la parte imaginaria del numero complejo: "<<endl;
              cin >> numero_complex.y_imaginaria;
              cout <<endl<<endl<<"<------------------------------------------------>"<<endl<<endl;

              cout <<"|Ingrese el segundo numero complejo|"<<endl;
              cout <<"Ingrese la parte real del numero complejo: "<<endl;
              cin >> numero_complex2.x_real;

              cout <<"Ingrese la parte imaginaria del numero complejo: "<<endl;
              cin >> numero_complex2.y_imaginaria;
              cout <<endl<<endl;

              parte_real = numero_complex.x_real + numero_complex2.x_real;
              parte_imaginaria = numero_complex.y_imaginaria + numero_complex2.y_imaginaria;

              cout <<"la suma es: ";
              if(parte_imaginaria >= 0){
                cout << parte_real <<" + "<<parte_imaginaria<<"i"<<endl;
              }else if(parte_imaginaria < 0){
                cout << parte_real <<" "<<parte_imaginaria<<"i"<<endl;
              }


          }
          break;


          case 2:{

              cout <<"RESTA DE N"<<char(233)<<"MEROS COMPLEJOS"<<endl;

              cout <<"\n|Ingrese el primer numero complejo|"<<endl;
              cout <<"Ingrese la parte real del numero complejo: "<<endl;
              cin >> numero_complex.x_real;

              cout <<"Ingrese la parte imaginaria del numero complejo: "<<endl;
              cin >> numero_complex.y_imaginaria;
              cout <<endl<<endl<<"<------------------------------------------------>"<<endl<<endl;

              cout <<"|Ingrese el segundo numero complejo|"<<endl;
              cout <<"Ingrese la parte real del numero complejo: "<<endl;
              cin >> numero_complex2.x_real;

              cout <<"Ingrese la parte imaginaria del numero complejo: "<<endl;
              cin >> numero_complex2.y_imaginaria;
              cout <<endl<<endl;

              parte_real = numero_complex.x_real - numero_complex2.x_real;
              parte_imaginaria = numero_complex.y_imaginaria - numero_complex2.y_imaginaria;

              cout <<"la diferencia es: ";
              if(parte_imaginaria >= 0){
                cout << parte_real <<" + "<<parte_imaginaria<<"i"<<endl;
              }else if(parte_imaginaria < 0){
                cout << parte_real <<"  "<<parte_imaginaria<<"i"<<endl;
              }
          }
          break;


          case 3:{

              cout <<"PRODUCTO DE N"<<char(233)<<"MEROS COMPLEJOS"<<endl;

              cout <<"\n|Ingrese el primer numero complejo|"<<endl;
              cout <<"Ingrese la parte real del numero complejo: "<<endl;
              cin >> numero_complex.x_real;

              cout <<"Ingrese la parte imaginaria del numero complejo: "<<endl;
              cin >> numero_complex.y_imaginaria;
              cout <<endl<<endl<<"<------------------------------------------------>"<<endl<<endl;

              cout <<"|Ingrese el segundo numero complejo|"<<endl;
              cout <<"Ingrese la parte real del numero complejo: "<<endl;
              cin >> numero_complex2.x_real;

              cout <<"Ingrese la parte imaginaria del numero complejo: "<<endl;
              cin >> numero_complex2.y_imaginaria;
              cout <<endl<<endl;

              parte_real = (numero_complex.x_real*numero_complex2.x_real)-(numero_complex.y_imaginaria * numero_complex2.y_imaginaria);
              parte_imaginaria = (numero_complex.x_real*numero_complex2.y_imaginaria)+(numero_complex.y_imaginaria*numero_complex2.x_real);

              cout <<"el producto es: ";
              if(parte_imaginaria >= 0){
                cout << parte_real <<" + "<<parte_imaginaria<<"i"<<endl;
              }else if(parte_imaginaria < 0){
                cout << parte_real <<"  "<<parte_imaginaria<<"i"<<endl;
              }
          }
          break;


          case 4:{
            cout <<"| PROGRAMA ELABORADO POR SUPERCOMPUMUNDO-HIPERMEGARED"<<endl;
            eleccion = 0;
          }
          break;

          default:{
            cout <<"ALGO HA SALIDO MUY MAL :("<<endl;
            cout <<"\nIntentelo de nuevo"<<endl;
            eleccion = 1;
          }
          break;


      }//fin del switch

      system("pause");
      system("cls");




  }//fin del while principal



  return 0;
}


int MenuComplejos(){
  short int opcion;
  do{
    cout <<"OPERACIONES CON N"<<char(233)<<"MEROS COMPLEJOS"<<endl<<endl; //alt + 233 = Ú
    cout <<"1) Suma"<<endl;
    cout <<"2) Resta"<<endl;
    cout <<"3) Multiplicaci"<<char(162)<<"n"<<endl;// alt + 162 = ó
    //cout <<"4) Divisi"<<char(162)<<"n"<<endl;
    cout <<"4) Salir"<<endl;
    cin >> opcion;
                              //5
    if( (opcion < 0)||(opcion > 4)  ){
      cout <<"\n\nOpci"<<char(162)<<"n incorrecta int"<<char(130)<<"ntelo de nuevo"<<endl;//ó = 162   é = 130
    }
    system("pause");
    system("cls");
  }while( (opcion < 0)||(opcion > 4) );

    return opcion;
}//fin dela funcion MenuComplejos
