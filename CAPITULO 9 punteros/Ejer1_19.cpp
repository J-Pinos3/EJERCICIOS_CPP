#include <iostream>
#include <new>
using namespace std;

int main(int argc, char const *argv[]) {

    int *arr_PTR = new int[10];

    cout <<"Ingrese los elementos del array (10) "<<endl;

    for(int i = 0; i < 10; i++){
        cout <<"elemento "<<i+1<<": ";
        cin >> *(arr_PTR+i);

        cout <<endl;
    }


    cout <<endl<<endl<<endl<<"Los elementos ingresados y sus direcciones son: "<<endl;
    for(int i = 0; i < 10; i++){
      cout << arr_PTR[i] << "     " << arr_PTR + i <<endl;
    }


    delete[] arr_PTR;
  return 0;
}
