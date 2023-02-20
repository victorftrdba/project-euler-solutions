#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int value)
{
    if (value <= 1)
    {
        return false;
    }

    for (int i = 2; i < value; i++)
    {
        if (value % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    long long int sum = 0;

    for (int i = 2; i < 2000000; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }

    printf("%lld \n", sum);
}