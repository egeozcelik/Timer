#include "time.h"
#include <unistd.h>
#include <iostream>
#include <Windows.h>
using namespace std;


int main(void)
{
    Time t;
    while(1)
    {
        cout<<++t<<endl;
        Sleep(1);
    }
}







