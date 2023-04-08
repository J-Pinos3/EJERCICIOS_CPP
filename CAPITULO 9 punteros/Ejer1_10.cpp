#include <iostream>
using namespace std;

void calculitos (int a);

int main(int argc, char const *argv[]) {
//https://www.it.uc3m.es/pbasanta/asng/course_notes/pointers_to_functions_es.html
  void (*Ptr_func)(int);
  Ptr_func = calculitos;

  for(int i = 2; i <= 10; i+=2){
      Ptr_func(i);
  }


  return 0;
}

void calculitos (int a){
    float b = 3.16 * a;

    cout <<"> "<<b<<endl;
}//fin de calculitos
