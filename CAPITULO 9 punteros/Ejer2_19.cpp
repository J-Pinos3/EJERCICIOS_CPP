#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) {

    int i, j, n;
    int **m;
    //tipedef int* col;

    cout <<"Ingrese la dimension de m: ";       cin >> n;
    m = new int*[n];//reserva memoria para n arreglos de punteros punteros


    for(i = 0; i < n; i++){
        m[i] = new int[n];
        for(j = 0; j < n; j++){
          *(*(m+i)+j) = 10 * (i+1);
          //m[i][j]
        }
    }


    cout << setw(30) << "Matriz con indexacion!" <<endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout <<"  "<<m[i][j];
        }
        cout <<endl;
    }



    cout << endl << endl << setw(28) << "Matriz con punteros!" <<endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout <<"  "<< *(*(m+i)+j);
        }
        cout <<endl;
    }


    for(i = 0; i < n; i++){
      delete[] m[i];
    }

    delete[] m;

  return 0;
}
