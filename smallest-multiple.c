#include <stdlib.h>
#include <stdio.h>

int main()
{
    int smallest = 0;
    for (int i = 1; i < 1000000000; i++)
    {
        for (int j = 1; j < 21; j++)
        {
            if (i % j != 0)
            {
                break;
            }
            if (j == 20)
            {
                smallest = i;
            }
        }
        if (smallest != 0)
        {
            break;
        }
    }
    printf("%d", smallest);
}