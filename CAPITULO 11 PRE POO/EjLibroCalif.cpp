#include <iostream>
using namespace std;

class LibroCalificaciones{

public://public dice que cualquier otra funcion puede acceder a la función de abajo
void mostrarMensaje() const{
  //la funcion es const xq no modifica y no debería modificar el objeto LibroCalificaciones sobre el que se llama
    cout <<"ESTOY APRENDIENDO POO, (PRACTICA LA GUITARRA)"<<endl;
}

};


int main() {
LibroCalificaciones mi_libro;
mi_libro.mostrarMensaje();


  return 0;
}
