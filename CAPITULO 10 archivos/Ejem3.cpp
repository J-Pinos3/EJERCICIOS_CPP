#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
using namespace std;
//EN REPLIT TENGO UNA VERSION CON UN PAR DE CAMBIOS
//FUNCIONES
int menu();
void agregar(ofstream &esc);
bool verifica(string ced);
void verRegistros(ifstream &lec);
void buscarPersona(ifstream &lec);
void modificar(ifstream &lec);
void eliminar(ifstream &lec);

int main() {

  //ofstream Escritura("PruebaFile.txt", ios::out | ios::app);//*******
  ofstream Escritura;
  ifstream Lectura;

  int opcion = 1;

  while(opcion != 6){
      opcion = menu();

      switch(opcion){

          case 1:{
              cout <<"  \n|AGREGAR PERSONA|"<<endl<<endl;
              agregar(Escritura);
          }
          break;


          case 2:{
              cout <<"  \n|LISTAR PERSONAS|"<<endl<<endl;
              verRegistros(Lectura);
          }
          break;


          case 3:{
              cout <<"  \n|BUSCAR PERSONA|"<<endl<<endl;
              buscarPersona(Lectura);
          }
          break;


          case 4:{
              cout <<"  \n|MODIFICAR PERSONA|"<<endl<<endl;
              modificar(Lectura);
          }
          break;


          case 5:{
                cout <<"  \n|ELIMINAR PERSONA|"<<endl<<endl;
                eliminar(Lectura);
          }
          break;


          case 6:{
              cout <<"DESARROLLADO POR SUPER-COMPUMUNDO-HIPERMEGARED"<<endl;
          }
          break;

          default :{
            cout <<"Error Intentelo de nuevo"<<endl;
          }
          break;
      }//fin del switch
      system("pause");
      system("cls");
  }//fin del while EXTERIOR



  //Escritura.close();//*******
  return 0;
}


int menu(){

  int x;
  cout <<"<--------------BIENVENIDO Ejercicio basico con archivos-------------->"<<endl<<endl;
  cout <<"1 -> Agregar Persona"<<endl;
  cout <<"2 -> Ver Personas"<<endl;
  cout <<"3 -> Buscar Persona"<<endl;
  cout <<"4 -> Modificar Persona"<<endl;
  cout <<"5 -> Eliminar Persona"<<endl;
  cout <<"6 -> Salir"<<endl;
  cout <<"Opcion: ";
  cin >> x;

  return x;
}//FIN DE LA FUNCION MENU


bool verifica(string ced){
  ifstream leer("PruebaFile.txt", ios::in);
  string nombre, cedula, apellido;
  leer >> nombre;

  while( !leer.eof() ){
    leer >> apellido;
    leer >> cedula;
      if(cedula == ced){//si la cedula del archivo y la del parámetro son iguales, ese contacto ya existía
          leer.close();
          return false;
      }
    leer >> nombre;
  }

  leer.close();

return true;
}//fin de la funcion verifica



void agregar(ofstream &esc){
  esc.open("PruebaFile.txt", ios::out|ios::app);
string nombre, cedula, apellido;
  cout <<"Ingrese el nombre: ";
  cin >> nombre;

  cout <<"\nIngrese el apellido: ";
  cin >> apellido;

  cout <<"\nIngrese la cedula: ";
  cin >> cedula;
  if( verifica(cedula) ){//se confirma que no se repitan las cedulas
    esc << nombre << " "<< apellido <<" "<< cedula<<endl;
  }

  esc.close();
}//fin de la función agregar



void verRegistros(ifstream &lec){
  string nombre, apellido, cedula;

  lec.open("PruebaFile.txt", ios::in);

  lec >> nombre;
  while( !lec.eof() ){
    lec >> apellido;
    lec >> cedula;

    cout <<"|Nombre: "<< nombre <<" |"<<endl;
    cout <<"|Apellido: "<< apellido <<" |"<<endl;
    cout <<"|Cedula: "<< cedula <<" |"<<endl<<endl;

    lec >> nombre;
  }

 lec.close();
}//fin de la funcion verRegistros



void buscarPersona(ifstream &lec){

lec.open("PruebaFile.txt", ios::in);

string nombre, apellido, cedula, cedAux;
bool encontrado = false;
cout <<"Ingrese la cedula del usuario a buscar"<<endl;
cin >> cedAux;

lec >> nombre;
while(!lec.eof() && !encontrado){
  lec >> apellido;
  lec >> cedula;

  if(cedula == cedAux){
    //si son iguales, se encontró el usuario
    cout <<"\nUSUARIO ENCONTRADO"<<endl;
    cout <<"|Nombre: "<< nombre <<" |"<<endl;
    cout <<"|Apellido: "<< apellido <<" |"<<endl;
    cout <<"|Cedula: "<< cedula <<" |"<<endl<<endl;
    encontrado = true;
  }

  lec >> nombre;
}


if(encontrado == false){
  cout <<"\nUSUARIO NO ENCONTRADO"<<endl;
}


lec.close();

}//fin de la funcion buscarPersona



void modificar(ifstream &lec){

string nombre, apellido, cedula, cedAux, nomAux;//se puede hacer un menú con lo que el usuario quiera modificar

lec.open("PruebaFile.txt", ios::in);
ofstream aux("modifi.txt", ios::out); //archivo para sobreescribir los Registros

  cout <<"Ingrese la cédula del usuario a modificar: ";
  cin >> cedAux;
  lec >> nombre;

  while( !lec.eof() ){
      lec >> apellido;
      lec >> cedula;

      if(cedula == cedAux){
          cout <<"Ingrese el nuevo nombre"<<endl;
          cin >> nomAux;
          aux << nomAux<<" "<<apellido<<" "<<cedula<<endl;
      }else{
          aux << nombre<<" "<<apellido<<" "<<cedula<<endl;
      }

      lec >> nombre;
  }

  lec.close();
  aux.close();




  if(remove("PruebaFile.txt")!= 0){
    cout <<"Error eliminando archivo"<<endl;
  }else{
    cout <<"Archivo eliminado correctamente"<<endl;
  }

int resultado = rename("modifi.txt", "PruebaFile.txt");
  if(resultado == 0){
    cout <<"Archivo renombrado exitosamente"<<endl;
  }else{
    cout <<"Error al renombrar el archivo"<<endl;
  }

}//fin de la funcion modificar



void eliminar(ifstream &lec){

  string nombre, apellido, cedula, cedAux, nomAux;//se puede hacer un menú con lo que el usuario quiera modificar

  lec.open("PruebaFile.txt", ios::in);
  ofstream aux("modifi.txt", ios::out); //archivo para sobreescribir los Registros

    cout <<"Ingrese la cédula del usuario a eliminar: ";
    cin >> cedAux;
    lec >> nombre;

    while( !lec.eof() ){
        lec >> apellido;
        lec >> cedula;

        if(cedula == cedAux){
            cout <<"Usuario eliminado con éxito"<<endl;
            Sleep(1500);
        }else{
            aux << nombre<<" "<<apellido<<" "<<cedula<<endl;
        }

        lec >> nombre;
    }

    lec.close();
    aux.close();




    if(remove("PruebaFile.txt")!= 0){
      cout <<"Error eliminando archivo"<<endl;
    }else{
      cout <<"Archivo eliminado correctamente"<<endl;
    }

  int resultado = rename("modifi.txt", "PruebaFile.txt");
    if(resultado == 0){
      cout <<"Archivo renombrado exitosamente"<<endl;
    }else{
      cout <<"Error al renombrar el archivo"<<endl;
    }



}//fin de la funcion eliminar
