//código en C++
#include <iostream>
#include <thread>
using namespace std;

//FUENTE: https://www.youtube.com/watch?v=Peujk88XSnY&t=287s

void *info(void* args){
int i = 0;
string arr[5] ={ "spotify","reaper","audacity","ibanez","jackson"};

  for(i = 0; i < 5; i++ ){
    cout <<"process: "<<arr[i]<<endl;
  }

  return NULL;
}


int main() {

const int N_hilos = 10;

pthread_t procesos[N_hilos]; // se crea un arreglo del tipo de datos pthread_t

  for(int i = 0; i < N_hilos; i++){
    // la función pthread_create recibe como parámetros la direción de la variable pthread_t
    //un parámetro de atributos del hilo, la función con la que se trabajará
    int valor = pthread_create(&procesos[i], NULL, info, NULL);

      if(valor != 0){
        cout <<"error al crear el hilo"<<endl;
      }


  }

pthread_exit(NULL); //sale del hilo


    return 0;
}
