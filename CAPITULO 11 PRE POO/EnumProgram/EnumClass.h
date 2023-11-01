#ifndef ENUMCLASS_H
#define ENUMCLASS_H
#include <iostream>

class Lights{

public:
    enum State{OFF, RED, GREEN, AMBER};


private:
    State state;
    
public:
    Lights(State s = OFF): state(s){ }
    State getState() const { return state; }

    void setState(const State& s){
        switch (s)
        {
            case OFF:{
                std::cout << "\tOFF\t\n";
            }
            break;

            case RED:{
                std::cout << "\tRED\t\n";
            }
            break;

            case GREEN:{
                std::cout << "\tGREEN\t\n";
            }
            break;

            case AMBER:{
                std::cout << "\tAMBER\t\n";
            }
            break;
        }
        state = s;
    }

};

#endif //ENUMCLASS_H