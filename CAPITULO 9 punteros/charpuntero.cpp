/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    char cad1[] = "Esto es C++";
    char *cad2 = (char*)"Esto es progra";

    cout <<"cad1: " << cad1 << endl 
        <<"cad2: " << cad2 << endl<<endl;

    cout <<"cadena1"<<endl;
    for(int i = 0; i < 12; i++){
        cout << cad1[i] << " " ;
    }
    cout << endl << endl<<"cadena2"<<endl;

    for(int i = 0; i < 15; i++){
        cout << cad2[i] << " " ;
    }
cout << endl;
    for(int i = 0; i < 15; i++){
        cout << *(cad2+i) << " " ;
    }

    return 0;
}
*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    char cad1[] = "Esto es C++";
    char *cad2 = (char*)"Esto es progra";

    cout <<"cad1: " << cad1 << endl 
        <<"cad2: " << cad2 << endl<<endl;

    cout <<"cadena1"<<endl;
    for(int i = 0; i < 12; i++){
        cout << cad1[i] << " " ;
    }
    
    cout << endl << endl<<"cadena2"<<endl;

    for(int i = 0; i < 15; i++){
        cout << cad2[i] << " " ;
    }
    cout << endl;
    
    for(int i = 0; i < 15; i++){
        cout << *(cad2+i) << " " ;
    }

    cout << endl << endl;
    
    //cad1 = "hola we    ";//prohibidísimo en alabama el arreglo apunta a una direccion de memoria
    cad2 = "Dream Theater";
    
    cout <<"cad1: " << cad1 << endl 
    <<"cad2: " << cad2 << endl<<endl;
    
    cout << endl << endl;
    
    cad1[0] = 'K';
    //cad2[0] = 'K';//prohibidísimo en alabama
        
    cout <<"cad1: " << cad1 << endl 
    <<"cad2: " << cad2 << endl<<endl;
    return 0;
}