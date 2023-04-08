#include <stdio.h>
#include <stdlib.h>

#define PIES_POR_CM 0.0328

int main() {

int ancho, largo;
double ancho_p, largo_p;

printf("Ingrese el ancho: ");
scanf("%d", &ancho);
//ancho_p = ancho * PIES_POR_CM;
ancho_p = PIES_POR_CM * ancho;//SI PONGO ; EN EL DEFINE DEL MACRO, PROGRAMA YA NO COMPILARÁ se pone ancho_P = 0.0.3; * ancho
printf("\n");

printf("Ingrese el largo: ");
scanf("%d", &largo);
largo_p = largo * PIES_POR_CM;
printf("\n %d x %d cm son: %.3lf x %.3lf pies. \n", ancho, largo, ancho_p, largo_p);




  return 0;
}
