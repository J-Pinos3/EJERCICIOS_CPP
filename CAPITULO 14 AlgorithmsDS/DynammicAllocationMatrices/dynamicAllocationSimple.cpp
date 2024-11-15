#include<iostream>
using namespace std;

int main()
{
    
    //* Statically */
    //1) An array is a pointer the first element
    //2) A matrix is a array where each element is another array
    //* Dynamically */
    //3) A dynamic array is a  pointer to the first element
    //4) For the matrix, each row would be a row pointer <Type [int]>*
    //* In order to group the rows of type <Type>*, the matrix must be <Type>** */
    //5) That is a pointer(array) that points to row pointers

    int n = 0, m = 0;
    cout << "Type the number of rows: ";
    cin >> n;
    cout << "\nType the number of columns: ";
    cin >> m;
    cout << endl;


    int** Matrix = new int*[n]; //allocate an array of row pointer (fila de puntero)
    for(int i = 0; i < n; i++){
        Matrix[i] = new int [m];//allocate i-th row
    }

    for(int i = 0; i <n; i++){
        for(int j = 0; j < m; j++){
            Matrix[i][j] = i + j*10;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        delete[] Matrix[i];//free i-th row
    }
    delete[] Matrix;//free the array of row pointer (fila-array de punteros)


    
    return 0;
}
