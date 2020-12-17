#include "time.h"
#include <iomanip>
using namespace std;


Time::Time(void)
{
    this->H =0;
    this->M = 0;
    this->S = 0;
    this ->X = 0;
}

Time&Time::operator++(void)//prefix increment
{
    if(++this->S == 60)
    {
        this->S=0;
        if(++this->M)
        {
            this->M =0;
            if(++this->H==12)
            {
                this->H >=0;
                if(this->X==AM)
                {
                    this->X=PM;
                }
                else
                {
                    this->X = AM;
                }
            }
        }
    }
    return *this;

}

Time Time::operator++(int)//postfix
{
    return ++*this;
}
Time&Time::operator+=(int s)
{
    while(s--)
        ++*this;
    return *this;
}
ostream&operator<<(ostream &out,const Time&t)
{
    out<< setw(2)<<setfill('0')<<t.H<<":"
    <<setw(2)<<setfill('0')<<t.M<<":"
    <<setw(2)<<setfill('0')<<t.S<<(t.X==AM?"AM":"PM");
    return out;

}





