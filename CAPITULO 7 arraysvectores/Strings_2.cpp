#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {

string prompt_usuario("Por favor ingrese 2 lineas de texto!\n"),  linea(50,static_cast<char>(196) );
//string linea_1(80,(char)196 ); TAMBIÉN FUNCIONA SOLO CON EL NUMERO XQ SOLO INTERPRETA COMO CARACTER
cout << linea << endl << prompt_usuario << linea <<endl;

string texto, lineas;
while(true){

    getline(cin,lineas);
    if(lineas.size() == 0){
        break;
    }

    texto = lineas + "\n"+ texto;
}

cout <<endl<<linea<<endl;
cout <<"Las lineas de texto en orden inverso son: "<<endl;
cout <<linea<<endl;
cout <<texto<<endl<<endl;


  return 0;
}
