#include <iostream>
using namespace std;

const int FILAS = 3;
const int COLUMNAS = 2;

void llenar_matriz(int **A, int f, int c);
void mostrar_matriz(int **A, int f, int c);

int main(int argc, char const *argv[]) {

  int matriz1[FILAS][COLUMNAS];

  int *Ptr_matriz = &matriz1[0][0];
  llenar_matriz(&Ptr_matriz, FILAS, COLUMNAS);
  cout <<endl;
 mostrar_matriz(&Ptr_matriz, FILAS, COLUMNAS);


  return 0;
}

void llenar_matriz(int **A, int f, int c){

    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cin >> *(*A + c*i +j );
        }
    }

}//FIN DE LA FUNCIÓN LLENAR MATRIZ


void mostrar_matriz(int **A, int f, int c){

  for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            //cout << "  " << *(*A + c*i +j)<<"  ";
            //cout << "  " <<A[i][j]<<"  ";// NO FUNCA
            //cout << "  " <<(*A+i*c)[j]<<"  ";
            cout << "  " << *( *A + i*c + j )<<"  ";
            //cout << "  " << *( (*(A+i)) +j )<<"  "; SOLO MUESTRA LA PRIMERA FILA
            //cout << "  " << *( A[i] +j )<<"  "; SOLO MUESTRA LA PRIMERA FILA
        }
        cout << endl;
  }


}//FIN DE MOSTRAR MATRIZ
