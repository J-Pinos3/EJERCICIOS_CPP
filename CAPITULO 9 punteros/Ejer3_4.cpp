#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]) {

    default_random_engine motor(static_cast<unsigned int>( time(0) ));
    uniform_int_distribution<int> intAleatorio(-10,10);

    int n, *vectorr;

    cout <<"Ingrese el tamaño del vector: ";
    cin >> n;
    vectorr = new int[n];

    for(int i = 0; i < n; i++){
        vectorr[i] = intAleatorio(motor);
    }


    for(int i = 0; i < n; i++){
      cout << vectorr[i] << " ";
    }

    cout <<endl<<endl;


    delete[] vectorr;


  return 0;
}
