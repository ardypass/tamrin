#include <iostream>

class Time{
private:
    int hour, minute, second;
public:
    int getHour() const {
        return hour;
    }

    void setHour(int hour) {
        Time::hour = hour;
    }

    int getMinute() const {
        return minute;
    }

    void setMinute(int minute) {
        Time::minute = minute;
    }

    int getSecond() const {
        return second;
    }

    void setSecond(int second) {
        Time::second = second;
    }

    Time(){
        this->hour = this->minute = this->second = 0;
    }
    Time(int hour, int minute, int second){
        this->setHour(hour);
        this->setMinute(minute);
        this->setSecond(second);
    }

    void display() const{
        printf("%d:%d:%d", this->getHour(), this->getMinute(), this->getSecond());
    }

    Time add(Time time) const{
        Time newTime;
        int newHour, newMin, newSec;
        newHour = this->getHour() + time.getHour();
        newMin = this->getMinute() + time.getMinute();
        newSec = this->getSecond() + time.getSecond();

        if(newSec >= 60)
        {
            newMin += newSec / 60;
            newSec = newSec % 60;
        }

        if(newMin >= 60)
        {
            newHour += newMin / 60;
            newMin = newMin % 60;
        }

        if(newHour >= 24)
            newHour %= 24;

        newTime.setHour(newHour);
        newTime.setMinute(newMin);
        newTime.setSecond(newSec);

        return newTime;
    }
};
