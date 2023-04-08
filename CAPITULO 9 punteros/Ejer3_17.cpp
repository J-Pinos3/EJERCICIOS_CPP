#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
	char dato;
    Nodo *PunteroNodoAnterior;
};

void agregarPila (Nodo *&pila, int _dato); //Declaracion/Prototipo de la funcion
void quitarNodo(Nodo *&pila, int &n);
void mostrarNodos(Nodo *&pila);

int main(){

	Nodo *pila=NULL; 
    int numero;
    agregarPila(pila, 5);
    agregarPila(pila, 6);
    agregarPila(pila, 7);
    agregarPila(pila, 8);

    mostrarNodos(pila);
    while (pila != NULL){
        quitarNodo(pila, numero);
        /*
        if(pila != NULL){
            cout << numero <<" , ";
        }else{
            cout << numero <<"__ ";
        }
        */
        
    }
    mostrarNodos(pila);
    

	return 0; 
}

void agregarPila (Nodo *&pila, int _dato){     //Definicion de la funcion
	Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=_dato;
    nuevo_nodo->PunteroNodoAnterior=pila;
    pila=nuevo_nodo;   
    
}

void quitarNodo(Nodo *&pila, int &n){

    Nodo *aux = pila;
    n=aux->dato;
    pila = aux->PunteroNodoAnterior;
    delete aux;
}

void mostrarNodos(Nodo *&pila){

    Nodo *temp = pila;

    while(temp != NULL){
        cout << temp->dato << endl;
        temp = temp->PunteroNodoAnterior;
    }

    if(temp == NULL){
        cout <<"No quedan nodos en la pila"<<endl;
    }
    


}