#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct ALUMNO{

    string nombre_alumno;
    int edad;
    string direccion;

}alumnos[5];

void ingresar_datos(ALUMNO *arr);
void mostrar_datos(const ALUMNO *arr);

int main(int argc, char const *argv[]) {


ingresar_datos(alumnos);

cout <<endl<<endl;

mostrar_datos(alumnos);

/*
https://www.youtube.com/watch?v=f6aK9QL-fdA&t=331s
https://www.youtube.com/watch?v=7gSmOKzME5I&t=237s
https://www.youtube.com/watch?v=_g84Uq0vyXQ
https://www.youtube.com/watch?v=hQsWWq295No
https://www.youtube.com/watch?v=V1PyGumATcs
https://www.youtube.com/watch?v=L54hI_OZjt4
https://www.youtube.com/watch?v=zDnjxK-1tZ0


*/
  return 0;
}

void ingresar_datos(ALUMNO *arr){

    for(int i = 0; i < 5; i++){
      cout <<"\tIngrese los datos de los alumnos"<<endl<<endl;
        cout <<"Ingrese el nombre del alumno: ";
        getline( cin, ((arr+i)->nombre_alumno) );

        cout <<endl;
        cout <<"Ingrese la edad del alumno: ";
        cin >> ((arr+i)->edad);

        cin.ignore();

        cout <<endl;
        cout <<"Ingrese la dirección del alumno: ";
        getline( cin, ((arr+i)->direccion) );

        cin.ignore();
        cout<<"\n\n<-------------------------->\n\n";
    }



}


void mostrar_datos(const ALUMNO *arr){

    cout <<"ALUMNOS INSCRITOS"<<endl<<endl;

    for(int i = 0; i < 5; i++){
        cout <<"Alumno "<<i+1<<endl;
        cout <<"Nombre: "<< ((arr+i)->nombre_alumno) <<endl;
        cout <<"Dirección: "<< ((arr+i)->direccion) <<endl;
        cout <<"edad: "<< ((arr+i)->edad) <<endl;
        cout <<endl;
    }


}
