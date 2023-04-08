#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;


int main (){
string nombreCurso;
int calificacion;
int cuentaA = 0, cuentaB = 0, cuentaC = 0, cuentaD = 0, cuentaF = 0;




cout<<setw(20)<<"| Bienvenido |"<<endl<<endl;
cout <<"Ingrese el nombre del curso"<<endl;
getline(cin,nombreCurso);
cin.ignore();
system("cls");

if( nombreCurso.size() <=25 ){
  cout <<setw(5)<<"| "<<nombreCurso<<setw(1)<<" |"<<endl;
}else {
nombreCurso.substr(0,25);
cout <<"El nombre: "<<nombreCurso<<" se limitó a 25 caracteres"<<endl;

}
cout <<"Escriba las calificaciones en letra "
<< "Escriba \"EOF\" (Ctrl z) para terminar"<<endl;
//UN caracter se almazena en un int (calificacion) porque
//short int, int, long y long long porque son mas grandes que el tipo char
while( (calificacion = cin.get() ) != EOF ){

    switch (calificacion) {
      case 'A':
      case 'a':
        cuentaA += 1; // CUENTA INCREMENTA EN 1
        break;

      case 'B':
      case 'b':
        cuentaB += 1; // CUENTA INCREMENTA EN 1
        break;

      case 'C':
      case 'c':
        cuentaC += 1; // CUENTA INCREMENTA EN 1
        break;

      case 'D':
      case 'd':
        cuentaD += 1; // CUENTA INCREMENTA EN 1
        break;

      case 'F':
      case 'f':
        cuentaF += 1; // CUENTA INCREMENTA EN 1
        break;

      case '\n':
      case '\t':
      case ' ':
        break;
        // ptobar si funciona un cin.ignore() , cin.get() o cin.sync();

      default:
        cout <<"Se introdujo una calificacion errónea"<<
        "inténtelo de nuevo"<<endl;
        break;
    }// FIN DEL SWITCH


} // FIN DEL  WHILE


cout <<"El número de estudiantes que recibieron cada calificación "<<endl;

cout <<"A: "<<right<<cuentaA<<endl;
cout <<"B: "<<right<<cuentaB<<endl;
cout <<"C: "<<right<<cuentaC<<endl;
cout <<"D: "<<right<<cuentaD<<endl;
cout <<"F: "<<right<<cuentaF<<endl;
    return 0;
}
