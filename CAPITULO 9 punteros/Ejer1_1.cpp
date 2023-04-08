#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void saludo(string *saludo);

int main(int argc, char const *argv[]) {



string nombre = "Jose";
cout <<nombre<<endl;
saludo(&nombre);
cout <<nombre<<endl;

system("pause");
system("cls");

char cadena[50];
char *Ptr_cadena = cadena;
int tama = 20;

cin.getline(cadena, tama, '\n');

for(int i = 0; i < tama; i++){
    cout <<"["<< *(Ptr_cadena+i) <<"] ";

}

cout <<endl<<endl;

  return 0;
}

void saludo(string *saludo){

    *saludo = *saludo + " como estas";
}
