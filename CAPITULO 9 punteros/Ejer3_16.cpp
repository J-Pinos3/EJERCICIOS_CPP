#include <iostream>
using namespace std;

void pedirNombre(char *nombre);
int contarVocales(char *nombre);


int main(int argc, char const *argv[])
{
    char nombre[20];
    
    pedirNombre(nombre);
    cout << nombre << "tiene: "<<contarVocales(nombre)<< "vocales";

    return 0;
}


void pedirNombre(char *nombre){
    cout <<"Ingresa tu nombre: ";
    cin >> nombre;
}
int contarVocales(char *nombre){
    int contador = 0;
    while(*nombre != '\0'){
        switch(*nombre){
            case 'A': contador++; break;
            case 'E': contador++; break;
            case 'I': contador++; break;
            case 'O': contador++; break;
            case 'U': contador++; break;
            case 'a': contador++; break;
            case 'e': contador++; break;
            case 'i': contador++; break;
            case 'o': contador++; break;
            case 'u': contador++; break;

        }
        nombre++;
    }
    return contador;
}