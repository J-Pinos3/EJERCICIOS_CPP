#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
/*
Write a small tic-tac-toe program that allows two players to play tic-tac-toe competitively. Your
program should check to see if either player has won, or if the board is filled completely (with
the game ending in a tie). Bonus: can you make your program detect if the game cannot be won
by either side before the entire grid is filled?
*/
//https://www.stechies.com/tic-tac-toe-cpp/
const int ORDEN = 3;
void mostrarTABLERO(char tab[][ORDEN]);
void turnoJUGADOR(char& turno, string nombreONE, string nombreTWO, int& pos, int& fila1, int& columna1, char tab[][ORDEN]);
bool check(char tab[][ORDEN], bool& empate);

int main() {

char tablero[ORDEN][ORDEN] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int posicion, fila, columna;
char turno = 'x';
bool empate = false;
string nombre1, nombre2;

cout <<setw(12)<<"| Reglas |"<<endl;
mostrarTABLERO(tablero);
cout <<endl;
cout <<"Ingrese el nombre del jugador 1"<<endl;
cin >> nombre1; cin.sync();

cout <<"Ingrese el nombre del jugador 2"<<endl;
cin >> nombre2; cin.sync();
cout <<endl;


system("pause");
system("cls");

  while( check(tablero, empate) ){
      mostrarTABLERO(tablero);
      turnoJUGADOR(turno, nombre1, nombre2, posicion, fila, columna, tablero);
      check(tablero, empate);
  }

  if(turno == 'x' && empate == false){
    cout <<"El Jugador: "<<nombre2<<" Ha Ganado !!"<<endl;

  }else if(turno == 'o' && empate == false){
    cout <<"El Jugador: "<<nombre1<<" Ha Ganado !!"<<endl;
  }else{
    cout <<"EMPATE !!!"<<endl;
  }


    return 0;
}

void mostrarTABLERO(char tab[][ORDEN]){
  char letra = 95;
  cout <<"Jugador 1 <x> \tJugador 2 <o>"<<endl<<endl;
  cout <<setw(6)<<"|"<<setw(5)<<"|"<<endl;
  cout <<setw(4)<<tab[0][0]<<" | "<<setw(2)<<tab[0][1]<<" | "<<setw(2)<<tab[0][2]<<endl;
  cout <<setw(2)<<letra<<letra<<letra<<letra<<"|"<<letra<<letra<<letra<<letra<<"|"<<letra<<letra<<letra<<letra<<endl;
  cout <<setw(6)<<"|"<<setw(5)<<"|"<<endl;
  cout <<setw(4)<<tab[1][0]<<" | "<<setw(2)<<tab[1][1]<<" | "<<setw(2)<<tab[1][2]<<endl;
  cout <<setw(2)<<letra<<letra<<letra<<letra<<"|"<<letra<<letra<<letra<<letra<<"|"<<letra<<letra<<letra<<letra<<endl;
  cout <<setw(6)<<"|"<<setw(5)<<"|"<<endl;
  cout <<setw(4)<<tab[2][0]<<" | "<<setw(2)<<tab[2][1]<<" | "<<setw(2)<<tab[2][2]<<endl;
  cout <<setw(6)<<"|"<<setw(5)<<"|"<<endl;

}// fin de la función mostrarTABLERO


void turnoJUGADOR(char& turno,string nombreONE, string nombreTWO, int& pos, int& fila1, int& columna1, char tab[][ORDEN]){
 char letra_o_tilde = 162; //ó
  if(turno == 'x'){
    cout <<setw(15)<<"Turno de: "<<nombreONE<<" --> [x]"<<endl;
  }
  if(turno == 'o'){
    cout <<setw(15)<<"Turno de: "<<nombreTWO<<" --> [o]"<<endl;
  }
  cout <<"Ingrese la posicion de su figura"<<endl;
  cin >> pos;
  cin.ignore();

  switch(pos){
      case 1:{
          fila1 = 0;
          columna1 = 0;
      }
      break;

      case 2:{
        fila1 = 0;
        columna1 = 1;
      }
      break;

      case 3:{
        fila1 = 0;
        columna1 = 2;
      }
      break;

      case 4:{
        fila1 = 1;
        columna1 = 0;
      }
      break;

      case 5:{
        fila1 = 1;
        columna1 = 1;
      }
      break;

      case 6:{
        fila1 = 1;
        columna1 = 2;
      }
      break;

      case 7:{
        fila1 = 2;
        columna1 = 0;
      }
      break;

      case 8:{
        fila1 = 2;
        columna1 = 1;
      }
      break;

      case 9:{
        fila1 = 2;
        columna1 = 2;
      }
      break;

      default:{
        cout <<"Error, posicion no válida"<<endl;
      }

  cout <<"Aqui1"<<endl;
  }//fin del switch

  if( (turno == 'x')&&(tab[fila1][columna1] != 'x')&&(tab[fila1][columna1] != 'o')  ){
  //si la posicion no es x ni o, entonces ese espacio está libre
  tab[fila1][columna1] = 'x';
  turno = 'o';//esta línea es para que le toque al siguiente jugador

}else if( (turno == 'o')&&(tab[fila1][columna1] != 'x')&&(tab[fila1][columna1] != 'o') ){
  //si la posicion no es x ni o, entonces ese espacio está libre
  tab[fila1][columna1] = 'o';
  turno = 'x';//esta línea es para que le toque al siguiente jugador

}else{
  cout <<"Espacio lleno, elige optra posicion"<<endl;
  turnoJUGADOR(turno, nombreONE, nombreTWO, pos, fila1, columna1, tab);
    }

cout <<"Aqui1"<<endl;
mostrarTABLERO(tab);
system("cls");

}//fin de la función turno jugador


bool check(char tab[][ORDEN], bool& empate){
for(int i = 0; i < 3; i++){
    if( (tab[i][0]==tab[i][1] && tab[i][0]==tab[i][2])||(tab[0][i]==tab[1][i] && tab[0][i]==tab[2][i]) ) {
      //este if compara que las casillas horizontales y verticales sean iguales
      return false;
    }
}


if( (tab[0][0]==tab[1][1] && tab[0][0]==tab[2][2])||(tab[0][2]==tab[1][1] && tab[0][2]==tab[2][0] ) ){
  //este if compara los diagonales
  return false;
}


for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        if(tab[i][j]!='x' && tab[i][j]!= 'o'){
          return true;
        }
    }
}

empate = true;
return false;

}// fin de la función check
