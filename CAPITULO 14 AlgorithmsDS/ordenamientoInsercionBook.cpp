#include <iostream>
using namespace std;

void insertionSort(int *mesg, const int n){

    for( int i = 1; i < n; i++ ){
        int current = *(mesg+i);
        int j = i-1; //one-before element

        while( j>=0 && mesg[j]>current ){
            //assing to the current position the 
            mesg[j+1] = mesg[j];//j+1 = current position
            j--;
        }
        mesg[j+1] = current;
    }

}

int main(){
    const int size = 9;
    int mensaje[size] = {6,9,8,4,0,7,3,5,1};
    
    for(auto i : mensaje){
        cout <<i << " ";
    }
    cout << endl;
    insertionSort(mensaje, size);
    for(auto i : mensaje){
        cout <<i << " ";
    }
    cout << endl;
    return 0;
}
