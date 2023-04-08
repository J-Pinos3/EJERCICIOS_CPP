#include <iostream>
#include <fstream>
using namespace std;

int main(){

  ofstream archiv("test.bin",ios::binary|ios::out);
string nombre, nombre2;
int edad, edad2;

cout <<"\nIngrese su nombre: ";
cin >> nombre;

cout <<"Ingrese su edad: ";
cin >> edad;

cout <<"\nIngrese su nombre: ";
cin >> nombre2;

cout <<"Ingrese su edad: ";
cin >> edad2;

archiv.write( (char *)&nombre, sizeof(string) );
archiv.write( (char *)&edad, sizeof(int) );

archiv.write( (char *)&nombre2, sizeof(string) );
archiv.write( (char *)&edad2, sizeof(int) );


//archiv<<nombre<<" "<<edad<<endl;
//archiv<<nombre2<<" "<<edad2;

archiv.close();



  string texto;
ifstream archivobin("test.bin",ios::binary|ios::in);

/*
if( archivobin.fail() ){
    cout <<"No se puedo abrir el archivo"<<endl;
}else{

    while( !archivobin.eof() ){
        getline(archivobin, texto);
        cout <<texto<<endl;
    }



}
*/

string name, name2;
int aged, aged2;

archivobin.read( (char *)&name, sizeof(string) );
archivobin.read( (char *)&aged, sizeof(int) );

archivobin.read( (char *)&name2, sizeof(string) );
archivobin.read( (char *)&aged2, sizeof(int) );

cout <<"Nombre: "<<name<<endl;
cout <<"Edad: "<<aged<<endl;

cout <<"Nombre_2: " <<name2<<endl;
cout <<"Edad_2: "<<aged2<<endl;

archivobin.close();

    return 0;
}
