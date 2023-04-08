#include <iostream>
#include <cmath>
using namespace std;

struct DATE{

  int dia, mes, anio;
  bool bisies;
} fechas[2];

void IngresarFechas(DATE fecha[]);
void es_Bisiesto(DATE fecha[]);
int Diferencia_Fechas(DATE fecha[]);

int main() {

IngresarFechas(fechas);
cout <<endl<<endl<<endl;
es_Bisiesto(fechas);
cout <<"La diferencia de d"<<char(161)<<"as entre las fechas ingresadas es: "<<Diferencia_Fechas(fechas);

  return 0;
}

void IngresarFechas(DATE fecha[]){

  for(int i = 0; i < 2; i++){

        if(i == 0){
            cout <<"fecha de inicio, (d/m/a)"<<endl;
        }else{
            cout <<"fecha de fin, (d/m/a)"<<endl;
        }
            cin >>fecha[i].dia;
            cin >>fecha[i].mes;
            cin >>fecha[i].anio;

        while(  (fecha[i].dia<0)||(fecha[i].mes<0)||(fecha[i].anio<0)  ){
          cout <<"Error! fecha incorrecta, inténtelo de nuevo"<<endl;
          cin >>fecha[i].dia;
          cin >>fecha[i].mes;
          cin >>fecha[i].anio;

        }


  }//fin del for


}//fin de la funcion IngresarFechas


void es_Bisiesto(DATE fecha[]){
  for(int i = 0; i < 2; i++){
      if( (fecha[i].anio % 4 != 0)||(fecha[i].anio % 100 == 0 )&&(fecha[i].anio % 400 != 0)  ){
        //EL AÑO NO ES BISIESTO
        fecha[i].bisies = false;
      }else{
        //EL AÑO ES BISIESTO
        fecha[i].bisies = true;
        //fecha[i].dia = fecha[i].dia + 1;//si un año es bisiesto tiene un dia mas en febrero
      }

  }


}//fin de la funcion es_Bisiesto


/* MÉTODO DE LA UPV simplificado
int Diferencia_Fechas(DATE fecha[]){
//dias_A1 es la primera fecha y dias_A2 es la segunda fecha
int dias_A1 = (fecha[0].anio*365)+( (fecha[0].mes-1)*30 )+fecha[0].dia;
int dias_A2 = (fecha[1].anio*365)+( (fecha[1].mes-1)*30 )+fecha[1].dia;

return dias_A1-dias_A2;
}//fin de la funcion Diferencia_Fechas
*/


int Diferencia_Fechas(DATE fecha[]){
  int dias_A1 = 0, dias_A2 = 0;
  int meses_anio[] = {31,28,31,30,31,30,31,31,30,31,30,31};

  for(int i = 0; i < 2; i++){//del 0 al 2 porque son dos fechas
      for(int j = 0; j < fecha[i].mes-1; j++){//se calculan los días actuales de cada fecha
          if(i == 0){
            dias_A1 = dias_A1 + meses_anio[j];

          }else if(i == 1){
            dias_A2 = dias_A2 + meses_anio[j];

          }

      }

  }

  int mayor = fecha[0].anio;
  int menor = fecha[0].anio;
  if(fecha[1].anio > mayor) {
    mayor = fecha[1].anio;
  }
  if(fecha[1].anio < menor){
    menor = fecha[1].anio;
  }

int dif = mayor - menor;//DIFERENCIA DE AÑOS
mayor = dif*365;

if(fecha[0].anio > fecha[1].anio) {
  dias_A1 = dias_A1  + mayor;
  //dias_A1 = dias_A1 +365 + mayor;
}else{
  dias_A2 = dias_A2  + mayor;
  //dias_A2 = dias_A2 +365 + mayor;
}


//DIAS TOTALES DE CADA FECHA
  dias_A1 = dias_A1 + fecha[0].dia;
  dias_A2 = dias_A2 + fecha[1].dia;

//cout <<"dias_A1 "<<dias_A1<<endl;
//cout <<"dias_A2 "<<dias_A2<<endl;

  if(fecha[0].bisies == true){
    dias_A1 = dias_A1 + 1;
  }

  if(fecha[1].bisies == true){
    dias_A2 = dias_A2 + 1;
  }

return abs(dias_A1-dias_A2);
}//fin de la funcion Diferencia_Fechas
