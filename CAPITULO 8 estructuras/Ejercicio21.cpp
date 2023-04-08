#include <iostream>
#include <cstdlib>
using namespace std;

struct HUMANO{

  string nombre;
  int edad;
};


int main() {
HUMANO gente[10], solo;

for(int i = 0; i < 5; i++){
  cout <<"Ingrese el nombre: ";
  getline(cin, solo.nombre);

  cout <<"Ingrese la edad: ";
  cin >> solo.edad;
  cin.ignore();
  cout <<endl;
  gente[i] = solo;
}



cout <<"\n\n\nLos usuarios ingresados fueron:"<<endl;
for(int i = 0; i < 5; i++){
  cout <<"Nombre: "<<gente[i].nombre<<endl;
  cout <<"Edad: "<<gente[i].edad<<endl;
}




  return 0;
}
