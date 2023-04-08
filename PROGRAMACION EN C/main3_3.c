#include <stdio.h>

#define PARTIDAS 5

int main() {
    double kassadin[PARTIDAS]={158,139,114,143,97}, ahri[PARTIDAS]={126,101,140,121,89}, jax[PARTIDAS]={106,67,75,111,135};

    printf("Media experiencia últimas 5 partidas con Kassadin: %.2lf\n", (kassadin[0]+kassadin[1]+kassadin[2]+kassadin[3]+kassadin[4])/PARTIDAS);
    printf("Media experiencia últimas 5 partidas con Ahri: %.2lf\n", (ahri[0]+ahri[1]+ahri[2]+ahri[3]+ahri[4])/PARTIDAS);
    printf("Media experiencia últimas 5 partidas con Jax: %.2lf\n", (jax[0]+jax[1]+jax[2]+jax[3]+jax[4])/PARTIDAS);
    
    return 0;
}
