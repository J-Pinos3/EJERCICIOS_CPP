#include <iostream>
using namespace std;

int &func(int &a, int &b){

    if(a > b){
        return a;
    }else{
        return b;
    }

}


int main(int argc, char const *argv[])
{
    
    int u = 11, x = 45;
    cout << func(u, x) << endl;

    func(u,x) += 10;

    cout <<"u: " <<u <<endl;
    cout <<"x: " <<x <<endl;
    cout <<"func(u,x): " <<func(u,x) <<endl;
    
    return 0;
}
