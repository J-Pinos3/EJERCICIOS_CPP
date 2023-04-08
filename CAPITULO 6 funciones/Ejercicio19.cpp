#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/*

(Modificación del juego “Adivina el número”) Modifique el programa del ejercicio 6.34 para contar
el número de intentos que haga el jugador. Si el número es 10 o menos, imprima el mensaje “O ya sabia usted el
secreto, o tuvo suerte!”. Si el jugador adivina el número en 10 intentos, imprima el mensaje “Aja! Sabía
usted el secreto!”. Si el jugador hace más de 10 intentos, imprima el mensaje “Deberia haberlo hecho mejor!”.
¿Por qué no se deben requerir más de 10 intentos? Bueno, en cada “buen intento”, el jugador debe poder eliminar
la mitad de los números. Ahora muestre por qué cualquier número de 1 a 1000 puede adivinarse en 10 intentos o
menos.









*/
int main() {
long long int sec = 8;
int numero, intento ;
int contador = 0;
time(&sec);
srand(unsigned(sec));

cout <<"Tengo un numero entre 1 y 1000"<<endl;
cout <<"Puedes adivinar mi numero?"<<endl;
cout <<"Por favor escribe tu respuesta"<<endl;
numero = 1 + (rand() % 1000);
cin >> intento;
contador+= 1;
while(intento != numero){
    cin>>intento;
    if(intento < numero){
      cout <<"Demasiado bajo, intenta de nuevo"<<endl;
    }else if(intento > numero){
      cout <<"Demasiado alto, intenta de nuevo"<<endl;
    }

    cout <<"Por favor escribe tu respuesta"<<endl;

  contador+= 1;
}


if(contador <= 10){
  cout << "O ya sabia usted el secreto, o tuvo suerte!"<<endl;
}else if(contador == 10){
  cout <<"Aja! Sabía usted el secreto! "<<endl;
}else if(contador > 10){
  cout << "Deberia haberlo hecho mejor!"<<endl;
}




    return 0;
}
