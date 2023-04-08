#include <iostream>
using namespace std;

struct PERSONA{
    string nombre;
    int edad;
    double sueldo;
    char genero;
};

void Ingresa_datos(PERSONA *P1 );

int main(int argc, char const *argv[]) {

PERSONA persona, persona_2;
PERSONA *humano1 = &persona;

humano1->nombre = "Diego";
humano1->edad = 22;
humano1->sueldo = 968.30;
humano1->genero = 'M';//M o F

cout <<"Empleado 1"<<endl;
cout <<humano1->nombre<<endl;
cout <<humano1->edad<<endl;
cout <<humano1->sueldo<<endl;
cout <<humano1->genero<<endl;


Ingresa_datos(&persona_2);
cout <<"\nEmpleado 2"<<endl;
cout <<persona_2.nombre<<endl;
cout <<persona_2.edad<<endl;
cout <<persona_2.sueldo<<endl;
cout <<persona_2.genero<<endl;



  return 0;
}

void Ingresa_datos(PERSONA *P1){
    cout <<"Nom: ";
    getline(cin, (P1->nombre) );

    cout <<"Edad: ";
    cin >> (P1->edad);

    cout <<"Sueldo: ";
    cin >> (P1->sueldo);

    cout <<"Genero: ";
    cin >> (P1->genero);
}
