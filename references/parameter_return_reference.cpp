#include<stdio.h>

/*This is a simple presentation of a non-trivial bug found on ffac.cpp*/

int& highest(int  & i, int  & j)
{
    if (i > j)
    {
        return i;
    }
    return j;
}

int main()
{
    int a = 3;
    int b = 4;
    printf("Before call highest => a:[%d], b:[%d]\n", a, b);
    highest(a, b) = 11;
    printf("After call highest => a:[%d], b:[%d]\n", a, b);
    
    return 0;
}