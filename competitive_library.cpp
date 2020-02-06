#include <iostream>

void fastscan(unsigned int &x)
{
    bool neg = false;
    register int c;
    x = 0;
    c = getchar();
    if (c == '-')
    {
        neg = true;
        c = getchar();
    }
    for (; (c > 47 && c < 58); c=getchar())
    {
        x = (x<<1) + (x<<3) + c -48;
    }
    if (neg)
    {
        x *=-1;
    }
}

unsigned int sqrt (unsigned int num)
{
    int i=1;
    while (i*i <= num) i++;
    return i-1;
}