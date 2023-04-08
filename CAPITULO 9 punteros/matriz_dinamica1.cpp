#include <iostream>
#include <new>
using namespace std;

int main()
{
    int i, j, n;
    
    typedef int *col;
    
    int **m;
    cout <<"Ingrese la dimensión de la matriz: ";       cin >> n;
    
    m = new col[n];
    
    for(i = 0; i < n; i++){
        m[i] = new int[n];
        
        for(j = 0; j < n; j++){
            m[i][j] = 10 * (i+1) + j;
        }
    }
    
    cout <<"\n\nLa matriz contiene los siguientes valores (usando notación arreglo): "<<endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
    cout <<"\n\nLa matriz contiene los siguientes valores (usando notación puntero): "<<endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << *(*(m+i)+j) << " ";
        }
        cout << endl;
    }
    
    for(i = 0; i < n; i++){
        delete m[i]; 
    }
    
    delete[] m;

    return 0;
}
