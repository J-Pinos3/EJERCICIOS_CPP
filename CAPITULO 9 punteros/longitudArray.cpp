#include <iostream>
using namespace std;
 
int len(int *pt);

int main(int argc, char const *argv[])
{
    
    int arr[10] = {1,2,3,4,5,6,-1,7,8,9};
    
    cout <<"La longitud valida del array es: " << len(arr) <<endl;


    return 0;
}

int len(int *pt){

    int *p = pt;
    for(p = pt; *p != -1; ++p){
        ;
    }

    //para obtener la longitud válida, se resta p(la última dirección de memoria) de la dirección
    //del primer elemento
    return(p-pt);
}