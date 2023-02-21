#include <stdlib.h>
#include <stdio.h>

char *ones[100] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

char *ten_to_twenty[100] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

char *tens[100] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int main()
{
    for (int i = 0; i < 1000; i++)
    {
        if (i < 10)
        {
            printf("%s \n", ones[i]);
        }
        else if (i > 10 && i < 20)
        {
            printf("%s \n", ten_to_twenty[i - 11]);
        }
        else if (i > 19 && i < 100)
        {
            if ((i % 10) != NULL)
            {
                printf("%s %s \n", tens[(i / 10) - 2], ones[(i % 10 - 1)]);
            }
        }
    }
}