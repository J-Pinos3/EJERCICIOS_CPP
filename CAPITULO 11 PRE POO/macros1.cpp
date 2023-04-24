#include <iostream>
#include <string>
using namespace std;

#define DELAY   10000000L
#define CLS   (cout << "\033[2j")
#define LOCATE(z, s) (cout << "\033[" << z <<";" << s <<"H")


int main(int argc, char const *argv[])
{
    
    int x = 2, y = 3, dx = 1, speed = 0;
    string floor(79,'-'),
            header="****  JUMPING BALL  ****";

    CLS;
    LOCATE(1,25);
    LOCATE(25,1);

    while(true){
        LOCATE(x,y);
        cout << 'O' << endl;
        for(long int wait = 0; wait < DELAY; wait++) {  }

        if(x== 1|| x == 79 ){
            dx = -dx;
        }
        if(y == 24){
            speed = -speed;
            if(speed == 0){
                speed = -7;
            }
        }
        speed += 1;
        LOCATE(y, x);
        cout << " ";
        y += speed;
        x+=dx;
    }

    return 0;
}
