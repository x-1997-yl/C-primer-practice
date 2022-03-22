#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <iostream>

using namespace std;

class Time
{
    int hour;
    int minute;

public:
   Time();
   Time(int a,int b);
   void setHour(int a);
   void setMinute(int a);
   void show();
   Time operator+(Time &t);
   ~Time();
};
#endif // TIME_H_INCLUDED
