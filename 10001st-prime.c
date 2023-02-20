#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main()
{
    system("clear");
    int count = 0;
    int i = 2;
    while (count < 10001)
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            count++;
        }
        i++;
    }
    printf("%d", i - 1);
}