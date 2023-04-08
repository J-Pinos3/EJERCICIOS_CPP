#include <iostream>
#include <cstdlib>
using namespace std;

enum ClaseAvion {primera, business, economica};

struct PASAJERO{
  string nombre_pasajero;
  enum ClaseAvion tipo_puesto;

};


int main() {

//SI LE SEPARO CADA GRUPO DE ELEMENTOS CON LLAVES {}, TEAMBIÉN FUNCIONA
  PASAJERO pasajeros[3] = { "Jose Pinos", business,
  "Carlos Ochoa", economica,
  "Camila Rovayo", primera };
  //PASAJERO pasajeros[3] = { "Jose Pinos", business, "Carlos Ochoa", economica, "Camila Rovayo", primera };

for(int i = 0; i < 3; i++){
    switch(pasajeros[i].tipo_puesto){
        case business:{
          cout <<"|Nombre: "<<pasajeros[i].nombre_pasajero<< ". Viaja en clase Business |"<<endl;
        }
        break;

        case economica:{
          cout <<"|Nombre: "<<pasajeros[i].nombre_pasajero<< ". Viaja en clase Economica |"<<endl;
        }
        break;

        case primera:{
          cout <<"|Nombre: "<<pasajeros[i].nombre_pasajero<< ". Viaja en Primera Clase |"<<endl;
          //cout <<"|Nombre: "<<pasajeros[i].nombre_pasajero<< ". Viaja en Bus xD |"<<endl;
        }
        break;

        default:{
          cout <<"ALGO SALI"<<char(224)<<" MUY MAL  :("<<endl; //224  Ó
        }

    }//fin del switch


}


  return 0;
}
