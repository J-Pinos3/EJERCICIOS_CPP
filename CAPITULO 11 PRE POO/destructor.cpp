#include <iostream>
using namespace std;

class Contador{

private:
    int cuenta;

public:
  Contador() {
  cuenta = 0;
  }

  void incrementa(){
    cuenta++;
  }

  int valor(){
    return cuenta;
  }


  ~Contador(){
  }

};



int main(int argc, char const *argv[]) {

    Contador c;

    for(int i = 0; i < 6; i++){
        cout << "c = "<<c.valor()<<endl;
        c.incrementa();

        if( i == 2){
          c = Contador();
        }
    }



  return 0;
}
