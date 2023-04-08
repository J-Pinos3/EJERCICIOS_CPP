#include <iostream>
#include <dirent.h>
#include <cstdlib>
using namespace std;

void list_dir(string dir);
void init();


int main() {

    init();
  return 0;
}


void list_dir(string dir){

  DIR *directorio;
  struct dirent *elemento;
  string elem;

  if(directorio = opendir(dir.c_str()) ){ //se comprueba si se puede abrir el directorio
      while( elemento = readdir(directorio) ){
          elem = elemento->d_name;
          cout << elem<<endl;
      }
  }

  closedir(directorio);
}

void init(){

  string dir;
  cout <<"Ingrese la ruta del directorio a listar: ";
  getline(cin, dir);
  list_dir(dir);
  system("pause");
  system("cls");
  init();
}
