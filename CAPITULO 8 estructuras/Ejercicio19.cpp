#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

const int MAX = 100;
struct AGENDA{

    string nombre_contacto;
    string direccion_contacto;
    string telefono_fijo;
    string correo_elec;

}contactos[MAX];

int Menu_Agenda();
void Agregar_Contacto(AGENDA contactos[], int &contador);
void Buscar_Contacto(AGENDA contactos[], int contador);
void Borrar_Contacto(AGENDA contactos[], int contador);
void Listar_Contactos(AGENDA contactos[], int contador);


int main() {
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
int contador = 0;//para la funcion agregar contactos
short int eleccion;

do{
    eleccion = Menu_Agenda();
}while( (eleccion < 0)||(eleccion > 4) );
system("cls");


  while(eleccion != 0){
    cin.ignore();
    //system("cls");
      switch(eleccion){

        case 1:{
            cout <<"| AGREGAR CONTACTO |"<<endl<<endl;
            Agregar_Contacto(contactos, contador);
        }
        break;


        case 2:{
            cout <<"| BORRAR CONTACTO |"<<endl<<endl;
            Borrar_Contacto(contactos, contador);
        }
        break;


        case 3:{
            cout <<"| BUSCAR CONTACTO |"<<endl<<endl;
            Buscar_Contacto(contactos, contador);
        }
        break;


        case 4:{
            cout <<"| LISTA COMPLETA DE LOS CONTACTOS |"<<endl<<endl;
            Listar_Contactos(contactos, contador);
        }
        break;


        default:{
          cout <<"algo ha salido muy mal"<<endl;
          cout <<"Int"<<char(130)<<"ntelo de nuevo"<<endl;
        }
        break;


      }//fin del switch
      system("pause");
      system("cls");

      eleccion = Menu_Agenda();
system("cls");
      if(eleccion == 0){
        SetConsoleTextAttribute(h,12);
        cout <<"\nDesarrollado por SUPER-COMPUMUNDO HIPERMEGA RED :)"<<endl;
      }

  }//fin del while principal


  return 0;
}


int Menu_Agenda(){

  short int opcion;
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

  SetConsoleTextAttribute(h,2);
  cout <<"\t|AGENDA 2022|"<<endl;
  SetConsoleTextAttribute(h,7);
  cout <<"1) Agregar Contacto"<<endl;
  cout <<"2) Borrar Contacto"<<endl;
  cout <<"3) Buscar Contacto"<<endl;
  cout <<"4) Listar Todos Los Contactos"<<endl;
  cout <<"0) Salir"<<endl;
  cin >> opcion;

  return opcion;
}//fin de la funcion Menu_Agenda


void Agregar_Contacto(AGENDA contactos[], int &contador){
//contador es la variable que irá incrementado cada vez que ingrese un usuario
//contador = 0;
char continuar = 's';
    while( (continuar == 's')||(continuar == 'S') ){
        cout <<"Contacto: "<<contador+1<<endl<<endl;
        cout <<"-> Nombre: ";
        getline(cin, contactos[contador].nombre_contacto);

        cout <<endl;

        cout <<"-> Direcci"<<char(162)<<"n: ";
        getline(cin, contactos[contador].direccion_contacto);


        cout <<endl;

        cout <<"-> Tel"<<char(130)<<"fono fijo: ";
        getline(cin, contactos[contador].telefono_fijo);

        cout <<endl;

        cout <<"-> Correo Electr"<<char(162)<<"nico: ";
        getline(cin, contactos[contador].correo_elec);


        contador++;
        cout <<"\n\nDesea continuar?"<<endl;
        cout <<"(s) -> SI ------ (n) -> NO"<<endl;
        cin >> continuar;
        cin.ignore();
    }

}//fin de la función Agregar_Contacto


void Buscar_Contacto(AGENDA contactos[], int contador){

int flag = 0;
string telf_aux;
cout <<"Ingrese el n"<<char(163)<<"mero de tel"<<char(130)<<"fono del usuario que desea buscar"<<endl;
cin >> telf_aux;

  for(int i = 0; i < contador; i++){
      if( contactos[i].telefono_fijo == telf_aux  ){
          cout <<"Contacto Encontrado"<<endl;
          cout <<"|Nombre: "<<contactos[i].nombre_contacto<<" |"<<endl;
          cout <<"|Direcci"<<char(162)<<"n: "<<contactos[i].direccion_contacto<<" |"<<endl<<endl;
          flag = 1;
      }
      if(flag == 0){
        cout <<"Contacto No Encontrado"<<endl;
      }
  }


}//fin de la funcion Buscar_Contacto


void Borrar_Contacto(AGENDA contactos[], int contador){

int pos = -1;
string telefono;
cout <<"Ingrese el n"<<char(163)<<"mero de tel"<<char(130)<<"fono del usuario que desea eliminar"<<endl;
cin >> telefono;

  for(int i = 0; i < contador; i++){
      if(contactos[i].telefono_fijo == telefono){
        pos = i;//pos almacena las posicion donde está ell usuario que se quiere eliminar de tu Vida
      }
  }

//si es menor que cero quiere decir que el telefono no existe en el array de estructuras
  if(pos < 0){
    cout <<"El contacto no existe en la agenda"<<endl;
  }else{
    //Aquí el usuario existe y se lo eliminará
      for(int i = pos; i < contador; i++){
          contactos[i].nombre_contacto = contactos[i+1].nombre_contacto;
          contactos[i].direccion_contacto = contactos[i+1].direccion_contacto;
          contactos[i].telefono_fijo = contactos[i+1].telefono_fijo;
          contactos[i].correo_elec = contactos[i+1].correo_elec;

      }


  }


}//fin de la funcion Borrar_Contacto


void Listar_Contactos(AGENDA contactos[], int contador){
  cout <<"| AGENDA 2022 |"<<endl;

    for(int i = 0; i < contador; i++){
      cout <<"--> Nombre: "<<contactos[i].nombre_contacto<<endl;
      cout <<"--> Dirrecci"<<char(162)<<"n: "<<contactos[i].direccion_contacto<<endl;
      cout <<"-->Tel"<<char(130)<<"fono fijo"<<contactos[i].telefono_fijo<<endl;
      cout <<"--> Correo Electr"<<char(162)<<"nico: "<<contactos[i].correo_elec<<endl;
      cout <<"\n<----------------------------------------->"<<endl<<endl;
    }

}//fin de la funcion Listar_Contactos
