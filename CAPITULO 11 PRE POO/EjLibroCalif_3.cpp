#include <iostream>
using namespace std;

class LibroCalificaciones{

public://explicit es para hacer un constructor
    explicit LibroCalificaciones(string nombre, int gente): nombreCurso(nombre), alumnos(gente){

    }

    /*COMO LOS OBJETOS DEL TIPO LibroCalificaciones YA ESTÁN ININCIALIZADOS PR EL constructor, YA NO ES NECESARIO inicializar el dato miembro nombreCurso
    void establecerNombreCurso(string nombre){
      nombreCurso = nombre;
    }
    */


    string obtenerNombreCurso()const{
       return nombreCurso;
    }

    short int obtenerAlumnosCurso()const{
      return alumnos;
    }



    /*
    void mostrarMensaje() const{
      cout <<"Bienvenido al LIBRO DE CALIFICAIONES para"<<endl<<obtenerNombreCurso()<<endl;
    }
    */


private:
    string nombreCurso;
    short int alumnos;

};//fin de la clase LibroCalificaciones




int main() {

LibroCalificaciones librito_1("CS101 PROGRAMACION",35);
LibroCalificaciones librito_2("CS103 CALCULO",35);

cout <<"Creando librito_1 para el curso " <<librito_1.obtenerNombreCurso()<<" La cual tiene: "<<librito_1.obtenerAlumnosCurso()<<" alumnos"<<endl<<endl;
cout <<"Creando librito_2 para el curso " <<librito_2.obtenerNombreCurso()<<" La cual tiene: "<<librito_2.obtenerAlumnosCurso()<<" alumnos"<<endl;

  return 0;
}
