#include <stdlib.h>
#include <stdio.h>

int main()
{
    int largest = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            int product = i * j;
            int reverse = 0;
            int temp = product;
            while (temp != 0)
            {
                reverse = reverse * 10 + temp % 10;
                temp /= 10;
            }
            if (product == reverse && product > largest)
            {
                largest = product;
            }
        }
    }
    printf("%d", largest);
}