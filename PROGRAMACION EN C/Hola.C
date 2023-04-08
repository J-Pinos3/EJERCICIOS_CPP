#include <stdio.h>

int main() {

  // con printf imprimo datos en pantalla (cout) con scanf ingreso datos por el teclado (cin)

  // %d enteros
  // %c caracteres
  // %f floats
  // %lf double


  printf("¡Hola Mundo, este es un programa en C! \n");
// CON ESTE COMPILADOR LOS COLORES NO SALEN
  printf("\033[31m Intentemos con colores");
/*
    printf(" // ºº--.._ \n");
    printf("||  \033[31m(_)  \033[37m_ º-._ \n");
    printf("||    _ \033[31m(_)    \033[37mº-.. \n");
    printf("||   \033[31m(_)   \033[37m__..-º \n");
    printf(" \033[37m\\__..--ºº \n");
*/



  return 0;
}
/*

Si queremos que el texto se imprima de un color diferente al que aparece por defecto (depende del entorno, en OnlineGDB es blanco), hay que añadir el siguiente código antes del texto:

Negro: \033[30m
Rojo: \033[31m
Verde: \033[32m
Amarillo: \033[33m
Azul: \033[34m
Morado: \033[35m
Turquesa: \033[36m
Blanco: \033[37m
En cuanto al estilo, encontramos:

Negrita: \033[1m
Cursiva: \033[3m
Subrayado: \033[4m
Tachado: \033[9m
Es posible combinar color y estilo añadiendo ambos códigos al texto. Para volver al formato básico, escribimos \033[0m tras el último carácter.











*/
