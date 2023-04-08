#include <iostream>
#include <iomanip>
#include <array>
#include <string>
using namespace std;

const int MAX = 100;


class Conjunto{

private:
    int contador;
    array<int,MAX> arr;
    array<int,MAX> copia;

public:
    Conjunto(){
        contador = 0;
        for(int i = 0; i < MAX; i++){
            arr.at(i) = 0;
        }
    }


    void vaciar(){
      for(int i = 0; i < contador; i++){
          arr.at(i) = 0;
      }
      contador = 0;//se reinicia todo el conjunto
    }

    void agregar(){
        int elemento;
        bool existe = false;
        cout <<"Ingrese un numero para almacenarlo: ";
        cin >> elemento;

        for(int i = 0; i < contador && existe == false; i++){
            if(arr.at(i) == elemento){
                existe = true;
            }
        }

        if(!existe){

            arr.at(contador) = elemento;//se añade al final
            contador++;
        }



    }

    void eliminar(){
        int elemento, pos = 0;
        bool existe = false;
        cout <<"Ingrese el valor que desea eliminar: ";
        cin >> elemento;

        for(int i = 0; i < contador && existe == false; i++){
            if( arr.at(i) == elemento ){
                pos = i;
                existe = true;
            }else{
              pos = -1;
            }
        }



        if(pos == -1){

        }else{
          cout <<"pos: "<<pos<<endl;
          for(int i = pos; i < contador -1; i++){
              arr.at(i) = arr.at(i+1);
          }
          contador--;
        }




    }

    void copiar(){
        for(int i = 0; i < contador; i++ ){
            copia.at(i) = arr.at(i);
        }

        cout <<endl;
        cout <<"Arreglo original"<<endl;
        for(int i = 0; i < contador; i++){
            cout <<"["<<arr.at(i)<<"] ";
        }

        cout <<endl<<endl;
        cout <<"Arreglo copia"<<endl;
        for(int i = 0; i < contador; i++){
            cout <<"["<<copia.at(i)<<"] ";
        }
    }

    void mostrar(){
        for(int i = 0; i < contador; i++){
            cout <<"["<<arr.at(i)<<"] ";
        }
        cout <<endl;
    }

    bool miembro(){
        int valor;
        bool confirma = false;
        cout <<"Ingrese un valor para saber si esta en el arreglo: ";
        cin >> valor;

        for(int i = 0; i < contador && confirma == false; i++){
            if(arr.at(i) == valor){
                confirma = true;
            }
        }

        return confirma;
    }

    void ordenar(){
        int aux, p;
        for(int i = 0; i < contador; i++){
            aux = arr.at(i);
            p = i;

            while(p > 0){
               if(arr.at(p-1) > aux){
                  arr.at(p) = arr.at(p-1);
                  arr.at(p-1) = aux;
               }
               p--;
            }
        }
    }//fin de la funcoin


};///FIN DE LA CLASE Conjunto

int Menu();

int main() {

char continuar = 's';
Conjunto conjunto_A;
int opcion = 1;

while(opcion != 0){

    opcion = Menu();
    system("cls");
    switch(opcion){

          case 1:{
                cout <<"\t\tAGREGAR ELEMENTO"<<endl<<endl;
                conjunto_A.agregar();
          }
          break;
/*------------------------------------------------------------------*/
          case 2:{
                cout <<"\t\tELIMINAR ELEMENTO"<<endl<<endl;
                conjunto_A.mostrar();
                cout <<endl;
                conjunto_A.eliminar();
          }
          break;
/*------------------------------------------------------------------*/
          case 3:{
                cout <<"\t\tCOPIAR CONJUNTO"<<endl<<endl;
                conjunto_A.copiar();
          }
          break;
/*------------------------------------------------------------------*/
          case 4:{
                cout <<"\t\tVACIAR ELEMENTO"<<endl<<endl;
                conjunto_A.vaciar();
          }
          break;
/*------------------------------------------------------------------*/
          case 5:{
                cout <<"\t\tMOSTRAR ELEMENTOS"<<endl<<endl;
                conjunto_A.mostrar();
          }
          break;
/*------------------------------------------------------------------*/
          case 6:{
                cout <<"\t\tBUSCAR ELEMENTO"<<endl<<endl;
                conjunto_A.miembro();
          }
          break;
/*------------------------------------------------------------------*/
          case 7:{
                cout <<"\t\tORDENAR ELEMENTOS"<<endl<<endl;
                conjunto_A.ordenar();
                conjunto_A.mostrar();
          }
          break;
/*------------------------------------------------------------------*/
          case 0:{
                cout <<"\t\tDesarrollado por: super compumundo hipermega red"<<endl<<endl;
          }
          break;
/*------------------------------------------------------------------*/
          default:{
                cout <<"Algo ha salido muy mal :("<<endl;
          }
          break;

    }//fin del switch

      system("pause");
      system("cls");

}//fin del while principal



  return 0;
}

int Menu(){
    int opcion;
    //29+longitud string
    cout <<setw(60)<<"---------- CLASE CONJUNTO ----------"<<endl;//queda 24
    cout <<setw(48)<<"1) Agregar Elemento"<<endl;
    cout <<setw(49)<<"2) Eliminar Elemento"<<endl;
    cout <<setw(47)<<"3) Copiar Conjunto"<<endl;
    cout <<setw(47)<<"4) Vaciar Conjunto"<<endl;
    cout <<setw(48)<<"5) Mostrar Conjunto"<<endl;
    cout <<setw(53)<<"6) Buscar en el Conjunto"<<endl;
    cout <<setw(48)<<"7) Ordenar Conjunto"<<endl;
    cout <<setw(37)<<"0) SALIR"<<endl;
    cout <<setw(60)<<"------------------------------------"<<endl<<endl;//queda 24
    cout <<">";
    cin >> opcion;
    cout <<endl;

    while(opcion < 0 || opcion > 7){
      cout <<">";
      cin >> opcion;
      cout <<endl;

    }

    return opcion;
}//FIN DE LA FUNCION MENU
