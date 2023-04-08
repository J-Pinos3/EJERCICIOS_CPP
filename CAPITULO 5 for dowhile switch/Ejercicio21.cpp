#include <iostream>
using namespace std;

int main() {
int enie = 164; //ñ
int letra_i = 161; //í
char ene = enie;
char letterI = letra_i;

int dia, mes, anio, dias_mes;
int total_dias;
bool bisiesto = false;

cout <<"Ingrese el d"<<letterI<<"a , mes , a"<<ene<<"o"<<endl;
cin >> dia >> mes >> anio;

//filtramos los que no son bisiestos
if( (anio % 4 != 0) || ( (anio % 100 == 0)&&(anio % 400 != 0) ) ){
cout <<"El a"<<ene<<"o "<<anio<<" no es bisiesto"<<endl;
bisiesto = false;

}else{
  cout <<" El a"<<ene<<"o "<<anio<<" es bisisesto "<<endl;
  bisiesto = true;
}



if(bisiesto == true){

total_dias = 0;
int i;
  for (i = 1; i <= mes; i++ ){

    if(i == 1){
      total_dias += 31;


    }else if(i == 2){


      total_dias += 29;
    }else if(i == 3){


      total_dias += 31;
    }else if(i == 4){


      total_dias += 30;
    }else if(i == 5){


      total_dias += 31;
    }else if(i == 6){


      total_dias += 30;
    }else if(i == 7){


      total_dias += 31;
    }else if(i == 8){


      total_dias += 31;
    }else if(i == 9){


      total_dias += 30;
    }else if(i == 10){


      total_dias += 31;
    }else if(i == 11){


      total_dias += 30;
    }else if(i == 12){

      
      total_dias += 31;
    }




  } // FIN DEL FORR



cout <<"El d"<<letterI<<"a del a"<<ene<<"o es: "<<total_dias<<endl;


//FIN DEL IF bisiesto

}else if(bisiesto == false){

  total_dias = 0;
int j;
    for ( j = 1; j <= mes; j++ ){

      if(j == 1){
        total_dias += 31;

        for(int k = 1; k <= ){

        }



      }else if(j == 2){
        total_dias += 28;





      }else if(j == 3){
        total_dias += 31;


      }else if(j == 4){
        total_dias += 30;


      }else if(j == 5){
        total_dias += 31;


      }else if(j == 6){
        total_dias += 30;


      }else if(j == 7){
        total_dias += 31;


      }else if(j == 8){
        total_dias += 31;


      }else if(j == 9){
        total_dias += 30;


      }else if(j == 10){
        total_dias += 31;


      }else if(j == 11){
        total_dias += 30;


      }else if(j == 12){
        total_dias += 31;


      }




    } // FIN DEL FORR





      cout <<"El d"<<letterI<<"a del a"<<ene<<"o es: "<<total_dias<<endl;




    } // fin del if que no es bisiesto











  return 0;
}
