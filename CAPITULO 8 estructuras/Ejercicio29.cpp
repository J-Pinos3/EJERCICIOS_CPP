#include <iostream>
#include <string>
using namespace std;

struct Alumno{
    string nombre;
    int edad;

    Alumno(string nombre, int edad){
        this->nombre=nombre;
        this->edad=edad;
    }

};


int main(int argc, char const *argv[]) {

  Alumno *Ptr = new Alumno("IlloJuan", 29);
  Alumno alum = *Ptr;
  cout << alum.nombre<<" \t " << alum.edad<<endl;
  cout << Ptr-> nombre << " \t " << Ptr->edad <<endl;
  *Ptr = alum;
  cout << Ptr-> nombre << " \t " << Ptr->edad <<endl;
  delete Ptr;

  int *ptr_int = new int(124);
  cout << "\n\n\n*ptr_int = " << *ptr_int<<endl;
  cout << "ptr_int = " << ptr_int<<endl;
  *ptr_int = 3;
  cout << "*ptr_int = " << *ptr_int<<endl;
  cout << "ptr_int = " << ptr_int<<endl;

  delete ptr_int;
  return 0;
}
