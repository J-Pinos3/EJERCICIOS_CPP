#include <iostream>
#include <cstdlib>
using namespace std;

//  0         1       2         3
enum Estaciones { verano, invierno, otonio, primavera };
//  1      2      3      4            6         9
enum Colores {rojo = 1, azul, verde, amarillo, negro = 6, celeste = 9 };


Estaciones Imprimir_Estacion();
void mostrar_Estacion(Estaciones est);

int main() {
Estaciones especific_Estacion = otonio;

cout <<"estacion elegida: "<<Imprimir_Estacion()<<endl;
cout <<"\n\n<---------------------->\n\n\n";
mostrar_Estacion(especific_Estacion);
  return 0;
}

Estaciones Imprimir_Estacion(){
  int est;
cout <<"Ingrece el numero de la estacion a visualizar"<<endl;
cout <<"0 -> verano \n1 -> invierno \n2 -> oto"<<char(164)<<"o \n3 -> primavera"<<endl;
cin >> est;

  switch(est){
      case 0:{
        //cout <<"Verano"<<endl;
        return verano;
      }
      break;

      case 1:{
        //cout <<"invierno"<<endl
        return invierno;
      }
      break;

      case 2:{
        //cout <<"oto"<<char(164)<<"o"<<endl;
        return otonio;
      }
      break;

      case 3:{
        //cout <<"primavera"<<endl;
        return primavera;//con el cout <<  me da el 3 xq primavera = 3
      }
      break;

    default:{
        cout <<"porque estoy aqui"<<endl;
    }
    break;

  }//fin del  switch

}//fin de la funcion Imprimir_Estacion


void mostrar_Estacion(Estaciones est){

    switch(est){

        case primavera:{
          cout <<"Primavera"<<endl;
        }
        break;

        case verano:{
          cout <<"Verano"<<endl;
        }
        break;
        case otonio:{
          cout <<"Oto"<<char(164)<<"o"<<endl;
        }
        break;
        case invierno:{
          cout <<"Invierno"<<endl;
        }
        break;


    }

}//FIN DE LA FUNCION mostrar_Estacion
