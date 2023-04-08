#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int arr[10] = {};
    int *arr_Ptr = arr;
    int menor = 10000;

    cout <<"Ingrese los elementos del arreglo"<<endl;
    for(int i = 0; i < 10; i++){
        cout <<i+1<<": ";
        cin >> *(arr_Ptr+i);

        if( *(arr_Ptr+i) < menor ){
            menor = *(arr_Ptr+i);
        }

    }

    cout <<endl<<endl;
    cout <<"Los elementos ingresados fueron";
    for(int i = 0; i < 10; i++){
        cout <<arr[i]<<" ";
    }

    cout <<endl<<"Y el menor de ellos fue: "<< menor  <<endl;





  return 0;
}
