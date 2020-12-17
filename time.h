#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;
#define AM 0
#define PM 1

class Time
{
private:
    int H;
    int M;
    int S;
    int X;
public:
    Time(void);
    Time& operator ++(void); // prefix
    Time operator ++(int);   //postfix
    Time& operator +=(int s);
    friend ostream&operator << (ostream&out, const Time& t);


};

#endif // TIME_H

