#include <stdio.h>
// %d enteros
// %c caracteres SOLO UN caracter
// %f floats
// %lf double

int main() {
//double a;
int a;
char letra;
float num;


printf("Digita un numero entero: ");
scanf("%d",&a );
printf("El entero ingresado fue: %d",a );

printf("\n\n");

printf("Digita un caracter: ");
fflush(stdin);// DESCARTO LAS POSIBLES ENTRADAS ANTERIORES
scanf("%c",&letra );
printf("La letra ingresada fue: %c \n\n",letra );


printf("Digita un numero real: ");
scanf("%f",&num );
printf("La real ingresado fue: %f \n\n",num );


printf("\n\n\n\n");


double euros;
double dolares;

printf("Introduzca cantidad en dólares: ");
scanf("%lf", &dolares);

euros = dolares * 0.859;
printf("%lf dolares son %lf euros.\n", dolares, euros); //ORIGINAL
printf("%lf dolares son %hu euros.\n", dolares, euros);//%hu es para unsigned short
printf("%lf dolares son %d euros.\n", dolares, euros);//%d es para int
printf("%lf dolares son %o euros.\n", dolares, euros);//%o es para octal sin signo
//printf(" dolares son euros. %lf\n", dolares, euros); es incorrecto

//%s es para cadena de caracteres char*

//%lf es para float con precisión doble souble
//%lf es para float

// LA N ES PARA EL NUMERO DE DECIMALES A MOSTRAR 1,2,3,4,......
//%.nlf es para float con precisión doble souble
//%.nf es para float

//%i es para entero decimal con signo
//%u es para unsigned int

//EN C NO HAY SOBRECARGA DE FUNCIONES U OPERADORES




  return 0;
}
