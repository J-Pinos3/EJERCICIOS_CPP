#ifndef _DAYTIME_
#define _DAYTIME_


class DayTime{

private:
    short int hour, minute, second;
    bool overflow;

public:
    DayTime(int h = 0, int m = 0, int s = 0){
        overflow = false;
        if( !setTime(h,m,s) ){
            hour = minute = second = 0;
        }
    }


    bool setTime(int hour, int minute, int second){
        if( hour >= 0 && hour < 24 
            && minute >= 0 && minute < 60
            && second >= 0 && second < 60 )
        {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
            return true;
        
        } else {
            return false;
        }
    }


    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const {return second; }

    int asSeconds() const{
        return (hour*3600 + minute*60 +second);
    }

    bool isLess(DayTime t) const{
        return asSeconds() < t.asSeconds();
    }
};

const DayTime& currentTime();

#endif //_DAYTIME_