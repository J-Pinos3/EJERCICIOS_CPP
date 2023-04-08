#include <iostream>
#include <cstdlib>
using namespace std;

struct FECHA{
  int dia, mes, anio;
};


struct PERSONA{
  char apellidos[20];
  char nombre[20];
  struct FECHA fechaNacimiento;
};

int main() {

/*
int arrarray[] = {1,2,3,4,7};
cout <<"La longitud del array es: "<<sizeof(arrarray)/sizeof(arrarray[0])<<endl;
*/
int nacidos_2019 = 0;
int nacidos_2020 = 0;
int nacidos_2021 = 0;

/*
PERSONA ps[]= { {"BONILLA","CESAR",19,6,2021}, {"CATAÑA","ISRAEL",28,3,2020}, {"CEDEÑO","DAYANA",12,12,2019}, {"CHAMORRO","CRISTINA",19,2,2020},
{"CHUNGANDRO","XIMENA",16,11,2021}, {"CORDOVA","MARIBEL",18,12,2019}, {"CRUZ","ALEJANDRA",21,10,2021}, {"CUMBAL","LIZBETH",18,12,2019},
{"ESPINOSA","DENNISE",2,4,2019}, {"ESTACIO","PATRICIA",5,10,2019}, {"FLORES","CARLOS",19,4,2019}, {"GALETH","OMAR",6,10,2021}, {"GALLO","MARGOTH",13,8,2020},
{"GAVILANEZ","LISBETH",21,10,2019}, {"GUANOQUIZA","JAZMIN",6,4,2019}, {"GUERRON","BELEN",1,12,2021}, {"JERIA","HELENA",1,8,2020}, {"LASCANO","FRANCISCO",10,8,2021},
{"LLUMIQUINGA","MICHELLE",18,4,2021}, {"MANOSALVAS","CAROLINA",22,4,2019}, {"MEJIA","FERNANDO",8,5,2019}, {"MORALES","VANESSA",4,10,2020},
{"ORELLANA","YULAY",5,4,2020}, {"PAZ","ALEJANDRA",9,7,2019}, {"QUIÑONEZ","CAROLINA",29,4,2019}, {"RISCO","JAVIER",10,12,2020},
{"SALTOS","PAUL",22,5,2021},{"SANTI","ALEJANDRO",6,7,2020}, {"SIMBAÑA","ALEXANDER",19,12,2021}, {"TOLAGASI","PAUL",24,2,2020},
{"VASQUEZ","ELIZABETH",3,4,2019}, {"VELASQUEZ","LUCIA",16,11,2019}, {"VILCA","ANDRES",26,9,2021} };
*/
//DE LAS 2 MANERAS FUNCIONA
PERSONA ps[]= { "BONILLA","CESAR",19,6,2021, "CATAÑA","ISRAEL",28,3,2020, "CEDEÑO","DAYANA",12,12,2019, "CHAMORRO","CRISTINA",19,2,2020,
"CHUNGANDRO","XIMENA",16,11,2021, "CORDOVA","MARIBEL",18,12,2019, "CRUZ","ALEJANDRA",21,10,2021, "CUMBAL","LIZBETH",18,12,2019,
"ESPINOSA","DENNISE",2,4,2019, "ESTACIO","PATRICIA",5,10,2019, "FLORES","CARLOS",19,4,2019, "GALETH","OMAR",6,10,2021, "GALLO","MARGOTH",13,8,2020,
"GAVILANEZ","LISBETH",21,10,2019, "GUANOQUIZA","JAZMIN",6,4,2019, "GUERRON","BELEN",1,12,2021, "JERIA","HELENA",1,8,2020, "LASCANO","FRANCISCO",10,8,2021,
"LLUMIQUINGA","MICHELLE",18,4,2021, "MANOSALVAS","CAROLINA",22,4,2019, "MEJIA","FERNANDO",8,5,2019, "MORALES","VANESSA",4,10,2020,
"ORELLANA","YULAY",5,4,2020, "PAZ","ALEJANDRA",9,7,2019, "QUIÑONEZ","CAROLINA",29,4,2019, "RISCO","JAVIER",10,12,2020,
"SALTOS","PAUL",22,5,2021,"SANTI","ALEJANDRO",6,7,2020, "SIMBAÑA","ALEXANDER",19,12,2021, "TOLAGASI","PAUL",24,2,2020,
"VASQUEZ","ELIZABETH",3,4,2019, "VELASQUEZ","LUCIA",16,11,2019, "VILCA","ANDRES",26,9,2021 };


int longitud = sizeof(ps)/sizeof(ps[0]);//longitud debería ser 33
cout <<"longitud: "<<longitud<<endl;
//PARTE 1 EJERCICIO1
for(int i = 0; i < longitud; i++){

    if(ps[i].fechaNacimiento.mes == 1){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"enero"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 2){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"febrero"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 3){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"marzo"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 4){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"abril"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 5){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"mayo"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 6){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"junio"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 7){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"julio"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 8){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"agosto"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 9){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"septiembre"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 10){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"octubre"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 11){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"noviembre"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }else if(ps[i].fechaNacimiento.mes == 12){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"diciembre"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }



}//fin del for

system("pause");
system("cls");


//PARTE 2 EJERCICIO1
char letra = ' ';
cout <<"Ingrese una letra: ";
cin.get(letra);
//cout <<"\n letra: "<<letra<<endl;
for(int i = 0; i < longitud; i++){
    //cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"enero"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    if(ps[i].nombre[0] == letra){
      cout <<ps[i].nombre<<" "<<ps[i].apellidos<<", "<<ps[i].fechaNacimiento.dia<<"--"<<"enero"<<"-"<<ps[i].fechaNacimiento.anio<<endl;
    }
}



