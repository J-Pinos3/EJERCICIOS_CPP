#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void update(int* a, int* b);

int main()
{
    int a = 0, b = 0;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    //system("pause");
    //system("cls");

    cout << "a: " << a << " b: " << b << endl;
    update(&a, &b);
    cout << "a: " << a << " b: " << b << endl;
    system("pause");
    return 0;
}


void update(int* a, int* b){
    int sum = (*a) + (*b);
    int diff = abs( (*a) - (*b) );

    *a = sum;
    *b = diff;
}