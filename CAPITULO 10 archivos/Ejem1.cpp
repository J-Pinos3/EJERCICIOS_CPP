//EJEMPLO DEL LIBRO DE DEITEL
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {


  ofstream archivo_Clientes_Salida("clientes.txt",ios::out);
// archivo_Clientes_Salida.open("clientes.txt",ios::out)


  if( !archivo_Clientes_Salida ){
      cerr<<"No se pudo abrir el archivo"<<endl;
      exit(EXIT_FAILURE);
  }

  cout <<"Escriba el numero de cuenta, nombre y saldo"<<endl;
  cout <<"Escriba el caracter EOF para terminar de ingresar datos"<<endl;

int cuenta;
string nombre;
double saldo;


  while(cin >> cuenta >> nombre >> saldo){
    archivo_Clientes_Salida << cuenta <<"  "<<nombre<<"  "<< saldo<<endl;
    cout <<"->";
  }




archivo_Clientes_Salida.close();




  //LECTURA DEL ARCHIVO clientes.txt
  int cuenta_lec;
  string nombre_lec;
  double saldo_lec;

  ifstream archivo_Clientes_Entrada("clientes.txt", ios::in);

  if( !archivo_Clientes_Entrada ){
      cerr<<"No se pudo abrir el archivo"<<endl;
      exit(EXIT_FAILURE);

  }else{

    cout<<left<<setw(10)<<"Cuenta"<<setw(13)<<"Nombre"<<setw(7)<<"Saldo"<<endl<<fixed<<showpoint;

    while(archivo_Clientes_Entrada >> cuenta_lec >> nombre_lec >> saldo_lec){
        cout <<left<<setw(10)<<cuenta_lec<<setw(13)<<nombre_lec<<setw(7)<<setprecision(2)<<right<<saldo_lec<<endl;
    }


  }


archivo_Clientes_Entrada.close();










  return 0;
}
