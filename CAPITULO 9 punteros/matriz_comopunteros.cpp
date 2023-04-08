#include <iostream>
using namespace std;

int main(){



    int matriz[3][4] = {   {2,4,6,8},{1,3,5,7},{10,20,30,40}   };

    cout <<"Los elementos de la matriz son: "<<endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout <<"  |  "<<*( *(matriz+i)+j )<<"  |  ";
            //cout <<"  |  "<<*(matriz[i]+j)<<"  |  ";
            //cout <<"  |  "<< *(*matriz +i*4 +j) <<"  |  ";
        }
        cout <<endl;
    }   


    return 0;
}