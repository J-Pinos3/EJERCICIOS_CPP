#include <iostream>
using namespace std;

//links: https://www.youtube.com/watch?v=CSVRA4_xOkw


int *calificaciones;
void ingresar_Datos(int num_calif);
void mostrar_Datos(int num_calif);



int main(int argc, char const *argv[]) {

  int cantidad;
  cout <<"Ingrese el numero de calificaciones: ";
  cin >> cantidad;

  ingresar_Datos(cantidad);
  mostrar_Datos(cantidad);
  delete[] calificaciones;

  cout <<endl<<endl;

  cout <<"Ingrese el numero de calificaciones: ";
  cin >> cantidad;

  ingresar_Datos(cantidad);
  mostrar_Datos(cantidad);
  delete[] calificaciones;
  return 0;
}

void ingresar_Datos(int num_calif){

    calificaciones = new int[num_calif];
    for (int i = 0; i < num_calif; i++) {

        cout <<"Calificacion "<<i+1<<": ";
        cin >> *(calificaciones+i);
    }

}


void mostrar_Datos(int num_calif){

    for(int i = 0; i < num_calif; i++){
        cout <<"Calificacion "<<i+1<<": "<<calificaciones[i]<<"\t --> "<<calificaciones+i<<endl;
    }

}
