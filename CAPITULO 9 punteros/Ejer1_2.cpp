#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int num = 8;
    int *Ptr1 = nullptr;
    int *Ptr2 = nullptr;
    Ptr1 = &num;

    cout <<"num = "<< num<<endl;
    cout <<"&num = "<< &num<<endl;

    cout <<"Ptr1 = "<<Ptr1<<endl;
    cout <<"*Ptr1 = "<< *Ptr1<<endl;

    cout <<"Ptr2 = "<<Ptr2<<endl;
    cout <<"*Ptr2 = "<< *Ptr2<<endl<<endl<<endl;



    Ptr2 = Ptr1;
    cout <<"num = "<< num<<endl;
    cout <<"&num = "<< &num<<endl;

    cout <<"Ptr1 = "<<Ptr1<<endl;
    cout <<"*Ptr1 = "<< *Ptr1<<endl;

    cout <<"Ptr2 = "<<Ptr2<<endl;
    cout <<"*Ptr2 = "<< *Ptr2<<endl<<endl<<endl;





  return 0;
}
