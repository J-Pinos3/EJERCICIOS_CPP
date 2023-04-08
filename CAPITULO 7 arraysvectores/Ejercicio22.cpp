#include <iostream>
#include <cstdlib>
using namespace std;
/*
Escribir una función a la que se le proporcione
una fecha (día, mes, año), así como un número de días
 a añadir a esta fecha. La función debe calcular la nueva fecha
y visualizarla.
*/

void fecha(int dia, int mes, int anio, int aniadir);

int main() {

int year, month, day, add;
cout <<"Ingrese el día , mes y año seguidos de un <enter>"<<endl;
cin >> day >> month >> year;

cout <<"Ingrese los días a añadir"<<endl;
cin >> add;
cout <<endl<<endl<<endl;
fecha(day,month,year,add);


    return 0;
}

void fecha(int dia, int mes, int anio, int aniadir){

//SE ASIGNA DIA MES Y AÑO A CADA ELEMENTO DEL ARRAY POR LO TANTO TENDRÁ 3 ELEMENTOS
int longitud = 3;
int fecha_Inicial[longitud] = {0,0,0};
fecha_Inicial[0] = dia;//DIAS
fecha_Inicial[1] = mes;//MESES
fecha_Inicial[2] = anio;//AÑOS
int longitud_febrero = 0;

cout <<"dia: "<<dia<<endl;
cout <<"mes: "<<mes<<endl;
cout <<"anio: "<<anio<<endl;

// se filtran los años que no son bisiestos
if( (anio%4 != 0) || ( (anio%100 == 0)&&(anio%400 != 0 ) ) ){
  // aqui el año no es bisiesto
  cout <<"El año no es bisiesto"<<endl;
  longitud_febrero = 28;
}else{
  cout <<"El año es bisiesto"<<endl;
  longitud_febrero = 29;
}
cout <<endl<<endl;

fecha_Inicial[0] = dia + aniadir;

cout <<"dias acumulados: "<<fecha_Inicial[0]<<endl;
cout <<"mes: "<<fecha_Inicial[1]<<endl;
cout <<"anio: "<<fecha_Inicial[2]<<endl;

int i = 0;
while (fecha_Inicial[0] >= 28) {

  if(i == 0){//es del mes actual por eso i == 0
      if (mes == 1) {                     //solo se restan los dias del mes actual
          fecha_Inicial[0] = fecha_Inicial[0] - 31;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
          //cout <<"dia primera iteracion: "<<fecha_Inicial[0]<<endl;
          //cout <<"mes primera iteracion: "<<fecha_Inicial[1]<<endl;
      }
      if (mes == 2){
          fecha_Inicial[0] = fecha_Inicial[0] - longitud_febrero;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 3){
          fecha_Inicial[0] = fecha_Inicial[0] - 31;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 4){
          fecha_Inicial[0] = fecha_Inicial[0] - 30;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 5){
          fecha_Inicial[0] = fecha_Inicial[0] - 31;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 6){
          fecha_Inicial[0] = fecha_Inicial[0] - 30;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 7){
          fecha_Inicial[0] = fecha_Inicial[0] - 31;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 8){
          fecha_Inicial[0] = fecha_Inicial[0] - 31;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 9){
          fecha_Inicial[0] = fecha_Inicial[0] - 30;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 10){
          fecha_Inicial[0] = fecha_Inicial[0] - 31;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 11){
          fecha_Inicial[0] = fecha_Inicial[0] - 30;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      if (mes == 12){
          fecha_Inicial[0] = fecha_Inicial[0] - 31;
          fecha_Inicial[1] = fecha_Inicial[1] + 1;
      }
      /*
      if (fecha_Inicial[1] > 12){ // si mes es mayor que 12 se inicia a 1 los meses
          fecha_Inicial[1] = 1;

      }
      */

      //FIN DEL IF CUANDO I == 0
  }else{//ya no es el mes actual, son los meses siguientes

    if (fecha_Inicial[1] == 1) {
        fecha_Inicial[0] = fecha_Inicial[0] - 31;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 2){
        fecha_Inicial[0] = fecha_Inicial[0] - longitud_febrero;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    //    cout <<"dia segunda iteracion: "<<fecha_Inicial[0]<<endl;
    //    cout <<"mes segunda iteracion: "<<fecha_Inicial[1]<<endl;
    }else if (fecha_Inicial[1] == 3){
        fecha_Inicial[0] = fecha_Inicial[0] - 31;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 4){
        fecha_Inicial[0] = fecha_Inicial[0] - 30;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 5){
        fecha_Inicial[0] = fecha_Inicial[0] - 31;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 6){
        fecha_Inicial[0] = fecha_Inicial[0] - 30;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 7){
        fecha_Inicial[0] = fecha_Inicial[0] - 31;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 8){
        fecha_Inicial[0] = fecha_Inicial[0] - 31;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 9){
        fecha_Inicial[0] = fecha_Inicial[0] - 30;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 10){
        fecha_Inicial[0] = fecha_Inicial[0] - 31;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 11){
        fecha_Inicial[0] = fecha_Inicial[0] - 30;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] == 12){
        fecha_Inicial[0] = fecha_Inicial[0] - 31;
        fecha_Inicial[1] = fecha_Inicial[1] + 1;
    }else if (fecha_Inicial[1] > 12){ // si mes es mayor que 12 se inicia a 1 los meses
        fecha_Inicial[1] = 1;

    }

    //FIN DEL ELSE
  }

// --> HASTA AQUÍ EL DÍA Y EL MES ESTARÍAN MODIFICADOS <--
//si el mes es mayor que 12 FELIZ AÑO NUEVO
    if(fecha_Inicial[1] > 12){
    //  cout <<"mes fina? "<<fecha_Inicial[1]<<endl;
      fecha_Inicial[2]+= 1;
    }

  i++;
}//fin del WHILE principal

//system("cls");
//cout <<"Cuantas veces estube en el while: "<<i<<endl;
cout <<"| La nueva fecha es: |"<<endl<<endl;

if(fecha_Inicial[2] > anio){
  cout <<"Feliz año nuevo"<<endl;
  cout <<"la fecha es: "<<endl;
  cout <<"dia: "<<fecha_Inicial[0]<<endl;
  cout <<"mes: "<<fecha_Inicial[1]<<endl;
  cout <<"año: "<<fecha_Inicial[2]<<endl;
}else{
  cout <<"la fecha es: "<<endl;
  cout <<"dia: "<<fecha_Inicial[0]<<endl;
  cout <<"mes: "<<fecha_Inicial[1]<<endl;
  cout <<"año: "<<fecha_Inicial[2]<<endl;
}



}//fin de la función mostrar nueva fecha








/*
fecha_Inicial[0] = fecha_Inicial[0] + aniadir;
  if(fecha_Inicial[0] >= 30){
      fecha_Inicial[1] = fecha_Inicial[1] + 1;
  }

  if(fecha_Inicial[1] >= 12){
      fecha_Inicial[2] = fecha_Inicial[2] + 1;
  }


cout <<"La nueva fecha es: "<<endl<<endl;
*/
