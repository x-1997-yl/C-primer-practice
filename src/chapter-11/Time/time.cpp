#include <iostream>
#include "time.h"

using namespace std;

Time::Time()
{
    hour = 0;
    minute = 0;
}

Time::Time(int a,int b)
{
    hour =a;
    minute =b;
}


void Time::setHour(int a)
{
    hour == a;
}

void Time::setMinute(int a)
{
    minute = a;
}

Time Time::operator+(Time &t)
{
    Time s;
    s.hour = hour + t.hour;
    s.minute = (minute + t.minute)%(60);
    int l = (minute + t.minute)/(60);
    s.hour = s.hour + l;
    return s;
}

Time::~Time()
{

}

void Time::show()
{
    cout<<hour<<"Ð¡Ê±£¬"<<minute<<"·Ö"<<endl;
}
