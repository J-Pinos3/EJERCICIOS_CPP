#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


//PROTOTIPO DE LAS FUNCIONES

int *merge (int v1[], int len1, int v2[], int len2);
void selection_sort(int *arr, int len);
inline void swap(int &a, int &b);

int main(int argc, char const *argv[])
{

    cout << "\n  *  *  *  THE MERGE ALGORITHM  *  *  *\n" << endl;
    int i = 0, len1 = 6, len2 = 3;

    int *a1 = new int[len1],
        *a2 = new int[len2];

    srand((unsigned)time(0));

    for(i = 0; i < len1; i++){
        a1[i] = rand();
    }
    for(i = 0; i < len2; i++){
        a2[i] = rand();
    }


    selection_sort(a1, len1);
    selection_sort(a2, len2);

    cout << "The sorted arrays are: "<< endl <<"1st one" << endl;
    for(i = 0; i < len1; i++){
        cout << setw(12) << a1[i];
    }

    cout << endl;

    cout <<"2nd one: "<<endl;
    for(i = 0; i < len2; i++){
        cout << setw(12) << a2[i];
    }

    cout << endl;

    int *a3 = nullptr, len3 = 0;
    a3 = merge(a1, len1, a2, len2);
    len3 = len1 + len2;

    cout <<"The new merged array is: "<< endl;
    for(i = 0; i < len3; i++){
        cout << setw(12) << a3[i];
    }
    cout << endl;

    delete[]a1;
    delete[]a2;
    delete[]a3;

    return 0;
}


inline void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = a;
}

void selection_sort(int *arr, int len){

    register int *p = nullptr, *minp = nullptr;//punteros al arreglo de elementos
    int *last = arr + len-1;//puntero al último elemento

    for(;arr < last; arr++){
        minp = arr;

        for(p = arr+1; p <= last; p++){
            if(*minp > *p){
                minp = p;
            }
        }
        swap(*arr, *minp);
    }

}


int *merge (int v1[], int len1, int v2[], int len2){
    int i = 0, i1 = 0, i2 = 0;
    
    int *v = new int[len1 + len2];
    for(i = 0; i1 < len1 && i2 < len2; i++){

        if(v1[i1] <= v2[i2]){
            v[i] = v1[i1++];
        }else{
            v[i] = v2[i2++];
        }

    }


    if(i1 < len1){
        while(i1 < len1){
            v[i++] = v1[i1++];
        }
    }else{
        while(i2 < len2){
            v[i++] = v2[i2++];
        }
    }

    return v;
}