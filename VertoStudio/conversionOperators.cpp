#include <iostream>
using namespace	 std;

static int numberOfAditions = 0;

class EncapsulatedInt{

public:
    EncapsulatedInt(int anInt){
        i = anInt;
    }


    EncapsulatedInt(){
        i = 0;
    }


    EncapsulatedInt operator+(const EncapsulatedInt& rhs){
        numberOfAditions++;
        
        return EncapsulatedInt(i + rhs.i);
    }


    operator int(){
        return i;
    }


private:
    int i = 0;

};


void func(int i){
    cout << "Func returns "<< i << endl;
}

int main()
{
    EncapsulatedInt a, b(10);

    EncapsulatedInt c = a + b + a + b;
    
    
    cout << numberOfAditions << endl << endl;

    func(5);

    func(a);

    cout << (int)c << endl;

    cout << static_cast<int>(a) << endl;
    int k = b;

    cout << k << endl;

    return 0;
}
