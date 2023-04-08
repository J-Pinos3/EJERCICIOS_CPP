#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int arr1[10] = {};
  int *Ptr_arr1 = arr1;

    cout <<"Ingrese los elementos del arreglo"<<endl<<endl;
    for(int i = 0; i < 10; i++){
        cout <<"arr1["<<i+1<<"]: ";
        cin >> *(Ptr_arr1+i);
    }

    cout <<"\n\nORDENANDO EL ARRAY...\n\n";
    int aux = 0;
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if( *(Ptr_arr1 + i) < *(Ptr_arr1+j) ){
                 aux = *(Ptr_arr1 + i);
                 *(Ptr_arr1 + i) = *(Ptr_arr1 + j);
                 *(Ptr_arr1 + j) = aux;
            }
        }
    }




    cout <<endl<<endl<<"Los elementos del arreglo son"<<endl<<endl;
    for(int i = 0; i < 10; i++){
      cout <<"["<<*(Ptr_arr1+i)<<"] ";
    }


  return 0;
}
