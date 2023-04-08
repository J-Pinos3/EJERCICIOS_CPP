#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <random>//Herramientas de genereación de #'s aleatorios
#include <ctime>
using namespace std;

int main(){

// AL PONER ENE = 1 FUERZO A QUE LAS CONSTANTES DE ENUMERACION
// ENE FEB MAR... EMPIEZDEN DESDE ENERO (ENE) = 1 HASTA EL 12 XQ AUMENTA DE 1  EN UNO
enum Meses { ENE = 1, FEB, MAR, ABR, MAY, JUN, JUL, AGO, SEP, OCT, NOV, DIC };

Meses mes = FEB; // FEB tiene un equivalente entero y es el 2
// no puedo asignarle otro valor a mes sumandole un equivalente entero (+1)
for(int i = 1; i <= 12; i++){
cout <<"mes: "<<mes<<endl;
//mes = mes + 1;

}

system("pause");
system("cls");

//ENUMERACIONES CON ALCANCE
// SE CREAN EN C++11 PARA EVITAR que
//VARIAS ENUMERACIONES PUEDE QUE SUS ENUMERACIONES TENGAN EL MISMO IDENTIFICADOR
//AL TENER EL MISMO IDENTIFICADOR PUEDEN HABER ERRORES LÓGICOS O DE COMPILACIÓN


/*
LAS ENUMERACIONES CON ALCANCE SE DECLARAN CON
enum class (nombre){};
enum struct (nombre){};
EJEMPLO:

enum class Estado { CONTINUAR, GANO, PERDIO };
SE USARÁ EL OPERADOR ::
Estado :: CONTINUAR;

Esto identifica a CONTINUAR como una constante
en el alcande de la enum class Estado


SE PUEDE ESPECIFICAR EL TIPO DE LAS CONSTANTES DE UNA ENUMERACION
// se usa el oprador (:)
enum class Estado : unsigned int { CONTINUAR, GANO, PERDIO };




*/




// static_cast<unsigned int>( time(0) )  semilla de genreación con base a la hora actual

//TIRAR UN DADO DE SEIS LADOS

// MOTOR DE GENERACIÓN #´S ALEATORIOS
default_random_engine motor( static_cast<unsigned int>( time(0) ) );
uniform_int_distribution<unsigned int> intAleatorio( 1, 6 ); //distribuye unformemente los enteros pseudoaleatorios en un rango espcificado
//uniform_int_distribution<int> intAleatorio( 1, 6 ); // PARECE QUE SI FUNCIONA
              // ENTRE LOS ^ <PUEDE IR CUALQUIER TIPO DE ENTERO>

for(int i = 1; i <= 10; i++){
  cout <<setw(10)<<intAleatorio(motor);

      if( (i % 5) == 0 ){
        cout <<endl;
      }



}



// PAG 257 deitel





/*
VARIABLES LOCALES CON static
Las variables locales que se declaran como static siguen siendo conocidas sólo en la función en la que
se declaran, pero a diferencia de las variables automáticas, las variables locales static retienen sus valores
cuando la función regresa a la función que la llamó



*/




    return 0;
}
