#include <iostream>
#include <fstream>
using namespace std;


int main() {
  ofstream archivo_escritura;
  ifstream archivo_lectura;
  int edad;
  string nombre, texto;

  // ESCRITURA
  //SI YO INGRESO EL NOMBRE DEL ARCHIVO CON UNA VARIABLE string como: nombreAarchivo hago esto
  //INgreso el nombre con un getline(cin, nombreAarchivo) y pongo
  //archivo_escritura.open(nombreAarchivo.c_str(), ios::app o out);
  archivo_escritura.open("demo2.txt", ios::app);

  cout <<"Ingrese su nombre: ";
  getline(cin,nombre);
  archivo_escritura << nombre<<endl;
  cin.ignore();
  cout <<"Ingrese su edad: ";
  cin >> edad;
  archivo_escritura << edad<<endl;

  archivo_escritura.close();



  // LECTURA
  archivo_lectura.open("demo2.txt", ios::in);

    if( archivo_lectura.fail() ){
        cout <<"El archivo no se pudo leer, o este no existe"<<endl;
    }else{

        while( !archivo_lectura.eof()){

          getline(archivo_lectura, texto);
          cout <<texto<<endl;
        }

    }//fin del else que lee la información del archivo


  archivo_lectura.close();



  return 0;
}


//BIBLIOGRAFÍAS (VIDEOS)
/*
  RUTAS
  https://www.youtube.com/watch?v=KdX2t6TMxgA&list=PLA4JK33pSHJVnVz_ENiaY-rqnROmeVECh&index=7   MIN: 1:13:30

  https://www.youtube.com/watch?v=EuTUSD0EloI&list=PLA4JK33pSHJXuqTXiyoZr_dfRcDLfLmub&index=16

  https://www.youtube.com/watch?v=LTSF2wnfNH0&list=PLCTD_CpMeEKTofxs7iottRxJ5YPM7BOcc&index=139

  https://www.youtube.com/watch?v=GaqgqQL3wnQ&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=124

  https://www.youtube.com/watch?v=50nwjXCBM00&list=PLN-xVaranH31Y7fcHnyMRsd718ItR7gl8

  https://www.youtube.com/watch?v=RBZidsPGkfs&t=286s

  https://www.youtube.com/watch?v=3_6wl5VA0XM&list=PLCLpAU8VN0j4scNmGvrPblV-eiYL85a_D&index=12

*/
