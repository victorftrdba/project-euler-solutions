#include <stdlib.h>
#include <stdio.h>

int main()
{
    int sum = 1000;

    for (int a = 1; a < sum; a++)
    {
        for (int b = a + 1; b < sum; b++)
        {
            int c = sum - a - b;
            if (a * a + b * b == c * c)
            {
                printf("%d \n", a * b * c);
                return 0;
            }
        }
    }
}