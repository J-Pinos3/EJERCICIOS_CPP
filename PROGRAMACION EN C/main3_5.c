#include <stdio.h>

#define FIL 3
#define COL 2

int main() {
    int fila, columna;
    char barcos[FIL][COL] = {{'X','O'},{'O','X'},{'X','X'}};

    printf("Introduce una fila: ");
    scanf("%d", &fila);
    printf("Introduce una columna: ");
    scanf("%d", &columna);
    printf("En la fila %d, columna %d, encontramos: %c\n", fila, columna, barcos[fila-1][columna-1]);

    printf("Introduce una fila: ");
    scanf("%d", &fila);
    printf("Introduce una columna: ");
    scanf("%d", &columna);
    printf("En la fila %d, columna %d, encontramos: %c\n", fila, columna, barcos[fila-1][columna-1]);

    return 0;
}
