#include <iostream>
#include <String>
using namespace std;

struct Persona{
      string nombre;
      int edad;
      double peso, altura;

      Persona();

      Persona(string nom, int eda, double pes, double altur){
          nombre = nom;   edad = eda;   peso = pes;   altur= altur;
      }
};

Persona::Persona(){
  nombre  = " ";
  edad = 0;
  peso = 0;
  altura = 0;
}

int main(int argc, char const *argv[]) {


    Persona yo = {"Jose Pinos", 21, 69.70, 1.70};
    cout << yo.nombre << " \t " << yo.edad << " \t " << yo.peso << " \t " << yo.altura<<endl;

    Persona yo_2;
    cout << yo_2.nombre << " \t " << yo_2.edad << " \t " << yo_2.peso << " \t " << yo_2.altura<<endl;
    Persona *Ptr_yo = &yo_2;
    Ptr_yo->nombre= "Juan Alberto";
    Ptr_yo->edad = 28;
    Ptr_yo->peso = 87.49;
    Ptr_yo->altura = 1.8502;
    cout << yo_2.nombre << " \t " << yo_2.edad << " \t " << yo_2.peso << " \t " << yo_2.altura<<endl;

  return 0;
}
