//diferencia entre cin.get y cin.getline

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]) {

char str1[100];
char str2[100];

//cin.getline():  reads input up to '\n' and stops
//cin.get():  reads input up to '\n' and keeps '\n' in the stream
// where '\n' is de delimiter character

/*
cin.getline(str1,100);
cin.get(str2, 100);

cout << str1 <<"  "<<str2<<endl;// 1 2  3 4
*/





/*
cin.get(str1, 100);
//cin.clear(); sigue el error y no puedo ingresar nada nuevo
cin.ignore();//ahora si se soluciona el error y getline no almacena el '\n'
cin.getline(str2,100);
cout << str1 <<"  "<<str2<<endl;//1 2 xq getline leyó '\n' y no puedo ingresar nada mas
*/





//USO DE READ Y WRITE, comento lo de abajo xq el archivo prueba.bin ya esta creado, solo lo voy a aleer
/*
int e = 10;
float f = 12.56;
  ofstream archiv("prueba.bin", ios::binary|ios::out|ios::app);
  archiv.write( (char *)&e, sizeof(int));
  archiv.write( (char *)&f, sizeof(float));
  archiv.close();
*/

int e ;
float f ;
  ifstream arch("prueba.bin", ios::binary|ios::in);
  arch.read( (char *)&e, sizeof(int));
  arch.read( (char *)&f, sizeof(float));

  cout <<"entero <e>: "<<e<<endl;
  cout <<"float <f>: "<<f<<endl;

  arch.close();







  return 0;
}
