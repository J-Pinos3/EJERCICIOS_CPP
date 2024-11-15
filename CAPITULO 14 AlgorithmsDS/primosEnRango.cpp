#include <iostream>
using namespace std;

void ordenarEntrada(int* num1, int* num2){

    if(*num1 > *num2){
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}


bool esPrimo(int x){

    //un primo solo es divisible para si mismo y para la unidad
    int contador = 0;
    int i = 1;
    while(i <= x){
        if(x % i == 0){
            contador++;
        }
        i++;
    }

    //un primo solo tiene 2 divisores

    return contador == 2;
}

void primos(int min, int max){
    for(int i = min; i < max; i++){
        cout << "El n"<<char(163)<<"mero: " << i << " es: ";
        cout << esPrimo(i) ? "primo" : "no es primo";
        cout << endl;
    }
}

int main()
{

    int min = 0, max = 0;
    cout <<"Ingrese 2 n"<<char(163)<<"meros: ";
    cin >> min >> max;

    ordenarEntrada(&min, &max);
    primos(min, max);


    return 0;
}
