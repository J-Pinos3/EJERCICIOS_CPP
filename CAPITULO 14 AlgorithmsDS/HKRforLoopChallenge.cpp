#include <iostream>
#include <string>
#include <map>

using namespace std;

bool isOdd(int x);
void solution(int bottom, int top);

map<int, string> englishRepresentation = {
    {1,"one"}, {2,"two"}, {3,"three"}, {4,"four"}, {5,"five"},
    {6,"six"}, {7,"seven"}, {8,"eight"}, {9,"nine"}
};

int main(){
    int bottom = 0, top = 0;
    cout << "Enter two numbers: "<< endl;
    cin >> bottom >> top;

    solution(bottom, top);


    return 0;
}

void solution(int bottom, int top){
    map<int, string>::iterator it;

    for(int i = bottom; i <= top; i++){
        it = englishRepresentation.find(i);
        if(it != englishRepresentation.end() ){
            cout << englishRepresentation[i]<< endl;
        }

        if( (i>9)&&( !isOdd(i) ) ){
            cout << "even" << endl;
        }

        if( (i>9)&&( isOdd(i) ) ){
            cout << "odd" << endl;
        }        
    }
}


bool isOdd(int x){
    return !(x%2==0);
}