#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
/*
8.1. Escribir un programa que lea y escriba la información de 100 clientes de una determinada empresa.
Los clientes tienen unnombre, el número de unidades solicitadas, el precio de cada unidad
y el estado en que se encuentr a: moroso, atrasado,
pagado.
*/
const int MAX = 5;

enum EstadoPagos {moroso, atrasado, pagado};

struct CLIENTE{
  string nombre_cliente;
  short int unidades_solicitadas = 0;
  float precio_unidades;
  enum EstadoPagos estado_cliente;
}consumidores[MAX];

void ingresarDatos(CLIENTE consumidores[]);
void mostrarDatos(CLIENTE consumidores[]);
void mostrarFactura(CLIENTE consumidores[]);


int main() {

ingresarDatos(consumidores);

cout <<endl<<endl<<endl;
//system("color 7A");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_GREEN );
//mostrarDatos(consumidores);
mostrarFactura(consumidores);

  return 0;
}

void ingresarDatos(CLIENTE consumidores[]){
char opcion = ' ';
  cout <<"INGRESE LOS DATOS DE LOS CLIENTES"<<endl<<endl;

  for(int i = 0; i < MAX; i++){
    cout <<"\t|Cliente: "<<i+1<<" |"<<endl;

    cout <<"Nombre: ";
    getline(cin, consumidores[i].nombre_cliente);

    cout <<"\nUnidades Solicitadas: ";
    cin >> consumidores[i].unidades_solicitadas;

    cout <<"\nPrecio de las Unidades: ";
    cin >> consumidores[i].precio_unidades;

    cin.sync();
    cout <<"\nIngrese el estado del cliente"<<endl;
    cout <<"m -> moroso"<<endl;
    cout <<"a -> atrasado"<<endl;
    cout <<"p -> pagado"<<endl;
    cin >> opcion;

    if(opcion == 'm'){
      consumidores[i].estado_cliente = moroso;
    }
    if(opcion == 'a'){
      consumidores[i].estado_cliente = atrasado;
    }
    if(opcion == 'p'){
      consumidores[i].estado_cliente = pagado;
    }

    cin.sync();
    cout <<"\n\n--------------------------------------------"<<endl<<endl;
  }//FIN DEL FOR QUE RECORRE CADA CLIENTE




}//FIN DE LA FUNCION ingresarDatos


void mostrarDatos(CLIENTE consumidores[]){
  for(int i = 0; i < MAX; i++){
      cout <<"<---------------------------------------->"<<endl;
      cout <<"Nombre: "<<consumidores[i].nombre_cliente<<endl;
      cout <<"Unidades solicitadas: "<<consumidores[i].unidades_solicitadas<<endl;
      cout <<"Precio de las unidades: "<<consumidores[i].precio_unidades<<endl;

        switch(consumidores[i].estado_cliente){
            case moroso:{
              cout <<"El cliente est"<<char(160)<<" atrasado por mucho tiempo en sus pagos"<<endl;//alt +160 = á
            }
            break;

            case atrasado:{
              cout <<"El cliente est"<<char(160)<<" atrasado en sus pagos"<<endl;//alt +160 = á
            }
            break;

            case pagado:{
              cout <<"El cliente est"<<char(160)<<" al corriente en sus pagos"<<endl;//alt +160 = á
            }
            break;

            default:{
              cout <<"ALGO SALI"<<char(224)<<" MUY MAL  :("<<endl; //224  Ó
            }
            break;

        }//fin del switch


  }//fin del for


}//FIN DE LA FUNCION mostrarDatos


void mostrarFactura(CLIENTE consumidores[]){
  cout <<"\t|FACTURA|"<<endl<<endl;

  for(int i = 0; i < MAX; i++){

      if(consumidores[i].estado_cliente == moroso){
          cout <<"\t-morosos-"<<endl;
          cout <<"Nombre: "<<consumidores[i].nombre_cliente<<endl;
          cout <<"Total a pagar: "<<consumidores[i].unidades_solicitadas * consumidores[i].precio_unidades<<endl;

      }
      if(consumidores[i].estado_cliente == atrasado){
          cout <<"\t-atrasados-"<<endl;
          cout <<"Nombre: "<<consumidores[i].nombre_cliente<<endl;
          cout <<"Total a pagar: "<<consumidores[i].unidades_solicitadas * consumidores[i].precio_unidades<<endl;

      }
      if(consumidores[i].estado_cliente == pagado){
          cout <<"\t-pagados-"<<endl;
          cout <<"Nombre: "<<consumidores[i].nombre_cliente<<endl;
          cout <<"Total a pagar: "<<consumidores[i].unidades_solicitadas * consumidores[i].precio_unidades<<endl;

      }

      cout <<endl<<"--------------------------------------------"<<endl<<endl;
  }//fin del for


}//FIN DE LA FUNCION mostrarFactura
