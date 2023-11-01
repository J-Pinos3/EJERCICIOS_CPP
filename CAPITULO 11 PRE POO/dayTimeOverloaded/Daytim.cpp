#include "DayTime.h"
#include <iostream>
using namespace std;

int main(){
    DayTime cinema(20, 30);
    cout << "Titanic starts at: " << cinema << endl;

    DayTime(now);
    cout << "What time is now? "<< endl;
    if( !(cin >> now) ){
        cerr << "Invalid input!" << endl;
    }else{
        cout <<"\nThe time is now "<< now << endl;
    }

    cout << "\nThe movie has: ";
    if( cinema < now  ){
        cout <<"Already begun!" << endl;
    }else{
        cout <<"Not yet begun!" << endl;
    }

    cout << "Now it is: " << now++ << endl;
    cout << "After 2 seconds it is: " << ++now << endl;
}