#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

  char c;
  cout <<"comienza la entrada de cadena"<<endl;

  while( cin.get(c) ){//lee caracter a caracter
      cout << c;
  }

cin.clear();
cout <<endl<<endl<<endl;

  char cadena[20];
  cout <<"ingresa la cadena de texto, (max 20 caracteres)"<<endl;
  cin.get(cadena,20);// lee cadebas de caracteres
  cout <<endl<<endl<<cadena<<endl;

  return 0;
}
