#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {

    float arr1[3] = {2.65, 8.78, 10.14};
    float *Ptr_arr[3];//array de 3 punteros float, cada elemento es un puntero que apunta a float

    for(int i = 0; i < 3; i++){
        Ptr_arr[i] = &arr1[i];
        //*(Ptr_arr +i) = arr1+i;
    }

    for(int i = 0; i < 3; i++){
        //cout<<"arr1 + "<<i<<" = "<<Ptr_arr+i<<endl;
        cout<<"arr1 + "<<i<<" = "<<Ptr_arr[i]<<endl;
    }

    for(int i = 0; i < 3; i++){
        cout <<"arr["<<i<<"] = "<< *Ptr_arr[i]<<endl;
    }




  return 0;
}
