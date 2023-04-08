#include <stdio.h>

#define CAMPEONES 3
#define PARTIDAS 5

int main() {
    double experiencias[CAMPEONES][PARTIDAS]={{158,139,114,143,97}, {126,101,140,121,89}, {106,67,75,111,135}};

    printf("Media experiencia últimas 5 partidas con Kassadin: %.2lf\n", (experiencias[0][0]+experiencias[0][1]+experiencias[0][2]+experiencias[0][3]+experiencias[0][4])/PARTIDAS);
    printf("Media experiencia últimas 5 partidas con Ahri: %.2lf\n", (experiencias[1][0]+experiencias[1][1]+experiencias[1][2]+experiencias[1][3]+experiencias[1][4])/PARTIDAS);
    printf("Media experiencia últimas 5 partidas con Jax: %.2lf\n", (experiencias[2][0]+experiencias[2][1]+experiencias[2][2]+experiencias[2][3]+experiencias[2][4])/PARTIDAS);
    
    return 0;
}
