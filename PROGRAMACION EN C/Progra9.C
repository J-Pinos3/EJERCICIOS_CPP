#include <stdio.h>

#define MULT(A, B) A*B

int main() {
    printf("MULT(5,5): %d\n", MULT(5,5));
    printf("MULT(2+3,3+2): %d\n", MULT(2+3,3+2)); //13

    //XQ La solución es 25 y 13. Como las macros se sustituyen antes de compilar el programa,
    //en el segundo printf encontramos como segundo argumento "2+3*3+2", que es 13 según la precedencia de operadores.
    return 0;
}
