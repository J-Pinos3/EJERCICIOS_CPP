/*
CLASE PILA
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
using namespace std;
const int MAX = 50;

class PILA{

private:
    int cima;
    array <float,MAX> arr;

public:

    //array <float,MAX> arr;

    PILA(){
      cima = 0;
    }

    float sacar();
    void poner(float x);
    void mostrar(const int contador);

    ~PILA(){
    }

};//fin de la clase PILA

float PILA::sacar(){
    if(cima <= 0){
        cout <<"Error, pila vac"<<char(161)<<"a"<<endl;
    }else{
      return arr[--cima];
    }
}


void PILA::poner(float x){
    //cima >= MAX ? cout <<"Error, pila llena" : arr[cima++] = x;
    if(cima >= MAX ){
        cout <<"Error, pila llena"<<endl;
    }else{
        arr[cima++] = x;
    }
}


void PILA::mostrar(int contador){

    for(int i = 0; i < contador; i++){
        cout <<"["<<arr.at(i)<<"] ";
    }


}


int Menu();



int main() {
    system("color");
    int opcion = 1;
    int contador = 0;
    PILA p;

    while(opcion != 0){

        opcion = Menu();
        system("cls");

        switch(opcion){
            case 1:{
                cout <<"\tAGREGAR ELEMENTOS A LA PILA"<<endl<<endl;
                float valor;
                cout <<"Ingrese el valor a agregar: ";
                cin >> valor;

                p.poner(valor);
                contador++;
            }
            break;


            case 2:{
                cout <<"\tELIMINAR ELEMENTOS DE LA PILA"<<endl<<endl;

                p.sacar();
                contador--;
            }
            break;


            case 3:{
                cout <<"\tELEMENTOS DE LA PILA"<<endl<<endl;

                p.mostrar( contador);
                cout <<endl;
            }
            break;


            case 0:{
                cout <<"Desarrollado por: super compumundo hipermega red"<<endl<<endl;
            }
            break;


            default:{
                cout <<"ALGO HA SALIDO MUY MAL"<<endl;
            }
            break;

        }//fin del switch principal

        system("pause");
        system("cls");
    }//fin del while principal

  return 0;
}


int Menu(){
  int opcion;
      //cálculo = 20 + 5 + "longitud string"
      cout <<setw(70)<<"--------------------CLASE PILA--------------------"<<endl;
      cout <<setw(45)<<"1) Agregar a la Pila"<<endl;
      cout <<setw(47)<<"2) Eliminar de la Pila"<<endl;
      cout <<setw(56)<<"3) Mostrar elementos de la pila"<<endl;
      cout <<setw(33)<<"0) Salir"<<endl;
      cout <<setw(70)<<"--------------------------------------------------"<<endl<<endl;

      cout <<">";
      cin >> opcion;
      cout <<endl;

      while(opcion < 0 || opcion > 3){
        cout <<"\n>";
        cin >> opcion;
        cout <<endl;
      }

  return opcion;
}//fin de la función Menu
