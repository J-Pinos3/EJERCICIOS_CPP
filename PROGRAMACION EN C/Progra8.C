#include <stdio.h>
/*
#define LUNA 0.1655
#define MARTE 0.3895
#define JUPITER 2.640
#define MILLER 1.3
#define PANDORA 0.8
#define VULCANO 1.4
*/
int main() {

const double peso_tierra = 1.00; //al ser una constante, ya no pouede ser modificada
const double LUNA = 0.1655;
const double MARTE = 0.3985;
const double JUPITER = 2.640;
const double MILLER = 1.3;
const double PANDORA = 0.8;
const double VULCANO = 1.4;

float masa;
double peso_luna, peso_marte, peso_jupiter, peso_miller, peso_pandora, peso_vulcano;
printf("Ingresa tu masa: ");
scanf("%f", &masa);

printf("\n\n");
peso_luna = masa * LUNA;
printf("Tu masa en la Luna es: %lf\n", peso_luna);
peso_marte = masa * MARTE;
printf("Tu masa en Marte es: %lf\n", peso_marte);
peso_jupiter = masa * JUPITER;
printf("Tu masa en Jupiter es: %lf\n", peso_jupiter);
peso_miller = masa * MILLER;
printf("Tu masa en Miller es: %lf\n", peso_miller);
peso_pandora = masa * PANDORA;
printf("Tu masa en Pandora es: %lf\n", peso_pandora);
peso_vulcano = masa * VULCANO;
printf("Tu masa en VULCANO es: %lf\n", peso_vulcano);




  return 0;
}
