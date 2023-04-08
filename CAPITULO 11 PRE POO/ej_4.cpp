#include <iostream>
using namespace std;

class Complejo{

public:
    explicit Complejo(float valor): x_real(valor), y_imaginaria(0.0){  }

    Complejo(){
      x_real = 0.0;
      y_imaginaria = 0.0;
    }

    float devuelve_real() const{
       return x_real;
    }

    float devuelve_imaginaria() const{
        return y_imaginaria;
    }

    void establecer_real(float a){
       x_real = a;
    }

    void establecer_imaginaria(float b){
      y_imaginaria = b;
    }


    void leercomplejo(){
        float x, y;
        cout <<"Parte real: ";
        cin >> x;
        establecer_real(x);

        cout <<"Parte imaginaria: ";
        cin >> y;
        establecer_imaginaria(y);
    }

    void escribircomplejo(){

        if(y_imaginaria >= 0){
            cout << x_real <<"+ "<< y_imaginaria<<"i "<<endl<<endl;;
        }else{
            cout << x_real <<" "<< y_imaginaria<<"i "<<endl<<endl;;
        }


    }

    void sumarcomplejo(Complejo num1, Complejo num2){
        x_real = num1.x_real + num2.x_real;
        y_imaginaria = num1.y_imaginaria + num2.y_imaginaria;
    }

    void restarcomplejo(Complejo num1, Complejo num2){
        x_real = num1.x_real - num2.x_real;
        y_imaginaria = num1.y_imaginaria - num2.y_imaginaria;
    }

    void multiplicarcomplejos(Complejo num1, Complejo num2){
        x_real = num1.x_real * num2.x_real - num1.y_imaginaria * num2.y_imaginaria;

        y_imaginaria = num1.x_real * num2.y_imaginaria + num1.y_imaginaria * num2.x_real;
    }

    void K_x_complejo(){
        double escalar;
        cout <<"Ingrese el valor del escalar: ";
        cin >> escalar;

        x_real = x_real*escalar;
        y_imaginaria = y_imaginaria*escalar;
    }

    void conjugado(){
      y_imaginaria = -y_imaginaria;
    }

    ~Complejo(){}
private:
    float x_real;
    float y_imaginaria;

};



int main() {

Complejo num1;
Complejo num2;
Complejo num3;

num1.leercomplejo();
cout <<endl;
num2.leercomplejo();
cout <<endl<<endl;
num1.escribircomplejo();
num2.escribircomplejo();
num3.escribircomplejo();

cout <<"\n\n------------------------------------------------------------"<<endl<<endl;

num3.sumarcomplejo(num1,num2);


num1.escribircomplejo();
num2.escribircomplejo();
num3.escribircomplejo();

cout <<"\n\n------------------------------------------------------------"<<endl<<endl;

num3.restarcomplejo(num1,num2);


num1.escribircomplejo();
num2.escribircomplejo();
num3.escribircomplejo();

cout <<"\n\n------------------------------------------------------------"<<endl<<endl;

num3.multiplicarcomplejos(num1,num2);


num1.escribircomplejo();
num2.escribircomplejo();
num3.escribircomplejo();

cout <<"\n\n------------------------------------------------------------"<<endl<<endl;

num1.K_x_complejo();


num1.escribircomplejo();
num2.escribircomplejo();
num3.escribircomplejo();

cout <<"\n\n------------------------------------------------------------"<<endl<<endl;

num2.conjugado();


num1.escribircomplejo();
num2.escribircomplejo();
num3.escribircomplejo();

cout <<"\n\n------------------------------------------------------------"<<endl<<endl;
  return 0;
}
