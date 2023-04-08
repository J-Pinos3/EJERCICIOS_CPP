#include <iostream>
#include <array>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void establecerNombreCurso (string nombre);
string obtenerNombreCurso();
void mostrarMensaje();
void ProcesarCalificaciones(int arr[]);
int obtenerMinimo(int arr[]);
int obtenerMaximo(int arr[]);
double obtenerPromedio(int arr[]);
void imprimirBarras(int arr[]);
void imprimirCalificaciones(int arr[]);
void ingresarCalificaciones(int arr[]);

int TAM = 10;
string nombreCurso = " ";

int main() {

//int TAM = 10;
//string nombreCurso = " ";
//int estudiantes[TAM] = {};

string nombre = " ";
int notas[TAM] = {};

cout <<"Ingrese las calificaciones de los estudiantes"<<endl;
ingresarCalificaciones(notas);

system("pause");
system("cls");
cin.sync();
cout <<"Ingrese el nombre del curso"<<endl;
getline(cin,nombre);
establecerNombreCurso(nombre);

system("pause");
system("cls");

mostrarMensaje();
cout <<"\n\n<----------------------------->\n\n"<<endl;
ProcesarCalificaciones(notas);



    return 0;
}
//*********************************************
void establecerNombreCurso(string nombre){
 nombreCurso = nombre;
}//Fin de la funcion establecerNombreCurso


string obtenerNombreCurso(){
    return nombreCurso;
}


void mostrarMensaje(){
cout <<"| Bienvenido al libro de calificaciones de\n"<<obtenerNombreCurso()<<" |"<<endl;

}//Fin funcion mostrarMensaje


void ProcesarCalificaciones(int arr[]){

imprimirCalificaciones(arr);

cout <<setprecision(2)<<fixed;
cout <<"El promedio de la clase es: "<<obtenerPromedio(arr)<<endl;
cout <<"La calificacion mas baja es: "<<obtenerMinimo(arr)<<endl;
cout <<"La calificacion mas alta es: "<<obtenerMaximo(arr)<<endl;
cout<<endl;

imprimirBarras(arr);
}//finj funcion ProcesarCalificaciones


int obtenerMinimo(int arr[]){
// arr es el array de notas (calificaciones)
int notaminima = 100;

for(int calificacion = 0; calificacion < TAM; calificacion++){

    if( arr[calificacion] < notaminima ){
      notaminima = arr[calificacion];

    }

}

  return notaminima;
}// fin funcion obtener minimo


int obtenerMaximo(int arr[]){
int notalta = 0;

for(int calificacion = 0; calificacion < TAM; calificacion++){

    if( arr[calificacion] > notalta ){
      notalta = arr[calificacion];

    }

}

  return notalta;
}// fin funcion obtener maximo


double obtenerPromedio(int arr[]){
  int total = 0;

  for(int calificacion = 0; calificacion < TAM; calificacion++ ){
    total = total + arr[calificacion];
  }//end of for loop

  return (double)total/TAM;
}// fin funcion obtenerPromedio


void imprimirBarras(int arr[]){
  int letra = 254;
  char letter = letra;
  // arr es el arreglo con las  notas
cout <<"Distribución de calificaciones"<<endl;
int tamanioFreq = 11;

  for(int i = 0; i < TAM; i++){
      if(i == 0){
        cout <<" 0-9: ";
      }else if(i == 10){
        cout <<" 100: ";
      }else{
        cout << i * 10<<"-"<<(i*10) + 9 <<": ";
      }

      for(int estrellas = 0; estrellas < arr[i]; estrellas++)
          cout << letter;

    cout <<endl;
  }//fin del for externo


}//FIN funcion imprimirBarras


void imprimirCalificaciones(int arr[]){
for(int i = 0; i < TAM;i++){
  cout <<"Estudiante "<<setw(2)<< i + 1 <<": "<<setw(3)
  <<arr[i]<<endl;

}

}// fin funcion imprimirCalificaciones


void ingresarCalificaciones(int arr[]){

for(int i = 0; i < TAM; i++){
  cin >> arr[i];
  if(arr[i] < 0){
    cout <<"Error, inténtelo de nuevo"<<endl;

    while(arr[i] < 0){
      cout <<"error:"<<endl;
      cin >> arr[i];
    }//fin del while


  }//fin del if


}//fin del for


}// fin funcion ingresarCalificaciones




/*
*/
