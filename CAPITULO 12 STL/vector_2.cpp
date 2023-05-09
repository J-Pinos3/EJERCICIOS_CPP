#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v1;
    vector<int> v2(5,8);

    cout <<"VECTOR 1"<<endl;
    for(const int &c : v1){
        cout << c << " ";
    }


    cout <<"\n\nVECTOR 2"<<endl;
    for(const int &c : v2){
        cout << c << " ";
    }
    

    cout <<"Push back (1...10)"<<endl;
    for(int i = 1; i < 8; i++){
        v1.push_back(i);
        v2.push_back(i);
    }


    cout <<"\n\nVECTOR 1"<<endl;
    for(const int &c : v1){
        cout << c << " ";
    }


    cout <<"\n\nVECTOR 2"<<endl;
    for(const int &c : v2){
        cout << c << " ";
    }


    cout <<"\n\nPush back (1...10)"<<endl;
    for(int i = 1; i < 8; i++){
        v1.pop_back();
        v2.pop_back();
    }

    
    cout <<"\n\nVECTOR 1"<<endl;
    for(const int &c : v1){
        cout << c << " ";
    }


    cout <<"\n\nVECTOR 2"<<endl;
    for(const int &c : v2){
        cout << c << " ";
    }

    return 0;
}
