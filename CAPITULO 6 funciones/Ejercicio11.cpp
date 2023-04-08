#include <iostream>
#include <cstdlib>

using namespace std;
// EJERCICIO "PARECIDO" CAPITULO EJERCICIO 12
/*

(Cuadrado de asteriscos) Escriba una función que muestre en el margen
izquierdo de la pantalla un cuadrado relleno de asteriscos,
cuyo lado se especifique en el parámetro entero lado. Por ejemplo, si lado es 4, la función debe mostrar lo siguiente:
****
****
****
****



*/
void cuadrado (int lado);

int main (){
int lado;
do{
  cout <<"Ingrese el valor del lado del cuadrado"<<endl;
  cin >> lado;
    if(lado < 0){
      cout <<"Error, man inténtalo de nuevo"<<endl;
    }


}while (lado < 0);

cout <<endl<<endl<<endl<<endl;
cuadrado(lado);










    return 0;
}

//******************
void cuadrado (int lado){

for(int i = 1; i <= lado; i++ ){// cuenta las filas
    for(int j = 1; j <= lado; j++){
      cout <<"*";
    }

  cout <<endl;
}


} // FIN FUNCIÓN cuadrado
