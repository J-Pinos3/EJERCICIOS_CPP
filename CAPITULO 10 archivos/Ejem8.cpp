#include <fstream>
#include <iostream>
using namespace std;

int main() {
ifstream origen("C:/Users/Usuario/Downloads/majestyjp.jpg",ios::in|ios::binary);
ofstream destino("C:/Users/Usuario/Desktop/SharedFolder/copia-majesty.jpg",ios::out|ios::binary);

char byte;

while( !origen.eof() && !origen.fail() ){
    origen.read( (char *)&byte, sizeof(char) );
    if(origen.good()){
        destino.write( (char *)&byte, sizeof(char) );
    }
}

destino.close();
origen.close();

  return 0;
}
