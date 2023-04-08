#include <stdio.h>
#include <stdlib.h>

int main() {

char Sexo = 'M';
unsigned short cp = 2764;
unsigned short hp = 159;
double Peso= 183.0;
double Altura = 2.32;
int caramelos = 266;

printf("Ingrese su sexo: ");
scanf("%c", &Sexo );      //scanf("%c\n", &Sexo ); CON EL \n SUELE DAR PROBLEMAS
fflush(stdin);
printf("\n");

printf("Ingrese CP: ");
//fflush(stdin);
scanf("%hu",&cp);
printf("\n");

printf("Ingrese HP: ");
//fflush(stdin);
scanf("%hu",&hp);
printf("\n");

printf("Ingrese su Peso: ");
//fflush(stdin);
scanf("%lf", &Peso);
printf("\n");

printf("Ingrese su Altura: ");
//fflush(stdin);
scanf("%lf", &Altura);
printf("\n");

printf("Ingrese la cantidad de caramelos: ");
//fflush(stdin);
scanf("%d", &caramelos);


system("pause");
system("cls");


printf("Sexo: %c\n", Sexo);
printf("CP: %hu\n", cp);
printf("HP: %hu\n", hp);
printf("Peso: %lf\n", Peso);
printf("Altura: %lf\n", Altura);
printf("Caramelos: %d\n", caramelos);

    return 0;
}
