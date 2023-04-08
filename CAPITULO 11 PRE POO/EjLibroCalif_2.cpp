#include <iostream>
using namespace std;

class LibroCalificaciones{

public:
    void establecerNombreCurso(string nombre){
        nombreCurso = nombre;
    }

    string obtenerNombre()const{
        return nombreCurso;
    }

    void mostrarMensaje() const{
        cout <<"Bienvenido al libro de calificaciones para: "<<obtenerNombre()<<endl;

        //cout <<"Bienvenido al libro de calificaciones para: "<<obtenerNombreCurso()<<endl;
        //cout <<"Bienvenido al libro de calificaciones para------: "<<nombreCurso<<endl;
    }


private:
  string nombreCurso;


};//fin de la clase LibroCalificaciones

int main() {

string nombredelCurso;
LibroCalificaciones MiLibrito, bookL;

cout <<"Ingrese el nombre del curso"<<endl<<">";
getline(cin,nombredelCurso);

MiLibrito.establecerNombreCurso(nombredelCurso);
cout <<endl<<endl;
MiLibrito.mostrarMensaje();//programacion o lo ingresado

nombredelCurso = "EUFRASIA";

bookL.establecerNombreCurso(nombredelCurso);
cout <<endl<<endl;
bookL.mostrarMensaje();//eufrasia

  return 0;
}
