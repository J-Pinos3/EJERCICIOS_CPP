#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


int main() {

ofstream fsalida("datos.dat", ios::out|ios::binary);
char palabras[110];
cin.getline(palabras, 100);

fsalida.write((char *)palabras,110);
//fsalida<<"\n Fin del archivo"<<endl;

fsalida.close();

string texto;
ifstream fentrada("datos.dat", ios::in|ios::binary);
fentrada.read((char *)palabras,110);
cout <<"INfo de datos.dat"<<endl<<endl<<palabras;
/*
while(!fentrada.eof()){
    getline(fentrada,texto);
    cout <<texto<<endl;
}
*/

fentrada.close();

  return 0;
}
