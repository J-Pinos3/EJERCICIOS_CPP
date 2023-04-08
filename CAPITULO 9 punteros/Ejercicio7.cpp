//EN C++ LOS ARRAYS Y PUNTEROS ESTAN MUY RELACIOPONADOS
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  /*
  srand( static_cast<unsigned int>( time(0) ) );
  //srand( (unsigned int)time(0)  );

cout <<"sizeof(float) >"<<sizeof(float)<<endl<<endl;
  int arr1[10] = {};
  for(int i = 0; i < 10; i++){
    arr1[i] = 1 + rand()%50;
    //cout <<">"<<arr1[i]<<endl;
  }


  for(int i = 0; i < 10; i++){
    cout <<arr1[i]<<endl;

  }
cout <<"\n\n\n<------------------------------>"<<endl<<endl<<endl;
for(int i = 0; i < 10; i++){
  cout <<*(arr1+i)<<endl;
}
*/



float V[6];
for (int j = 0; j < 6; j++){
  *(V+j) = (j + 1) * 10 + 1;
}

cout << " Direccion Contenido" << endl;

for (int j= 0; j < 6; j++){
  cout << " V+" << j << " = "<< V + j;
  cout << " V[" << j <<"] = " << *(V+j)<< "\n";
}










  return 0;
}
