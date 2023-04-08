#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include <exception>
#include <cstdlib>

double sumar(double x, double y);

double restar(double x, double y);

double multiplicar(double x, double y);

double dividir(double x, double y);

double potencia(double x, double y);

int Menu();

int main(int argc, char const *argv[])
{

    int opcion = 1;
    
    double (*Ptr_calculos[5]) (double, double);
    Ptr_calculos[0] = sumar;
    Ptr_calculos[1] = restar;
    Ptr_calculos[2] = multiplicar;
    Ptr_calculos[3] = dividir;
    Ptr_calculos[4] = potencia;
    double val1 = 0, val2 = 0;

    while( opcion != 0 ){

        opcion = Menu();

        switch(opcion){

            case 1:{
                    cout << endl << setw(13) << "SUMAR" << endl << endl;

                    cout <<"valor 1: ";     cin >> val1;
                    cout <<"valor 2: ";     cin >> val2;

                    cout << val1 << " + " << val2 << " = " << Ptr_calculos[0](val1, val2) << endl;
            }
            break;


            case 2:{
                    cout << endl << setw(14) << "RESTAR" << endl << endl;

                    cout <<"valor 1: ";     cin >> val1;
                    cout <<"valor 2: ";     cin >> val2;

                    cout << val1 << " - " << val2 << " = " << Ptr_calculos[1](val1, val2) << endl;
            }
            break;


            case 3:{
                    cout << endl << setw(19) << "MULTIPLICAR" << endl << endl;

                    cout <<"valor 1: ";     cin >> val1;
                    cout <<"valor 2: ";     cin >> val2;

                    cout << val1 << " x " << val2 << " = " << Ptr_calculos[2](val1, val2) << endl;                    
            }
            break;


            case 4:{
                    cout << endl << setw(15) << "DIVIDIR" << endl << endl;

                    cout <<"numerador: ";     cin >> val1;
                    cout <<"denominador: ";     cin >> val2;
                    

                    try{

                        if(val2 == 0){
                            throw std::runtime_error("No se puede dividir para 0");
                        }else{
                            cout << val1 << " / " << val2 << " = " << Ptr_calculos[3](val1, val2) << endl; 
                        }
                            

                    }catch( std::runtime_error& e){
                        cout <<"Error en la funcion dividir: " << e.what() <<endl;
                    }
                    
            }
            break;


            case 5:{
                    cout << endl << setw(16) << "ELEVAR A" << endl << endl;

                    cout <<"base: ";     cin >> val1;
                    cout <<"exponente: ";     cin >> val2;

                    cout << val1 << " ^ " << val2 << " = " << Ptr_calculos[4](val1, val2) << endl;
            }
            break;


            case 0:{
                    cout << "Desarrollado por: " 
                    "Super Compu Mundo Hiper Mega Red"<< endl;
            }
            break;


            default:{
                    cout << "Algo ha salido muy mal."<<endl;
            }
            break;


        }//fin del switch

            std::system("pause");
            std::system("cls");

    }//fin del while principal


    return 0;
}


int Menu(){
    int opcion = -1;

    

        cout << "|" << setw(11) << "MENU" << setw(8)<<"|"<<endl;
        cout << "|" << setw(19) << "|"<<endl;
        cout << "|" << setw(10) << "1) Sumar" << setw(9) << "|" <<endl;
        cout << "|" << setw(19) << "|"<<endl;
        cout << "|" << setw(11) << "2) Restar" << setw(8) << "|" <<endl;
        cout << "|" << setw(19) << "|"<<endl;
        cout << "|" << setw(16) << "3) Multiplicar" << setw(3) << "|" <<endl;
        cout << "|" << setw(19) << "|"<<endl;
        cout << "|" << setw(12) << "4) Dividir" << setw(7) << "|" <<endl;
        cout << "|" << setw(19) << "|"<<endl;
        cout << "|" << setw(13) << "5) Potencia" << setw(6) << "|" <<endl;
        cout << "|" << setw(19) << "|"<<endl;
        cout << "|" << setw(10) << "0) SALIR" << setw(9) << "|" <<endl;
        cout << "|" << setw(19) << "|"<<endl;

        cout <<"Opci"<<char(162)<<"n: ";    cin >> opcion;
    

    return opcion;
}


double sumar(double x, double y){
    return x + y;
}

double restar(double x, double y){
    return x - y;
}

double multiplicar(double x, double y){
    return x * y;
}

double dividir(double x, double y){
    return x / y;
}

double potencia(double x, double y){
    return pow(x,y);
}