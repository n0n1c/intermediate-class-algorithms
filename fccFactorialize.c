#include <stdio.h>
#include <cs50.h>

long long factorialize(int n)
{
    long long sum = 1;
    for (int i = 1; i<= n && n != 0; i++)
    {
        sum *= i;
    }
    return sum;
}
