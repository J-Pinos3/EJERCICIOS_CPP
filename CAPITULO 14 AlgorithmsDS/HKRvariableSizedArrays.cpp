#include <iostream>
using namespace std;

int main(){
    int numArrays = 0, numQueries = 0;

    cin >> numArrays >> numQueries;

    //double pointer (2D ARRAY) so arr points to each element( pointer )
    //of a array of int pointers

    int **arr = new int*[numArrays];

    for(int i = 0; i < numArrays; i++){
        int size;
        cin >> size;

        arr[i] = new int[size];
        for(int j = 0; j < size; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < numQueries; i++){
        int i1 = 0, i2 = 0;
        cin >> i1 >> i2;
        cout << arr[i1][i2] << endl;
    }

    for(int i = 0; i < numArrays; i++){
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}