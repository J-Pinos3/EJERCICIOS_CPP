#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

int matriz[3][3] = {};

cout <<"INGRESE LOS VALORES DE LA MATRIZ"<<endl<<endl;
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout <<"["<<i+1<<"]["<<j+1<<"]: ";

        cin >> *( *(matriz+i)+j );
    }
}


cout <<endl<<endl<<"LOS VALORES DE LA MATRIZ SON"<<endl<<endl;

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout <<"[ "<<*(matriz[i]+j)<<" ] ";
    }
  cout <<endl;
}




  return 0;
}
