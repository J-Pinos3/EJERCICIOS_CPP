#include "member.h"
#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
    Date today;         today.setDate();
    cout <<"Current Date: " << today.toString() << endl;

    Member Frank(0,"Frank Abegnale", 17,11,81),
            Kurt(2121, "Kurt Rush", Date(5,3,77));

    Frank.setNr(3131);

    
    cout <<"The two memeber of the club are: \n";
    Frank.display();
    Kurt.display();

    //THA BOZZ
    int nr;
    Member* ptr = NULL;
    cout <<"Who's the boss of the club?\n"
        <<"Enter the number: ";
    
    if( cin >> nr ){
        if( nr == Frank.getNr() ){
            ptr = &Frank;
        }else if( nr == Kurt.getNr() ){
            ptr = &Kurt;
        }
        Member::setBoss(ptr);
    }
    ptr = nullptr;

    cout <<"\nThe BOSS of the club is: ";
    ptr = Member::getBoss();
    if( ptr ){
        ptr->display();
    }else{
        cout << "We don't have a boss :(" << endl;
    }


    return 0;
}
