#include <iostream>
#include <fstream>
using namespace std;

int main() {


ofstream archivo_esc;
archivo_esc.open("VERSION.txt",ios::out);

string palabra, palabra1;
cout <<"Usuario, ingresa algo de texto"<<endl;
getline(cin,palabra);

//archivo_esc<<"Hola Elio como vas"<<endl<<endl; si incluyo esta línea, sale error
archivo_esc.write( (char *) &palabra, sizeof(palabra));

archivo_esc.close();

cout<<endl<<endl<<endl;




ifstream archivo_lec;
archivo_lec.open("VERSION.txt",ios::in);
if(archivo_lec.is_open() ){
   archivo_lec.read( (char *) &palabra1, sizeof(palabra1));
   cout <<"El texto ingresado fue: "<<palabra1<<endl;
}else{
  cout <<"Algo ha salido muy mal"<<endl;
}

archivo_lec.close();

  return 0;
}
