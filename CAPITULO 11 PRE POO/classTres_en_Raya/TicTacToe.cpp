#include <iostream>
#include <iomanip>
#include "TicTacToe.h"
using namespace std;


TicTacToe::TicTacToe(){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    }
}


bool TicTacToe::validMove(int r, int c) const{
    return r >= 0 && r < 3 && c >= 0 && c < 3 && board[r][c] == ' ';
}

//debemos especificar que status  es parte de la clase TicTacToe
TicTacToe::Status TicTacToe::gameStatus() const{
    //chequeamos en diagonales

    if(board[0][0] != ' ' && board[0][0] == board[1][1] &&  board[0][0] == board[2][2]){
        return WIN;
    
    }else if( board[0][2] != ' ' && board[0][2] == board[1][1] &&  board[0][2] == board[2][0] ){
        return WIN;
    }

    //chequear en filas
    for(int i = 0; i < 3; i++){
        if( board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            return WIN;
        }
    }

    //chequear en columnas
    for(int i = 0; i < 3; i++){
        if( board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i]){
            return WIN;
        }
    }

    //chequear el juego completo
    for(int i{0}; i < 3; i++){
        for(int j{0}; j < 3; j++){
            if( board[i][j] == ' ' ){//si hay un espacio en blanco, se sigue jugando
                return CONTINUE;
            }
        }
    }

    return DRAW;
}


void TicTacToe::printBoard() const{
    cout <<"   0    1    2\n\n";

    for(int i = 0;i < 3; i++){
        cout << i;

        for(int j = 0; j < 3; j++){
            cout << setw(3) << static_cast<char> (board[i][j]);

            if( j != 2){
                cout << " |";
            }
        }

        if(i != 2){
            cout << "\n ____|____|____\n     |    |    \n";
        }
    }
    cout << "\n\n";

}


void  TicTacToe::makeMove(){
    printBoard();
    while(true){
        if(xoMove('X')) {
            break;
        }else if(xoMove('O')) {
            break;
        }
    }
}

bool TicTacToe::xoMove(int symbol){
    int x, y;

    do
    {
        cout <<"Player " << static_cast<char> (symbol) << " enter move: ";
        cin >>x >> y;
        cout <<"\n";

    }while ( !validMove(x,y) );

    board[x][y] = symbol;
    printBoard();

    Status xoStatus = gameStatus();

    switch (xoStatus)
    {
        case WIN:{
            cout << "Player " << static_cast<char>(symbol) << " wins!\n";
            return true;
        }
        break;

        case DRAW:{
            cout << "Game is a draw!";
            return true;
        }
        break;

        default:{
            //continuar
            return false;
        }
        break;
    }
}