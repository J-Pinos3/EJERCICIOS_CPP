#include <iostream>
#include <cstdlib>
#include <string>
#include <array>
#include <cmath>
using namespace std;

const int MAX = 50;
unsigned short int Menu();

unsigned short int menu_Calificaciones();
void Agregar_calificaciones(array<int, MAX>& arr, int& total );
bool Buscar_calificaciones(const array<int, MAX>& arr, const int total, int& indice);
void Eliminar_calificaciones(array<int, MAX>& arr, int& total );
void Insertar_calificacion(array<int, MAX>& arr, int& total);
void Ordenar_calificaciones(array<int, MAX>& arr, int total);


void Palindromo();
void Invertir_Array(array<int, 20>& arr, int cifras );

void Elim_duplicados();


int main()
{

    unsigned short int opcion = 1;

    while(opcion != 0){
        opcion = Menu();
        system("cls");

        switch(opcion){

            case 1:{

            }
            break;


            case 2:{
                    Palindromo();

            }
            break;


            case 3:{

            }
            break;


            case 4:{

            }
            break;

            case 0:{
                cout <<"\tGracias por su preferencia"<<endl<<endl;
            }
            break;


            default:{
                cout <<"ALGO HA SALIDO MUY MAL :("<<endl<<endl;
            }
            break;


        }//fin del switch principal

        system("pause");
        system("cls");

    }//FIN DEL WHILE PRINCIPAL


    return 0;
}


unsigned short int Menu(){
    unsigned short int opcion;
    cout <<"\tMEN"<<char(233)<<endl;
    cout <<"1) Ejercicio 1"<<endl;//calificaciones
    cout <<"2) Ejercicio 2"<<endl;//palíndromo
    cout <<"3) Ejercicio 3"<<endl;//duplicados
    cout <<"4) Ejercicio 4"<<endl;//dados
    cout <<"0) SALIR"<<endl;

    cout <<"Opci"<<char(162)<<"n"<<endl;
    cin >> opcion;

    while(opcion < 0 || opcion > 4){
        cout <<"Error \nInt"<<char(130)<<"ntelo de nuevo"<<endl;
        cout <<"Opci"<<char(162)<<"n"<<endl;
        cin >> opcion;
        cout <<endl;
    }


    return opcion;
}//FIN DE LA FUNCION MENU


unsigned short int menu_Calificaciones(){

    unsigned short int opcion_1;
    cout <<"\tMEN"<<char(233)<<endl;
    cout <<"1) Agregar calificaciones"<<endl;
    cout <<"2) Buscar calificaci"<<char(162)<<"n"<<endl;
    cout <<"3) Eliminar calificaci"<<char(162)<<"n"<<endl;
    cout <<"4) Insertar calificaci"<<char(162)<<"n"<<endl;
    cout <<"5) Ordenar calificaciones"<<endl;
    cout <<"0) SALIR"<<endl;

    cout <<"Opci"<<char(162)<<"n"<<endl;
    cin >> opcion_1;

    while(opcion_1 < 0 || opcion_1 > 5){
        cout <<"Error \nInt"<<char(130)<<"ntelo de nuevo"<<endl;
        cout <<"Opci"<<char(162)<<"n"<<endl;
        cin >> opcion_1;
        cout <<endl;
    }


    return opcion_1;


}//fin de la funcion menu_Calificaciones

void Agregar_calificaciones(array<int, MAX>& arr, int& total ){
     int nota = 0;
     int i = 0;
     cout <<"Ingrese las notas de los estudiantes, (-1 para terminar)"<<endl<<endl;
     while(nota != -1){
         cin >> nota;
         arr.at(i) = nota;
         i++;
         total++;//cada vez que se ingresa un alumno el total aumenta
         cout <<"Ingrese las notas de los estudiantes, (-1 para terminar)"<<endl<<endl;
     }
    cout <<"Se ingresaron: "<<i<<" elementos"<<endl;
}//FIN DE LA FUNCIÓN AGREGAR CALIFICACIONES

bool Buscar_calificaciones(const array<int, MAX>& arr, const int total, int& indice){
    bool encontradoPE= false;
    int valor_a_buscar = 0;
    cout <<"Ingrese el valor a buscar: ";
    cin >> valor_a_buscar;
    for(int i = 0; i < total && encontradoPE == false; i++){
        if( valor_a_buscar == arr.at(i) ){
            encontradoPE = true;
            indice = i;
        }
    }

    return encontradoPE;
}//FIN DE LA FUNCIÓN BUSCAR CALIFICACIONES

