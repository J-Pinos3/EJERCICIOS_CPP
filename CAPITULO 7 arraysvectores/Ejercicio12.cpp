#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  //CUAL ES LA SALIDA DE CADA PROGRAMA

/*
int i, primero[21];
for(i = 1; i <= 6; i++){
  cin >> primero[i];
}

for(i = 3; i > 0; i-- ){
  cout << primero[2*i];
}
*/

//************************************

/*
int i,j,k, primero[10];
for ( i = 0; i < 10; i++) {
    primero[i] = i + 3;
}

for ( i = 0; i < 10; i++) {
    cout <<primero[i]<<" ";
}
cout <<endl<<endl;
cout<<"j: ";
cin >> j;
cout<<"k: ";
cin >> k;

for( i = j; i <= k; i++){
  cout << primero[i]<<" ";
}
*/

//******************************

/*
int i, j, k, primero[11], segundo[11];
for(i = 0; i < 11; i++){
    primero[i] = (2 * i) + 2;
    cout <<primero[i]<<" ";
}
cout <<endl<<endl<<endl;
for(j = 0; j < 6; j++){
    segundo[j] = primero[2*j] + j;
    cout <<segundo[j]<<" ";
}
cout <<endl<<endl<<endl;
for(k = 3; k < 6; k++){
  cout << primero[k+1]<<"\t"<<segundo[k-1]<<endl;
}
*/

//******************************

int arr[10];
for(int i = 0; i < 10; i++ ){

    //if( (i % 2) == 0 ){
      //arr[i] = i;
    //}

    arr[i] = (2 * i) + 1;


}

for(int i = 0; i < 10; i++ ){
    cout << arr[i]<<" ";
}
cout <<endl<<endl;
for(int i = 0; i < 10; i++ ){

    if( (i % 2) == 0 ){
        cout << arr[i]<<" ";
    }


}




    return 0;
}
