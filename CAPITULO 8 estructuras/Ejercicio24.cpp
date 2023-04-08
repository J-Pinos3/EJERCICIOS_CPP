#include <iostream>
#include <string>
using namespace std;

struct MATERIA{
    string asignatura;
    string profesor;
};

void mostrar_datos(const MATERIA *mat);

int main(int argc, char const *argv[]) {

    MATERIA mat1, *Ptr_m1 = &mat1;

    cout <<"Ingrese los datos de la materia ↓"<<endl;
    cout <<"Nombre de la materia: ";
    getline(cin, Ptr_m1->asignatura);
    cout <<"\nNombre del profesor: ";
    getline(cin, Ptr_m1->profesor);

    cout <<endl<<endl<<endl;
    //cout <<"Materia: "<<mat1.asignatura<<endl;
    //cout <<"Profesor: "<<mat1.profesor<<endl;
    mostrar_datos(&mat1);



  return 0;
}

//void mostrar_datos(MATERIA *mat){
void mostrar_datos(const MATERIA *mat){
  cout << mat-> asignatura<<endl;
  cout << mat-> profesor;

}
