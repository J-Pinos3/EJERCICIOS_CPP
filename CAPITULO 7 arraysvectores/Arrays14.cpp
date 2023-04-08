#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;
const int TAMANIO = 10;

int main() {

array<int,TAMANIO> arr1 = {1,5,8,0,6,4,10,9,7,3};
/*
cout << arr1[-1]<<endl;
cout << arr1[-2]<<endl;         VALORES BASURA
cout << arr1[-3]<<endl;

cout << arr1.at(-1)<<endl;
cout << arr1.at(-2)<<endl;      SE GENERA UN ERROR at se encarga de chequear qye los índices sean válidos
cout << arr1.at(-3)<<endl;
*/


for(int i = 0; i < arr1.size(); i++){
    cout <<"< "<<arr1.at(i)<<" >:";

    for(int estrella = 1; estrella <= arr1[i]; estrella++){
        cout <<char(254);
    }
    cout <<endl;
}



  return 0;
}
