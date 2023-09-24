#ifndef _RESULT_
#define _RESULT_
#include "Daytime.h"


class Result{ 

private: 
    double val;
    DayTime time;

public: 
    Result();
    Result(double w, const DayTime& z = currentTime());
    Result(double w, int hr, int min, int sec);

    double getVal() const{ return val; }
    void setVal(double w) { val = w; }

    const DayTime& getTime() const{ return time; }
    void setTime(const DayTime& z) { time = z; }
    bool setTime(int hr, int min, int sec){
        return time.setTime(hr, min, sec);
    }

    void  print() const;


};



#endif //_RESULT_