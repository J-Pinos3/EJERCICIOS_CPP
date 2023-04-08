#include <iostream>
#include <cstdlib>
using namespace std;

struct CARRO{

    string marca=" ";
    string modelo=" ";
    double precio=0.0;

}vehiculos[3];

void ingresarDatos(CARRO vehiculos[]);
void ordenarDatos(CARRO vehiculos[]);
void mostrarDatos(const CARRO vehiculos[] );


int main() {

ingresarDatos(vehiculos);
cout <<endl;
ordenarDatos(vehiculos);
mostrarDatos(vehiculos);



  return 0;
}

void ingresarDatos(CARRO vehiculos[]){

  for(int i = 0; i < 3; i++){
      cout <<"Carro: "<<i+1<<endl<<endl;

      cout <<"Marca: ";
      getline(cin, vehiculos[i].marca );

      cout <<"Modelo: ";
      getline(cin, vehiculos[i].modelo );

      cout <<"Precio: ";
      cin >> vehiculos[i].precio;

      cin.sync();
      cout <<endl<<endl;
  }
}//fin de la funcion ingresar datos


void ordenarDatos(CARRO vehiculos[]){
  string auxmarca, auxmodelo;
  double auxprecio;

    for(int i = 0; i < 3;  i++){
      //int j = i+1; j < 3; j++
        for(int j = 0; j < 3-1; j++){
            if(vehiculos[j].precio > vehiculos[i].precio){

                auxmarca = vehiculos[i].marca;
                vehiculos[i].marca = vehiculos[j].marca;
                vehiculos[j].marca = auxmarca;

                auxmodelo = vehiculos[i].modelo;
                vehiculos[i].modelo = vehiculos[j].modelo;
                vehiculos[j].modelo = auxmodelo;

                auxprecio = vehiculos[i].precio;
                vehiculos[i].precio = vehiculos[j].precio;
                vehiculos[j].precio = auxprecio;

            }
        }
    }

}//fin de la función ordenarDatos


void mostrarDatos(const CARRO vehiculos[] ){

  for(int i = 0; i < 3; i++){
    cout <<"Vehiculo: "<<i+1<<endl<<endl;
    cout <<"Marca: "<<vehiculos[i].marca<<endl;
    cout <<"Modelo: "<<vehiculos[i].modelo<<endl;
    cout <<"Precio: "<<vehiculos[i].precio<<endl;
    cout <<endl<<"-----------------------------------------------"<<endl<<endl;
  }

}//fin de la funcion mostrarDatos
