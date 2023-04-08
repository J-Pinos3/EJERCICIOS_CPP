/*
Escribe un programa que lea un número n desde la entrada estándar y
luego solicite al usuario ingresar n números enteros.
El programa deberá crear un arreglo dinámico de tamaño n, almacenar los valores ingresados
por el usuario en el arreglo y luego calcular la suma de todos los elementos del arreglo.
Finalmente, el programa deberá mostrar la suma de los elementos en la salida estándar.
*/

#include <iostream>
#include <new>

void ingresar_datos(int *arr, const int n);
void mostrar_datos(const int *arr, const int n, double (*func) (const int *arr,  const int n) );
double suma_datos(const int *arr,  const int n);

int main(int argc, char const *argv[])
{
    
    int size = 0;
    int *arreglo = nullptr;

    std::cout << "Ingrese N datos: ";
    std::cin >> size;

    arreglo = new int[size];

    ingresar_datos(arreglo, size);

    std::cout << "\n------------------------------------------------------------------" << std::endl;

    mostrar_datos(arreglo, size, suma_datos);


    delete[] arreglo;
    
    return 0;
}


void ingresar_datos(int *arr, const int n){
    std::cout << "Ingrese " << n << " números: " << std::endl;

    for(int i = 0; i < n ; i++){
        std::cout <<i+1 <<": ";
        std::cin >> arr[i];
    }
    std::cout << std::endl;
}

double suma_datos(const int *arr,  const int n){
    double suma = 0.0;
    
    for(int i = 0; i < n ; i++){
        suma += *(arr+i);
    }

    return suma;
}

void mostrar_datos(const int *arr, const int n, double (*func) (const int *arr,  const int n) ){
    std::cout <<"Los datos ingresados son: " << std::endl;

    for(int i = 0; i < n ; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl <<"La suma de los datos ingresados es: " << func(arr, n) << std::endl;


}
