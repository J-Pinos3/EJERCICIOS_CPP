#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

int matriz1[5][5] = {
                    {1,2,3,4,5},
                    {6,7,8,9,10},
                    {2,4,6,8,10},
                    {12,14,16,18,20},
                    {10,20,30,40,50}
                    };


for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        cout <<"  |  "<<matriz1[i][j]<<"  |  ";
    }
    cout <<endl;
}

cout <<"\n------------------------------------------\n";


for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        cout <<"  |  "<<*( (*(matriz1+i))+j )<<"  |  ";
        //cout <<"  |  "<<*(matriz1[i]+j)<<"  |  ";
        //cout <<"  |  "<< *(*matriz1 +i*5 +j) <<"  |  ";
    }
    cout <<endl;
}




  return 0;
}
