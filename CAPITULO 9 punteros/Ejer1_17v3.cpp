#include <iostream>
using namespace std;

int &valor_posicion_par(int a[], int i);


int main(int argc, char const *argv[])
{
    
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            valor_posicion_par(arr1, i) *= 10;
            cout << arr1[i] << endl;
        }
    }
    

    return 0;
}


int &valor_posicion_par(int a[], int i){
    return a[i];
}