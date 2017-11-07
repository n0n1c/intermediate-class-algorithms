#include <stdio.h>
#include <cs50.h>

int sumFibs(int num)
{
    int sum = 1, proirFib = 1, surFib = 1;
    do
    {
       if (curFib % 2 != 0)
       {
           sum += curFib;
       }
       int temp = priorFib;
       priorFib = curFib;
       curlFib += temp;
    } while (curFib <= num);
    return sum;
}
