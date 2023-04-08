#include <iostream>
using namespace std;

int main() {
int enie = 164; //ñ
int letra_i = 161; //í
char ene = enie;
char letterI = letra_i;

int dia, mes, anio;
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

  if(mes == 1){//ENERO
      for(int i = 1; i <= dia; i++){
        total_dias = total_dias + 1;
      }


  //*****************************************************
    } else if(mes == 2){ // FEBRERO
    total_dias = 31;// 31 xq son los días de enero
      for(int i = 1; i <= 29; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }


    //*****************************************************
  } else if(mes == 3){ //MARZO
    total_dias = 60;// son los dias de enero + febrero
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }


  //*****************************************************
    } else if(mes == 4){ //ABRIL
    total_dias = 91;// son los dias de enero + febrero + marzo
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }


  //****************************************************
  } else if(mes == 5){ //MAYO
  total_dias = 121;// son los dias de enero + febrero + marzo + abril
    for(int i = 1; i <= dia; i++){

      if(i == dia){
        total_dias = total_dias + 1;
        break;
      }
      total_dias = total_dias + 1;

    }


    //****************************************************
  } else if(mes == 6){ //JUNIO
  total_dias = 152;// son los dias de enero + febrero + marzo + abril + mayo
    for(int i = 1; i <= dia; i++){

      if(i == dia){
        total_dias = total_dias + 1;
        break;
      }
      total_dias = total_dias + 1;

    }



    //****************************************************
  } else if(mes == 7){ //JULIO
  total_dias = 182;// son los dias de enero + febrero + marzo + abril + mayo + junio
    for(int i = 1; i <= dia; i++){

      if(i == dia){
        total_dias = total_dias + 1;
        break;
      }
      total_dias = total_dias + 1;

    }


    //****************************************************
  } else if(mes == 8){ //AGOSTO
  total_dias = 213;// son los dias de enero + febrero + marzo + abril + mayo + junio + julio
    for(int i = 1; i <= dia; i++){

      if(i == dia){
        total_dias = total_dias + 1;
        break;
      }
      total_dias = total_dias + 1;

    }



    //****************************************************
  } else if(mes == 9){ //SEPTIEMBRE
  total_dias = 244;// son los dias de enero+febrero+marzo+abril+mayo+junio+julio+agosto
    for(int i = 1; i <= dia; i++){

      if(i == dia){
        total_dias = total_dias + 1;
        break;
      }
      total_dias = total_dias + 1;

    }


    //****************************************************
  } else if(mes == 10){ //OCTUBRE
  total_dias = 274;//son los dias de enero+febrero+marzo+abril+mayo+junio+julio+agosto+septiembre
    for(int i = 1; i <= dia; i++){

      if(i == dia){
        total_dias = total_dias + 1;
        break;
      }
      total_dias = total_dias + 1;

    }


    //****************************************************
  } else if(mes == 11){ //NOVIEMBRE
  total_dias = 305;//son los dias de enero+febrero+marzo+abril+mayo+junio+julio+agosto+septiembre+octubre
    for(int i = 1; i <= dia; i++){

      if(i == dia){
        total_dias = total_dias + 1;
        break;
      }
      total_dias = total_dias + 1;

    }


    //****************************************************
  } else if(mes == 12){ //DICIEMBRE
  total_dias = 335;//son los dias de enero+febrero+marzo+abril+mayo+junio+julio+agosto+septiembre+octubre+noviembre
    for(int i = 1; i <= dia; i++){

      if(i == dia){
        total_dias = total_dias + 1;
        break;
      }
      total_dias = total_dias + 1;

    }



  }

  //****************************************************





cout <<"El d"<<letterI<<"a del a"<<ene<<"o es: "<<total_dias<<endl;


//FIN DEL IF bisiesto

}else if(bisiesto == false){


  total_dias = 0;

    if(mes == 1){//ENERO
        for(int i = 1; i <= dia; i++){
          total_dias = total_dias + 1;
        }


    //*****************************************************
      } else if(mes == 2){ // FEBRERO
      total_dias = 31;// 31 xq son los días de enero
        for(int i = 1; i <= 28; i++){

          if(i == dia){
            total_dias = total_dias + 1;
            break;
          }
          total_dias = total_dias + 1;

        }


      //*****************************************************
    } else if(mes == 3){ //MARZO
      total_dias = 59;// son los dias de enero + febrero
        for(int i = 1; i <= dia; i++){

          if(i == dia){
            total_dias = total_dias + 1;
            break;
          }
          total_dias = total_dias + 1;

        }


    //*****************************************************
      } else if(mes == 4){ //ABRIL
      total_dias = 90;// son los dias de enero + febrero + marzo
        for(int i = 1; i <= dia; i++){

          if(i == dia){
            total_dias = total_dias + 1;
            break;
          }
          total_dias = total_dias + 1;

        }


    //****************************************************
    } else if(mes == 5){ //MAYO
    total_dias = 120;// son los dias de enero + febrero + marzo + abril
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }


      //****************************************************
    } else if(mes == 6){ //JUNIO
    total_dias = 151;// son los dias de enero + febrero + marzo + abril + mayo
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }



      //****************************************************
    } else if(mes == 7){ //JULIO
    total_dias = 181;// son los dias de enero + febrero + marzo + abril + mayo + junio
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }


      //****************************************************
    } else if(mes == 8){ //AGOSTO
    total_dias = 212;// son los dias de enero + febrero + marzo + abril + mayo + junio + julio
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }



      //****************************************************
    } else if(mes == 9){ //SEPTIEMBRE
    total_dias = 243;// son los dias de enero+febrero+marzo+abril+mayo+junio+julio+agosto
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }


      //****************************************************
    } else if(mes == 10){ //OCTUBRE
    total_dias = 273;//son los dias de enero+febrero+marzo+abril+mayo+junio+julio+agosto+septiembre
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }


      //****************************************************
    } else if(mes == 11){ //NOVIEMBRE
    total_dias = 304;//son los dias de enero+febrero+marzo+abril+mayo+junio+julio+agosto+septiembre+octubre
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1;

      }


      //****************************************************
    } else if(mes == 12){ //DICIEMBRE
    total_dias = 334;//son los dias de enero+febrero+marzo+abril+mayo+junio+julio+agosto+septiembre+octubre+noviembre
      for(int i = 1; i <= dia; i++){

        if(i == dia){
          total_dias = total_dias + 1;
          break;
        }
        total_dias = total_dias + 1
        ;

      }



    }

    //****************************************************



  cout <<"El d"<<letterI<<"a del a"<<ene<<"o es: "<<total_dias<<endl;


  } // fin del if que no es bisiesto











  return 0;
}
