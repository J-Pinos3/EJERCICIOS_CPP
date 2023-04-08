#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

enum TipoSolicitud {SALDO_CERO = 1, SALDO_CREDITO, SALDO_DEBITO, TERMINAR};
int obneterSolicitud();
bool debeMostrar(int tipo , double saldo);
void imprimirLinea(int cuenta, const string& nombre, double saldo);

int main() {
  //solo se abre el archivo en modo lectura
  ifstream archivo_Clientes_Salida("Clientes2.txt", ios::in);

  if( !archivo_Clientes_Salida ){
      cerr <<"No se pudo abrir el archivo"<<endl;
      exit(EXIT_FAILURE);
  }

  int cuenta;
  string nombre;
  double saldo;

  // obtiene la solicitud del usuario---> saldo cero, saldo de crédito, saldo de débito
  int solicitud = obneterSolicitud();

  if(solicitud == TERMINAR){
    cout <<"Desarrollado por SUPER COMPUMUNDO HIPERMEGA RED"<<endl;
  }

  while(solicitud != TERMINAR){
        switch(solicitud){

            case SALDO_CERO:{
              cout <<"|Cuentas con saldos en cero|"<<endl;
            }
            break;


            case SALDO_CREDITO:{
              cout <<"|Cuentas con saldos de credito|"<<endl;
            }
            break;


            case SALDO_DEBITO:{
              cout <<"|Cuentas con saldos de debito|"<<endl;
            }
            break;
        }//fin del switch

        archivo_Clientes_Salida >> cuenta >> nombre >> saldo;
        while( !archivo_Clientes_Salida.eof() ){

            if( debeMostrar(solicitud, saldo) ){
              imprimirLinea(cuenta, nombre, saldo);
            }

          archivo_Clientes_Salida >> cuenta >> nombre >> saldo;
        }//fin del while interior

        system("pause");
        system("cls");
    archivo_Clientes_Salida.clear();//reestablece EOF para la siguiente entrada
    archivo_Clientes_Salida.seekg(0, ios::beg);//se reposiciona al inicio del archivo beg es predeterminadao, por si las moscas le pongo
    solicitud = obneterSolicitud();

    if(solicitud == TERMINAR){
      cout <<"Desarrollado por SUPER COMPUMUNDO HIPERMEGA RED"<<endl;
    }

  }//FIN DEL WHILE EXTERIOR

  archivo_Clientes_Salida.close();


  return 0;
}


int obneterSolicitud(){

  int solicitud = SALDO_CERO;

    cout <<"Escriba la opcion"<<endl
         <<"1) -> Listar cuentas con saldos en cero"<<endl
         <<"2) -> Listar cuentas con saldos de credito"<<endl
         <<"3) -> Listar cuentas con saldos de debito"<<endl
         <<"4) -> SALIR"<<endl<<fixed<<showpoint;


    do{
      cout <<endl<<"?";
      cin >> solicitud;
    }while(solicitud < SALDO_CERO || solicitud > TERMINAR);

  return solicitud;
}//FIN DE LA FUNCION obneterSolicitud


bool debeMostrar(int tipo , double saldo){
 bool valor = false;

    if(tipo == SALDO_CERO && saldo == 0){
        valor = true;
    }

    if(tipo == SALDO_CREDITO && saldo < 0){
        valor = true;
    }

    if(tipo == SALDO_DEBITO && saldo > 0){
        valor = true;
    }

return valor;
}//fin de la funcion debeMostrar


void imprimirLinea(int cuenta, const string& nombre, double saldo){

cout <<left<<setw(10)<<cuenta<<setw(13)<<nombre<<setw(7)<<setprecision(2)<<right<<saldo<<endl;


}// imprimirLinea
