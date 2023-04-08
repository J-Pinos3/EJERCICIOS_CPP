#include <iostream>
#include <cstdlib>
using namespace std;

struct CATEGORIA{
  string nombre_categoria;
  int id_numerico;
};

struct PRODUCTO{
  string nombre_producto;
  int stock;
  float precio_unitario;
  struct CATEGORIA cater_producto;
}cantidad[3] = { {"Choco-Krispis",6,4.50,"Dulces",123},
{"Pasta Dental Colgate",15,2.69,"Higiene",124},
{"Monster",8,3.50,"Bebidas N.H.",125} };

struct PERSONA{
  string nombre_persona;
  float total_pagar = 0;
  struct PRODUCTO cantidad[3];
};

int Intro(PERSONA &humano, PRODUCTO cantidad[]);


int main() {

//cout <<cantidad[0].nombre_producto<<" "<<cantidad[0].stock<<" "<<cantidad[0].precio_unitario<<" "<<cantidad[0].cater_producto.nombre_categoria<<" "<<cantidad[0].cater_producto.id_numerico<<endl;
//cout <<cantidad[1].nombre_producto<<" "<<cantidad[1].stock<<" "<<cantidad[1].precio_unitario<<" "<<cantidad[1].cater_producto.nombre_categoria<<" "<<cantidad[1].cater_producto.id_numerico<<endl;
PERSONA humano;
int tamanio_compra;
char linea_alta = 238;
char linea_baja = 95;
char continuar = 's';

//PARA LOS RECUADROS INCLUIR algoritmo de test.cpp

while(continuar == 's'){

  int valor_menu = Intro(humano, cantidad);
  cout <<endl<<endl;
  
  if(valor_menu == 1){
    cout <<"categoria: "<<cantidad[0].cater_producto.nombre_categoria<<endl;
    cout <<"producto: "<<cantidad[0].nombre_producto<<endl;
    cout <<"stock: "<<cantidad[0].stock<<endl<<endl<<endl;

    cout <<"Escoja la cantidad de producto: ";
    cin >> tamanio_compra;
    while( (tamanio_compra < 0)||(tamanio_compra > cantidad[0].stock) ){
      cout <<"Valor incorrecto, intentelo de nuevo"<<endl;
      cout <<"Escoja la cantidad de producto: ";
      cin >> tamanio_compra;
    }

    humano.total_pagar = humano.total_pagar + (tamanio_compra * 4.50);


  }else if(valor_menu == 2){
    cout <<"categoria: "<<cantidad[1].cater_producto.nombre_categoria<<endl;
    cout <<"producto: "<<cantidad[1].nombre_producto<<endl;
    cout <<"stock: "<<cantidad[1].stock<<endl<<endl<<endl;

    cout <<"Escoja la cantidad de producto: ";
    cin >> tamanio_compra;
    while( (tamanio_compra < 0)||(tamanio_compra > cantidad[1].stock) ){
      cout <<"Valor incorrecto, intentelo de nuevo"<<endl;
      cout <<"Escoja la cantidad de producto: ";
      cin >> tamanio_compra;
    }

    humano.total_pagar = humano.total_pagar + (tamanio_compra * 2.69);


  }else if(valor_menu == 3){
    cout <<"categoria: "<<cantidad[2].cater_producto.nombre_categoria<<endl;
    cout <<"producto: "<<cantidad[2].nombre_producto<<endl;
    cout <<"stock: "<<cantidad[2].stock<<endl<<endl<<endl;

    cout <<"Escoja la cantidad de producto: ";
    cin >> tamanio_compra;
    while( (tamanio_compra < 0)||(tamanio_compra > cantidad[2].stock) ){
      cout <<"Valor incorrecto, intentelo de nuevo"<<endl;
      cout <<"Escoja la cantidad de producto: ";
      cin >> tamanio_compra;
    }

    humano.total_pagar = humano.total_pagar + (tamanio_compra * 3.50);


  }//FIN DEL ULTIMO IF

  cout <<"Seguir comprando: SI <s>  NO <n>"<<endl;
  cin >> continuar;
  cin.ignore();

}//FIN DEL WHILE PARA CONTINUAR CALCULANDO PRECIOS

//CODIGO DE RESPALDO
/*
if(valor_menu == 1){
  cout <<"categoria: "<<cantidad[0].cater_producto.nombre_categoria<<endl;
  cout <<"producto: "<<cantidad[0].nombre_producto<<endl;
  cout <<"stock: "<<cantidad[0].stock<<endl<<endl<<endl;

  cout <<"Escoja la cantidad de producto: ";
  cin >> tamanio_compra;
  while( (tamanio_compra < 0)||(tamanio_compra > cantidad[0].stock) ){
    cout <<"Valor incorrecto, intentelo de nuevo"<<endl;
    cout <<"Escoja la cantidad de producto: ";
    cin >> tamanio_compra;
  }

  humano.total_pagar = humano.total_pagar + (tamanio_compra * 4.50);


}else if(valor_menu == 2){
  cout <<"categoria: "<<cantidad[1].cater_producto.nombre_categoria<<endl;
  cout <<"producto: "<<cantidad[1].nombre_producto<<endl;
  cout <<"stock: "<<cantidad[1].stock<<endl<<endl<<endl;

  cout <<"Escoja la cantidad de producto: ";
  cin >> tamanio_compra;
  while( (tamanio_compra < 0)||(tamanio_compra > cantidad[1].stock) ){
    cout <<"Valor incorrecto, intentelo de nuevo"<<endl;
    cout <<"Escoja la cantidad de producto: ";
    cin >> tamanio_compra;
  }

  humano.total_pagar = humano.total_pagar + (tamanio_compra * 2.69);


}else if(valor_menu == 3){
  cout <<"categoria: "<<cantidad[2].cater_producto.nombre_categoria<<endl;
  cout <<"producto: "<<cantidad[2].nombre_producto<<endl;
  cout <<"stock: "<<cantidad[2].stock<<endl<<endl<<endl;

  cout <<"Escoja la cantidad de producto: ";
  cin >> tamanio_compra;
  while( (tamanio_compra < 0)||(tamanio_compra > cantidad[2].stock) ){
    cout <<"Valor incorrecto, intentelo de nuevo"<<endl;
    cout <<"Escoja la cantidad de producto: ";
    cin >> tamanio_compra;
  }

  humano.total_pagar = humano.total_pagar + (tamanio_compra * 3.50);


}//FIN DEL ULTIMO IF
*/

cout <<"El total de su compra es: "<<humano.total_pagar<<"$ "<<endl;






    return 0;
}

int Intro(PERSONA &humano, PRODUCTO cantidad[]){
short int opcion = 0;
cout <<"Ingrese su nombre: ";
getline(cin, humano.nombre_persona);

system("cls");

for(int i = 0; i < 3; i++){
  cout <<i+1<<"["<<cantidad[i].cater_producto.nombre_categoria<<"]"<<endl;
}
cout <<"\n\n["<<humano.nombre_persona<<"]: ¿Que categoria deseas ver?"<<endl;
cin >> opcion;

return opcion;
}//FIN DE LA FUNCION INTRODUCCION
