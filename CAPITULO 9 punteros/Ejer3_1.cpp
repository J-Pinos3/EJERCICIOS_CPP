#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    //apuntador no constante a datos no constantes
    //int *cuentaPtr; los datos se pueden modificar desreferenciando al puntero
    //el puntero puede ser modificado y apuntar a otros datos



    //apuntador no constante a datos constantes
    //el puntero se puede modificar para apuntar a cualquier otro dato válido
    //los datos a los que apunta no pueden ser modificados
    //puede ser usado para que un arreglo clásico no se modifique
    //const int *cuentaPtr  -> es un apuntador a una constante entera



    //apuntador constante a datos no constantes
    //el puntero siempre apunta a la misma dirección de memoria
    //los datos en esa ubicación se pueden ser modificados
    //se deben inicializar una vez declarados
    //int * const ptr = &x; ptr es un puntero constante a un entero no constante
    //*ptr = 9; se permite
    //ptr = &y; ERROR apunta a otra direccion



    //apuntador constante a datos constantes
    //siempre apunta a la misma dirección de memoria
    //los datos de esa dirección no se pueden modificar con un puntero
    //asi se debe pasar un array clásico a una funcion para no modificarlo
    //const int * const ptr = &k;


  return 0;
}
