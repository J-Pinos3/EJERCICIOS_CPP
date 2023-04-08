#include <iostream>
#include <cstdlib>
using namespace std;

struct STATS_EQUIPOS{
  string nombre_Equipo;
  short int numero_derrotas, numero_victorias;
};


struct EQUIPOS{
  struct STATS_EQUIPOS data;
  short int perdidas_balon = 0;
  short int rebotes_recogidos = 0;

  short int empates = 0;
  short int goles_favor = 0;
  short int goles_encontra = 0;

  string nombre_Anotador;
  short int puntaje_Anotador;
}equiposBASKET[5], equiposFUTE[5];


void Ingresar_STATS_FUTE(EQUIPOS gente[]);
void Ingresar_STATS_BASKET(EQUIPOS gente[]);

void Mostrar_STATS_FUTE(EQUIPOS gente[]);
void Mostrar_STATS_BASKET(EQUIPOS gente[]);

int main() {

int opcion = -1;
while( (opcion < 0)||(opcion > 2) ){
  cout <<"  -MENU-"<<endl<<endl;
  cout <<"1) Basket"<<endl;
  cout <<"2) Futbol"<<endl;
  cout <<"0) Salir"<<endl;
  cin >> opcion;
}
cin.sync();
system("cls");

while( opcion != 0 ){

    switch(opcion){

        case 1:{
            Ingresar_STATS_BASKET(equiposBASKET);
            cout <<endl<<endl<<endl;
            Mostrar_STATS_BASKET(equiposBASKET);
        }
        break;


        case 2:{
            Ingresar_STATS_FUTE(equiposFUTE);
            cout <<endl<<endl<<endl;
            Mostrar_STATS_FUTE(equiposFUTE);
        }
        break;

        default:{
          cout <<"ERROR FATAL, CODIGO DE SALIDA 0X1924F85"<<endl;
        }
        break;
    }// FIN DEL SWITCH

    opcion = -1;//para que entre al menu
    while( (opcion < 0)||(opcion > 2) ){
      cout <<"  -MENU-"<<endl<<endl;
      cout <<"1) Basket"<<endl;
      cout <<"2) Futbol"<<endl;
      cout <<"0) Salir"<<endl;
      cin >> opcion;
    }
    cin.sync();
    system("cls");



}


  return 0;
}


void Ingresar_STATS_FUTE(EQUIPOS gente[]){
  /*
int n;
cout <<"Ingrese el numero de equipos a ingresar los datos"<<endl;
cin >> n;
*/
  for(int i = 0; i < 3; i++){
    cout <<"Ingrese el nombre del equipo: "<<endl;
    getline(cin, gente[i].data.nombre_Equipo);
    cin.sync();
    cout <<endl;

    cout <<"Ingrese el n° de Derrotas:"<<endl;
    cin >> gente[i].data.numero_derrotas;

    cout <<endl;

    cout <<"Ingrese el n° de Victorias"<<endl;
    cin >> gente[i].data.numero_victorias;

    cout <<"\n\n<---------------------------------->\n\n";

    cout <<"Ingrese el n° de Empates"<<endl;
    cin >> gente[i].empates;

    cout <<endl;

    cout <<"Ingrese el n° de Goles a favor"<<endl;
    cin >> gente[i].goles_favor;

    cout <<endl;

    cout <<"Ingrese el n° de Goles encontra"<<endl;
    cin >> gente[i].goles_encontra;
    cin.sync();
    cout <<"\n\n<---------------------------------->\n\n";

    cout <<"Ingrese el nombre del goleador del equipo"<<endl;
    getline(cin,gente[i].nombre_Anotador);
    cin.sync();
    cout <<endl;

    cout <<"Ingrese el numero de goles del goleador del equipo"<<endl;
    cin >> gente[i].puntaje_Anotador;
    cout <<endl<<endl;
    cin.sync();
  }



}//FIN DE LA FUNCION Ingresar_STATS_FUTE


void Ingresar_STATS_BASKET(EQUIPOS gente[]){
  /*
  int n;
  cout <<"Ingrese el numero de equipos a ingresar los datos"<<endl;
  cin >> n;
*/
  for(int i = 0; i < 3; i++ ){
    cout <<"Ingrese el nombre del equipo: "<<endl;
    getline(cin, gente[i].data.nombre_Equipo);
    cin.sync();
    cout <<endl;

    cout <<"Ingrese el n° de Derrotas:"<<endl;
    cin >> gente[i].data.numero_derrotas;

    cout <<endl;

    cout <<"Ingrese el n° de Victorias"<<endl;
    cin >> gente[i].data.numero_victorias;

    cout <<"\n\n<---------------------------------->\n\n";

    cout <<"Ingrese el n° de Perdidas del balon:"<<endl;
    cin >> gente[i].perdidas_balon;

    cout <<endl;

    cout <<"Ingrese el n° de Rebotes recogidos:"<<endl;
    cin >> gente[i].rebotes_recogidos;
    cin.sync();
    cout <<"\n\n<---------------------------------->\n\n";

    cout <<"Ingrese el nombre del triplista del equipo"<<endl;
    getline(cin,gente[i].nombre_Anotador);
    cin.sync();
    cout <<endl;

    cout <<"Ingrese el numero de triples del triplista del equipo"<<endl;
    cin >> gente[i].puntaje_Anotador;
    cout <<endl<<endl;
    cin.sync();
  }

}//FIN DE LA FUNCION Ingresar_STATS_BASKET


void Mostrar_STATS_FUTE(EQUIPOS gente[]){
cout <<"\t|FUTBOL|"<<endl<<endl;
  for(int i = 0; i < 3; i++){
    cout <<"Equipo: "<<i+1<<endl;
    cout <<"Nombre del Equipo: "<<gente[i].data.nombre_Equipo<<endl;
    cout <<"Numero de Victorias: "<<gente[i].data.numero_victorias<<endl;
    cout <<"Numero de Derrotas: "<<gente[i].data.numero_derrotas<<endl;
    cout <<"Goles a Favor: "<<gente[i].goles_favor<<endl;
    cout <<"Goles en Contra"<<gente[i].goles_encontra<<endl;
    cout <<"Empates: "<<gente[i].empates<<endl;
    cout <<"Goleador del Equipo: "<<gente[i].nombre_Anotador<<endl;
    cout <<"Goles realizados por el goleador del Equipo: "<<gente[i].puntaje_Anotador<<endl;
  }


}//FIN DE LA FUNCION Mostrar_STATS_FUTE


void Mostrar_STATS_BASKET(EQUIPOS gente[]){
cout <<"\t|BASKET|"<<endl<<endl;
 for(int i = 0; i < 3; i++){
   cout <<"Equipo: "<<i+1<<endl;
   cout <<"Nombre del Equipo: "<<gente[i].data.nombre_Equipo<<endl;
   cout <<"Numero de Victorias: "<<gente[i].data.numero_victorias<<endl;
   cout <<"Numero de Derrotas: "<<gente[i].data.numero_derrotas<<endl;
   cout <<"Veces Perdidas el Balon: "<<gente[i].perdidas_balon<<endl;
   cout <<"Rebotes Recogidos: "<<gente[i].rebotes_recogidos<<endl;
   cout <<"Triplista del Equipo: "<<gente[i].nombre_Anotador<<endl;
  cout <<"Triples Realizados por el Triplista"<<gente[i].puntaje_Anotador<<endl;
 }

}//FIN DE LA FUNCION Mostrar_STATS_BASKET
