#include <stdio.h>
#include <stdlib.h>

int main() {

printf("Ingremento y Decremento con SUMAS\n");
int x = 0, y;
printf("Prefijo\n");
x = 3;
y = ++x;
printf("x =%d \ny =%d \n\n\n", x, y);

printf("Postfijo\n");
x = 3;
y = x++;
printf("x =%d \ny =%d \n\n\n", x, y);



printf("Ingremento y Decremento con RESTAS\n");
int z = 3, w;
printf("Prefijo\n");
z = 3;
w = --z;
printf("z =%d \nw =%d \n\n\n", z, w);

printf("Postfijo\n");
z = 3;
w = z--;
printf("z =%d \nw =%d \n\n\n", z, w);


double cociente;

  cociente = 5/2;
printf("%lf", cociente);// me devuelve 2.0 xq  5 y 2 son enteros
printf("\n");
cociente = 5.0/2;
printf("%lf", cociente);// me devuelve 2.0 xq  5 y 2 son enteros


    return 0;
}