//PARTE 3 EJERCICIO1
for(int i = 0; i < longitud; i++){
    if(ps[i].fechaNacimiento.anio == 2019){
        nacidos_2019+=1;
    }else if(ps[i].fechaNacimiento.anio == 2020){
        nacidos_2020+=1;
    }else if(ps[i].fechaNacimiento.anio == 2021){
        nacidos_2021+=1;
    }

}

cout <<"\n\n\nNacidos en 2019"<<endl;
for(int i = 0; i < nacidos_2019; i++){
  cout <<"*";
}


cout <<"\n\nNacidos en 2020"<<endl;
for(int i = 0; i < nacidos_2020; i++){
  cout <<"*";
}

cout <<"\n\nNacidos en 2021"<<endl;
for(int i = 0; i < nacidos_2021; i++){
  cout <<"*";
}
cout <<endl;

//PARTE 4 EJERCICIO 1
//1.	Presentar el nombre del mes en el que existió mayor natalidad por cada año.
int contador_2019[12] ={};
int contador_2020[12] ={};
int contador_2021[12] ={};

for(int i = 0; i < longitud; i++){
    if(ps[i].fechaNacimiento.anio == 2019){

        if(ps[i].fechaNacimiento.mes == 1){
          contador_2019[0]=contador_2019[0]+1;
        }else if(ps[i].fechaNacimiento.mes == 2){
          contador_2019[1]=contador_2019[1]+1;
        }else if(ps[i].fechaNacimiento.mes == 3){
          contador_2019[2]=contador_2019[2]+1;
        }else if(ps[i].fechaNacimiento.mes == 4){
          contador_2019[3]=contador_2019[3]+1;
        }else if(ps[i].fechaNacimiento.mes == 5){
          contador_2019[4]=contador_2019[4]+1;
        }else if(ps[i].fechaNacimiento.mes == 6){
          contador_2019[5]=contador_2019[5]+1;
        }else if(ps[i].fechaNacimiento.mes == 7){
          contador_2019[6]=contador_2019[6]+1;
        }else if(ps[i].fechaNacimiento.mes == 8){
          contador_2019[7]=contador_2019[7]+1;
        }else if(ps[i].fechaNacimiento.mes == 9){
          contador_2019[8]=contador_2019[8]+1;
        }else if(ps[i].fechaNacimiento.mes == 10){
          contador_2019[9]=contador_2019[9]+1;
        }else if(ps[i].fechaNacimiento.mes == 11){
          contador_2019[10]=contador_2019[10]+1;
        }else if(ps[i].fechaNacimiento.mes == 12){
          contador_2019[11]=contador_2019[11]+1;
        }

    }//FIN DEL PRIMER IF


    if(ps[i].fechaNacimiento.anio == 2020){

      if(ps[i].fechaNacimiento.mes == 1){
        contador_2020[0]=contador_2020[0]+1;
      }else if(ps[i].fechaNacimiento.mes == 2){
        contador_2020[1]=contador_2020[1]+1;
      }else if(ps[i].fechaNacimiento.mes == 3){
        contador_2020[2]=contador_2020[2]+1;
      }else if(ps[i].fechaNacimiento.mes == 4){
        contador_2020[3]=contador_2020[3]+1;
      }else if(ps[i].fechaNacimiento.mes == 5){
        contador_2020[4]=contador_2020[4]+1;
      }else if(ps[i].fechaNacimiento.mes == 6){
        contador_2020[5]=contador_2020[5]+1;
      }else if(ps[i].fechaNacimiento.mes == 7){
        contador_2020[6]=contador_2020[6]+1;
      }else if(ps[i].fechaNacimiento.mes == 8){
        contador_2020[7]=contador_2020[7]+1;
      }else if(ps[i].fechaNacimiento.mes == 9){
        contador_2020[8]=contador_2020[8]+1;
      }else if(ps[i].fechaNacimiento.mes == 10){
        contador_2020[9]=contador_2020[9]+1;
      }else if(ps[i].fechaNacimiento.mes == 11){
        contador_2020[10]=contador_2020[10]+1;
      }else if(ps[i].fechaNacimiento.mes == 12){
        contador_2020[11]=contador_2020[11]+1;
      }
    }//FIN DEL SEGUNDO IF


    if(ps[i].fechaNacimiento.anio == 2021){
      if(ps[i].fechaNacimiento.mes == 1){
        contador_2021[0]=contador_2021[0]+1;
      }else if(ps[i].fechaNacimiento.mes == 2){
        contador_2021[1]=contador_2021[1]+1;
      }else if(ps[i].fechaNacimiento.mes == 3){
        contador_2021[2]=contador_2021[2]+1;
      }else if(ps[i].fechaNacimiento.mes == 4){
        contador_2021[3]=contador_2021[3]+1;
      }else if(ps[i].fechaNacimiento.mes == 5){
        contador_2021[4]=contador_2021[4]+1;
      }else if(ps[i].fechaNacimiento.mes == 6){
        contador_2021[5]=contador_2021[5]+1;
      }else if(ps[i].fechaNacimiento.mes == 7){
        contador_2021[6]=contador_2021[6]+1;
      }else if(ps[i].fechaNacimiento.mes == 8){
        contador_2021[7]=contador_2021[7]+1;
      }else if(ps[i].fechaNacimiento.mes == 9){
        contador_2021[8]=contador_2021[8]+1;
      }else if(ps[i].fechaNacimiento.mes == 10){
        contador_2021[9]=contador_2021[9]+1;
      }else if(ps[i].fechaNacimiento.mes == 11){
        contador_2021[10]=contador_2021[10]+1;
      }else if(ps[i].fechaNacimiento.mes == 12){
        contador_2021[11]=contador_2021[11]+1;
      }
    }//FIN DEL TERCER IF


}//FIN DEL FOR




cout <<"\n\n\nNacidos en el 2019"<<endl;
for(int k = 0; k < 12; k++){
cout <<"mes "<<k+1<<": "<<contador_2019[k]<<endl;
}

cout <<"\n\n\nNacidos en el 2020"<<endl;
for(int k = 0; k < 12; k++){
cout <<"mes "<<k+1<<": "<<contador_2020[k]<<endl;
}

cout <<"\n\n\nNacidos en el 2021"<<endl;
for(int k = 0; k < 12; k++){
cout <<"mes "<<k+1<<": "<<contador_2021[k]<<endl;
}






cout <<"usuario especifico TEST"<<endl;
cout <<ps[32].nombre<<endl;



  return 0;
}
