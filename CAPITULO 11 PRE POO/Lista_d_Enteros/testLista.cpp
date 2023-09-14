#include <iostream>
#include <cctype>
#include <cassert>
#include "lista.h"
using namespace std;
using namespace umalcc;
//LIBRO U DE MÁLAGA
void leer_pos(int &pos, int limite);
void leer_dato(int& dato);

void leer(ListaInt& lista);
void escribir(const ListaInt& lista);

void prueba_asg(const ListaInt& lista);

char menu();


//FUNCIÓN MAIN
int main(){

    ListaInt lista;
    int dato;
    int pos;
    char op = ' ';
    
    do{
        op = menu();
        switch(op){

            case 'A':{
                leer(lista);
                escribir(lista);
            }
            break;


            case 'B':{
                lista.clear();
                escribir(lista);
            }
            break;


            case 'C':{
                if(lista.llena()){
                    cout << "Error, lista llena \n";
                
                }else{
                    leer_pos(pos, lista.size()+1);
                    leer_dato(dato);
                    lista.insertar(pos, dato);
                    escribir(lista);
                }
            }
            break;


            case 'D':{
                if(lista.size() == 0){
                    cout << "Error, lista vacía \n";
                
                }else{
                    leer_pos(pos, lista.size());
                    lista.eliminar(pos);
                    escribir(lista);
                }

            }
            break;


            case 'E':{
                if(lista.size() == 0){
                    cout << "Error, lista vacía \n";
                
                }else{
                    leer_pos(pos, lista.size());
                    cout << "Lista[" << pos << "] = " << lista.acceder(pos) << endl;
                    escribir(lista);
                }
            }
            break;


            case 'F':{
                if(lista.size() == 0){
                    cout << "Error, lista vacía \n";
                
                }else{
                    leer_pos(pos, lista.size());
                    leer_dato(dato);
                    lista.modificar(pos, dato);
                    escribir(lista);
                }

            }
            break;


            case 'G':{
                prueba_asg(lista);
            }
            break;

        }//fin del switch
    }while(op != 'X');





    return 0;
}//FIN DEL MÉTODO DE MAIN


void leer_pos(int& pos, int limite)
{
    assert(limite > 0);
    do {
        cout << "Introduzca posicion ( < " << limite << " ): " ;
        cin >> pos;
    } while (pos < 0 || pos >= limite);
}
//FIN DE LA FUNCIÓN LEER_POS


void leer_dato(int& dato)
{
    cout << "Introduzca un dato: " ;
    cin >> dato;
}
//FIN DE LA FUNCIÓN LEER_DATO


void leer(ListaInt& lista)
{
    int dato ;
    lista.clear() ;
    cout << "Introduzca datos (0 -> FIN): " << endl ;
    cin >> dato ;
    while ((dato != 0)&&( ! lista.llena())) {
        lista.insertar(lista.size(), dato) ;
        cin >> dato ;
    }
}
//FIN DE LA FUNCIÓN LEER


void escribir(const ListaInt& lista)
{
    cout << "Lista: " ;
    for (int i = 0 ; i < lista.size() ; ++i) {
        cout << lista.acceder(i) << " " ;
    }
    cout << endl ;
}
//FIN DE LA FUNCIÓN ESCRIBIR


void prueba_asg(const ListaInt& lista)
{
    cout << "Constructor de Copia" << endl ;
    ListaInt lst(lista) ;
    escribir(lst) ;
    cout << "Operador de Asignacion" << endl ;
    lst = lista ;
    escribir(lst) ;
}
//FIN DE LAFUNCIÓN PRUEBA_ASG


char menu()
{
    char op ;
    cout << endl ;
    cout << "X. Fin" << endl ;
    cout << "A. Leer Lista" << endl ;
    cout << "B. Borrar Lista" << endl ;
    cout << "C. Insertar Posicion" << endl ;
    cout << "D. Eliminar Posicion" << endl ;
    cout << "E. Acceder Posicion" << endl ;
    cout << "F. Modificar Posicion" << endl ;
    cout << "G. Prueba Copia y Asignacion" << endl ;
    do {
        cout << endl << " Opcion: " ;
        cin >> op ;
        op = char(toupper(op)) ;
    } while ( !((op == 'X')||((op >= 'A')&&(op <= 'G'))) ) ;
    cout << endl ;
    return op ;
}
//FIN DE LA FUNCIÓN MENU
