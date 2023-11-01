#include <iostream>
#include <string>
#include "Article.h"
using namespace std;

int main(int argc, char const *argv[])
{
    string line(50,'-');
    line.append("\n");

    Article a1(2, "Hello World", 10.6);
    cout << line <<endl;
    Article a2;
    cout << line <<endl;

    Article a3(a1);

    try{
        Article a3(3,"Py programming", 5.6);

    }catch(const invalid_argument& e){
        cout << e.what() << endl;
    }
    cout << line <<endl<<endl;

    a1.Print();
    cout << line <<endl;
    a2.Print();
    cout << line <<endl;
    a3.Print();
    cout << line <<endl;


    
    return 0;
}