void Eliminar_calificaciones(array<int, MAX>& arr, int& total ){
    int pos = 0;
    cout <<"Ingrese la posicion de la nota que desea eliminar: ";
    cin >> pos;
    pos = pos-1;
    for(int i = pos; i < total-1; i++){
        arr.at(i) = arr.at(i+1);
    }

    total--;
}//FIN DE LA FUNCIÓN ELIMINAR CALIFICACIONES

void Insertar_calificacion(array<int, MAX>& arr, int& total){
    int pos = 0;
    int nuevo = 0;
    if(total < MAX){
        cout <<"Ingrese la posici"<<char(162)<<"n de la nota insertar: ";
        cin >>pos;
        cout <<"Ingrese la nueva nota: ";
        cin >> nuevo;

        pos = pos-1;
        for(int i= total; i > pos; i-- ){
            arr.at(i) = arr.at(i-1);
        }
        arr.at(pos) = nuevo;
        total++;
    }

}//FIN DE LA FUNCION INSERTAR CALIFICACION

void Ordenar_calificaciones(array<int, MAX>& arr, int total){
    //ORDENAMIENTO POR SELECCIÓON
    int aux = 0, min = 0;
    for(int i = 0; i < total; i++){

        min = i;

        for(int j = i+1; j < total; j++){
            if( arr.at(j) < arr.at(min) ){
                min = j;
            }
        }
        aux = arr.at(i);
        arr.at(i) = arr.at(min);
        arr.at(min) = aux;
    }

}//FIN DE LA FUNCIÓN ORDENAR CALIFICACIONES


void Palindromo(){
    array<int, 20> arr_orig = {};
    array<int, 20> arr_invert = {};

    int cifras = 0;
    int digitos;
    cout <<"Ingrese el numero de digitos a almacenar: ";
    cin >> digitos;
    cout <<"\nIngrese los dígitos del número para determinar si es palíndromo, (ingrese una letra para terminar) "<<endl<<endl;

    int i = 0, numero = 0;

    //cin >> arr_orig.at(i) LA LECTURA CONSTANTE ME DA EL ERROR
    while( i < digitos ){

        cin >> arr_orig.at(i);
        arr_invert.at(i) = arr_orig.at(i);
        numero = numero*10 + arr_orig.at(i);
        cifras++;
        i++;
        cout <<"Ingrese los dígitos del número para determinar si es palíndromo, (ingrese una letra para terminar) "<<endl<<endl;
    }

    cin.sync();

    cout <<endl;
    Invertir_Array(arr_invert, cifras); //se procede a invertir el otro array que tiene los mismos elementos que el original

    bool sonPalindromos = false;
    int contador = 0;

    while(contador < cifras){
        if( arr_orig.at(contador) == arr_invert.at(contador) ){
            sonPalindromos = true;
        }else{
            sonPalindromos = false;
            break;
        }

        contador++;
    }


    if(sonPalindromos){
        cout <<"El numero: "<<numero <<" es palindromo"<<endl;
    }else{
        cout <<"EL numero ingresado no es palindromo"<<endl<<endl;
    }
}//FIN DE LA FUNCION PALÍNDROMO

void Invertir_Array(array<int, 20>& arr, int cifras ){
    int aux = 0, j = cifras;

    for(int i = 0; i < cifras; i++){
        j--; //j empieza con la ultima posicion del array
        if(j > i){
            aux = arr.at(i);
            arr.at(i) = arr.at(j);
            arr.at(j) = aux;
        }
    }


}//fin de la funcion invertir_Array


void Elim_duplicados(){
    array<int, 20> arr1 = {};
    array<int, 20> arr_aux = {};
    cout <<"Ingrese los valores del arreglo"<<endl;
    for(int i = 0; i < 20; i++){
        cin >> arr1.at(i);

        while(arr1.at(i) < 10||arr1.at(i) > 100){
            cout <<"Int"<<char(130)<<"ntelo de nuevo"<<endl;
            cin >> arr1.at(i);
            cout <<endl;
        }

    }

}//FIN DE LA FUNCION ELIM_DUPLICADOS
