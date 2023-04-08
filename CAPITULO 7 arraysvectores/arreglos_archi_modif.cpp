#include <iostream>
#include <fstream>
#include <cstdlib>
#include <array>
using namespace std;

const int umbral = 250;
const int DIAS = 7;
typedef array <double, DIAS> VENTA;
int buscarVENTA(const VENTA arr);


int main(){

    VENTA ventas;
    int indice = 0;

    ifstream archivo;
    archivo.open("VENTAS.txt",ios::in);

    if(archivo.is_open()){

        for(int i = 0; i < DIAS; i++){
            archivo >> ventas.at(i);//el array ventas almacena cada valor del archivo
        }
         archivo.close();

        indice = buscarVENTA(ventas);

        if(indice == -1){
            cout <<"Ninguna venta super"<<char(162)<<" 250$"<<endl<<endl;
        }else{
            cout <<"La primera venta mayor a 250$ es:" <<ventas[indice]<<", en el d"<<char(161)<<"a: "<<indice+1<<endl<<endl;
        }


    }else{
        cout <<"No se ha podido abrir el archivo :("<<endl<<endl;
    }

    for(int i = 0; i< DIAS; i++)
    cout << ventas.at(i)<<endl;



    system("pause");
    return 0;
}

int buscarVENTA(const VENTA arr){

    bool encontrado = false;
    int indice = 0;
    while(indice < DIAS && !encontrado){
        if( arr.at(indice) > 250){
            encontrado = true;
        }else{
            indice++;
        }


    }

    if(!encontrado){
        indice  = -1;
    }

    return indice;
}//fin de la funcion buscar venta
