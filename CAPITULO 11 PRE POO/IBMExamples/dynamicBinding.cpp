#include <iostream>
using namespace std;

struct A {
    virtual void f() { cout << "Class A" << endl; }
};

struct B: A {
    void f() { cout << "Class B" << endl; }
};

void g(A &arg){
    arg.f();
}

int main()
{
    B x;
    A a;
    g(x);//class b
    g(a);//class a 
    return 0;
}
