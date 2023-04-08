#include <iostream>
#include <iomanip>

using namespace std;


int main (){
//total de estudiantes = 10
int total =1;
short int calificacion;
int contador1 = 0;
int contador2 = 0;

cout<<"Ingrese (1) si el estudiante aprobo \n"<<
"Ingrese (2) si el estudiante reprobó"<<endl;

while( total <= 10){
cout <<"Nota: ";
cin >> calificacion;

  if (calificacion == 1){
    contador1 = contador1 + 1;
  }else if(calificacion == 2){
        contador2 = contador2 + 1;
        }

      total++;
}// fin del while

cout<<setw(34)<<"|El total de aprobados es| "<<contador1<<endl;
cout<<setw(35)<<"|El total de reprobados es| "<<contador2<<endl;

if(contador1 >= 8){
  cout <<"El instructor de los alumnos tiene un bono"<<endl;
}


  return 0;
}
