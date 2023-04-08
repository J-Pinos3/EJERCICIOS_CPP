#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

double &refMin(double &a, double &b);//devuelve una referencia al mínimo
string &mensaje();

int main(int argc, char const *argv[]) {

    system("color F2");

    double x1 = 1.1, x2 = x1 + 0.5, y;
    y = refMin(x1,x2);


    cout <<"x1 = " << x1 <<"     "
         <<"x2 = " << x2 <<endl;
     cout <<"refmin = " << refMin(x1,x2)<<endl;
    cout <<"Minimum: " <<y<< endl<<endl<<endl<<endl;


    ++refMin(x1,x2);
    cout <<"x1 = " << x1 <<"     "
         <<"x2 = " << x2 <<endl;
     cout <<"refmin = " << refMin(x1,x2)<<endl;
    cout <<"Minimum: " <<y<< endl<<endl<<endl<<endl;


    ++refMin(x1,x2);
    cout <<"x1 = " << x1 <<"     "
         <<"x2 = " << x2 <<endl;
     cout <<"refmin = " << refMin(x1,x2)<<endl;
    cout <<"Minimum: " <<y<< endl<<endl<<endl<<endl;


    refMin(x1,x2) = 10.1;
    cout <<"x1 = " << x1 <<"     "
         <<"x2 = " << x2 <<endl;
     cout <<"refmin = " << refMin(x1,x2)<<endl;
    cout <<"Minimum: " <<y<< endl<<endl<<endl<<endl;


    refMin(x1,x2) += 5.0;
    cout <<"x1 = " << x1 <<"     "
    <<"x2 = " << x2 <<endl;
     cout <<"refmin = " << refMin(x1,x2)<<endl;
    cout <<"Minimum: " <<y<< endl<<endl<<endl<<endl;


    system("pause");
    system("cls");

    mensaje() = "Hola esto es C++ y Música, voy a por todas";
    mensaje().insert(0,"Saludos. ");

    cout << "Mensaje: " << mensaje()<<endl<<endl;

    mensaje().clear();
    mensaje().append("Musica y C++",12);

    cout << "Mensaje: " << mensaje()<<endl<<endl;

  return 0;
}

double &refMin(double &a, double &b){
    return a <= b ? a : b;
}


string &mensaje(){
  static string str = "Hi";
  return str;
}
