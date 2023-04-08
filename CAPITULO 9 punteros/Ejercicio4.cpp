#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
int *dir_arr = nullptr;

int n;
cout <<"Ingrese la cantidad de notas a ingresar: ";
cin >> n;
dir_arr = new int[n];

for(int i = 0; i < n; i++ ) {
  cout <<"\t Nota: "<<i+1<<endl;
  cin >> dir_arr[i];

    if(i != n-1){
      cout <<"\n\n<------------------------------>"<<endl<<endl;
    }

}


cout <<endl<<endl<<endl;
  for(int i = 0; i < n; i++){
  cout <<"Nota "<<i+1<<": "<<dir_arr[i]<<" --->  Direccion de memoria"<<&dir_arr[i]<<endl;
  }



cout <<endl<<endl<<endl<<endl<<endl;

delete[] dir_arr;


//SI COMENTO EL DELETE Y ELIMINO EL dir_arr = new int[n] también conservo los mismoe espacios de memoria
cout <<"Ingrese la cantidad de notas a ingresar: ";
cin >> n;
dir_arr = new int[n];

for(int i = 0; i < n; i++ ) {
  cout <<"\t Nota: "<<i+1<<endl;
  cin >> dir_arr[i];

    if(i != n-1){
      cout <<"\n\n<------------------------------>"<<endl<<endl;
    }

}


cout <<endl<<endl<<endl;
  for(int i = 0; i < n; i++){
  cout <<"Nota "<<i+1<<": "<<dir_arr[i]<<" --->  Direccion de memoria"<<&dir_arr[i]<<endl;
  }
delete[] dir_arr;
  return 0;
}
