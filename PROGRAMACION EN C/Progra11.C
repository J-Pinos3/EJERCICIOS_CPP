#include <stdio.h>
#include <stdlib.h>

#define COLUMNAS 5
#define FILAS 3

int main() {

double num;
double datos[FILAS][COLUMNAS];
double sumaKASS = 0, sumaAHR = 0, sumaJAX = 0;

for(int i = 0; i < 3; i++){

    for(int j = 0; j < 5; j++){

        if(i == 0){
          printf("Kassadin: ");
          scanf("%lf", &num);
          datos[i][j] = num;
        }else if(i == 1){
          printf("Ahri: ");
          scanf("%lf", &num);
          datos[i][j] = num;
        }else if(i == 2){
          printf("Jax: ");
          scanf("%lf", &num);
          datos[i][j] = num;
        }


    }

}


for(int i = 0; i < 3; i++){

    for(int j = 0; j < 5; j++){

        if(i == 0){
          sumaKASS = sumaKASS + datos[i][j];
        }else if(i == 1){
          sumaAHR = sumaAHR + datos[i][j];
        }else if(i == 2){
          sumaJAX = sumaJAX + datos[i][j];
        }


    }

}


printf("\n\n\nValores del array datos\n\n\n");
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++){
      printf("[ %lf ]", datos[i][j]);
    }
    printf("\n");
}



  return 0;
}
