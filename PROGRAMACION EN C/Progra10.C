#include <stdio.h>
#include <stdlib.h>

#define TAMA 5

int main() {

float datos_Kassadin[TAMA] = {0};
float datos_Ahri[TAMA] = {0};
float datos_Jax[TAMA] = {0};
double sumaKASS = 0, sumaAHR = 0, sumaJAX = 0;



for(int i = 0; i < 5; i++){
  printf("%d\n\n",i+1);

  printf("Dato de Kassadin: ");
  scanf("%lf",&datos_Kassadin[i] );

  printf("\n");

  printf("Dato de Ahri: ");
  scanf("%lf",&datos_Ahri[i] );

  printf("\n");

  printf("Dato de Jax: ");
  scanf("%lf",&datos_Jax[i] );

}

for(int i = 0; i < 5; i++){

  sumaAHR = sumaAHR + datos_Ahri[i];
  sumaKASS = sumaKASS + datos_Kassadin[i];
  sumaJAX = sumaJAX + datos_Jax[i];

}




printf("\n\n\nMedia de experiencia de las últimas 5 partidas con Kassadin: %lf\n\n", sumaKASS/5);
printf("Media de experiencia de las últimas 5 partidas con Ahri: %lf\n\n", sumaAHR/5);
printf("Media de experiencia de las últimas 5 partidas con Jax: %lf\n\n", sumaJAX/5);





  return 0;
}
