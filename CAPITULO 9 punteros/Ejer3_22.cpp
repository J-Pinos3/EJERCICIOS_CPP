#include <iostream>
#include <new>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
/*
5. Write a two-player game of "connect 4"31 where the user can set the width and height of the 
board and each player gets a turn to drop a token into the slot. Display the board using + for one 
side, x for the other, and _ to indicate blank spaces.
*/

void mostrarTablero(int **p, const int filas, const int columnas);
void turnoJugador(char &turno, string name1, string name2, int &fila1, int&columna1, int **&p, const int filas, const int columnas);
bool check(int **p, bool &empate, const int filas, const int columnas);

int main(int argc, char const *argv[])
{
    int filas = 0, columnas = 0;
    char turno = 'x';
    bool empate = false;
    int f = 0, c = 0;
    string nom1 = "José", nom2 = "Juan";
    cout <<"ingrese el número de filas y de columnas: ";  cin >> filas >> columnas;
    
    int  **tablero = nullptr;
    tablero = new int*[filas];

    for(int i = 0; i < filas; i++){
        //cout <<"DENTRO del for que asigna punteros de main"<<endl;
        tablero[i] = new int[columnas];
    }

    //cout <<"DENTRO de main"<<endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            tablero[i][j] = 0;
        }
    }
    

    cout << endl;
        mostrarTablero(tablero, filas, columnas);
        turnoJugador(turno, nom1, nom2, f, c, tablero, filas, columnas);
    while(check(tablero, empate, filas, columnas)){
        //cout <<"DENTRO del while de main"<<endl;
        mostrarTablero(tablero, filas, columnas);
        turnoJugador(turno, nom1, nom2, f, c, tablero, filas, columnas);
        check(tablero, empate, filas, columnas);
    }

    if(turno == 'x' && empate == false){
        cout <<"El Jugador: "<<nom2<<" Ha Ganado !!"<<endl;

    }else if(turno == '+' && empate == false){
        cout <<"El Jugador: "<<nom1<<" Ha Ganado !!"<<endl;
    }else{
        cout <<"EMPATE !!!"<<endl;
    }

    for(int i = 0; i < filas; i++){
        delete[] tablero[i];
    }

    delete[] tablero;

    return 0;
}




void mostrarTablero(int **p, const int filas, const int columnas){

    cout <<endl<<"Jugador 1 <x> \tJugador 2 <+>"<<endl<<endl;
    //PRIMERA FILA
    cout << "  ";
    for(int j = 0; j < columnas; j++){
        cout << j + 1<< " ";
    }
    cout << endl;

    //resto del tablero
    for(int i = 0; i < filas; i++){
        cout << "| ";
        for(int j = 0; j < columnas; j++){
            char c = ' ';
            switch(p[i][j]){
                case 0: c='_'; break;
                case 1: c='x'; break;
                case 2: c='+'; break;
                default: c='?'; break;
            }
            cout << c << " ";
        }
        cout << "|" << endl;
    }

    //ultima fila
    cout << "  ";
    for(int j = 0; j < columnas; j++){
        cout << j + 1<< " ";
    }
    cout << endl;

}//FIN DE LA FUNCIÓN MOSTRAR TABLERO


void turnoJugador(char &turno, string name1, string name2,  int &fila1, int&columna1, int **&p, const int filas, const int columnas){

    if(turno == 'x'){
        cout <<setw(15)<<"Turno de: "<<name1<<" --> [x]"<<endl;
    }else{
        cout <<setw(15)<<"Turno de: "<<name2<<" --> [+]"<<endl;
    }

    int fila_aux = 0, col_aux = 0;
    cout <<"Ingrese la posición de su figura(fila x columna): "; cin >> fila_aux >> col_aux;
    cin.ignore();
    cout << endl;


    if (p[fila_aux][col_aux ] == 0){
        //cout <<"Aquí---"<<endl;
        fila1 = fila_aux;
        columna1 = col_aux;
    }

    if( (turno == 'x')&&(p[fila1][columna1] != 1)&&(p[fila1][columna1] != 2)  ){
    //si la posicion no es x ni o, entonces ese espacio está libre
        p[fila1][columna1] = 1;
        turno = '+';//esta línea es para que le toque al siguiente jugador

    }else if( (turno == '+')&&(p[fila1][columna1] != 1)&&(p[fila1][columna1] != 2) ){
    //si la posicion no es x ni o, entonces ese espacio está libre
        p[fila1][columna1] = 2;
        turno = 'x';//esta línea es para que le toque al siguiente jugador

    }else{
        cout <<"Espacio lleno, elige optra posicion"<<endl;
        turnoJugador(turno, name1, name2, fila1, columna1, p, filas, columnas);
    }

    //cout <<"Aqui1"<<endl;
    mostrarTablero(p, filas, columnas);
    system("pause");
    system("cls");

}//FIN DE LA FUNCIÓN TURNOJUGADOS


bool check(int **p, bool &empate, const int filas, const int columnas){
    

    bool horizon = false;
    int contadorOK = 0;

    for(int i = filas -1; i >=0 && contadorOK !=3; i--){
        contadorOK = 0;
        for(int j = 0; j < columnas-1; j++){
            
            if( p[i][j] != 0 && (p[i][j] == p[i][j+1]) && contadorOK !=3 ){
                contadorOK++;
                horizon = true;
            }else{
            
                horizon = false;
                break;
            }
            
        }
    }
    
   // cout <<"\nhorizon: " << horizon <<endl;
    
    
    //ahora verticales    
    bool vertica = false;
    
    
    for(int j = 0; j < columnas-1 && contadorOK !=3; j++){
            contadorOK=0;
        for(int i = filas -1; i >0; i--){
                    
            if( p[i][j] != 0 && (p[i][j] == p[i-1][j]) && contadorOK !=3 ){
                contadorOK++;
                vertica = true;
            }else{
                vertica = false;
                //
                break;
            }   
        }
    }
    //cout <<"vertica: " << vertica <<endl;
    
    
    if(vertica == true || horizon == true ){
        cout <<"Here"<<endl;
        return false;//al retornar false se saldrá del while que maneja el juego
    }


    bool dere = false;
    contadorOK = 0;
    //diagonal hacia la derecha
    
    for(int k = 0; k < columnas && contadorOK != 3; k++){
        int i = filas -1, j =k;
        while(i > 0 && j < columnas && contadorOK != 3){
            if( p[i][j] != 0 && p[i][j] == p[i-1][j+1] && contadorOK != 3 ){
                contadorOK++;
                dere = true;
            }else{
                break;
            }
            i--;
            j++;
        }
        if(contadorOK == 3){ break; }
    }
    
    //cout <<"dere: " << dere<<endl;
    
    
    
    bool izq = false;
    contadorOK = 0;
    //diagonal hacia la izquierda
    for(int k = columnas-1; k > 0 && contadorOK != 3; k--){
        int i = filas -1, j =k;
        while(i > 0 && j > 0 && contadorOK != 3){
            if( p[i][j] !=0 && p[i][j] == p[i-1][j-1] && contadorOK != 3 ){
                contadorOK++;
                izq = true;
            }else{
                break;
            }
            i--;
            j--;
        }
        if(contadorOK == 3){ break; }
    }
    //cout <<"izq: " << izq<<endl;
    
    if(dere == true || izq == true ){
        cout <<"Here2"<<endl;
        return false;//;al retornar false se saldrá del while que maneja el juego
    }


    /*
    for(int i = 0;i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(p[i][j] == 0){
                empate = false;
                return empate;
            }
        }
    }
    */
    
    empate = true;
    return empate;

}//FIN DE LA FUNCIÓN CHECK