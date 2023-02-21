#include <stdlib.h>
#include <stdio.h>

char *ones[100] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

char *ten_to_twenty[100] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

char *tens[100] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

char *hundreds[100] = {"one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"};

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
            if (i % 10 != NULL)
            {
                printf("%s %s \n", tens[(i / 10) - 2], ones[(i % 10 - 1)]);
            }
            else
            {
                printf("%s \n", tens[(i / 10) - 2]);
            }
        }
        else
        {
            int getIndexBySubtractingTheRest = (((i % 100) - (i % 10)) / 10) - 2;
            int getIndexByHundredDivision = (i / 100) - 1;

            if (tens[getIndexBySubtractingTheRest] == NULL && ones[(i % 10) - 1] == NULL)
            {
                printf("%s \n", hundreds[getIndexByHundredDivision]);
            }
            else if (tens[getIndexBySubtractingTheRest] == NULL && ones[(i % 10) - 1] != NULL)
            {
                printf("%s and %s \n", hundreds[getIndexByHundredDivision], ones[(i % 10) - 1]);
            }
            else if (ones[(i % 10) - 1] == NULL)
            {
                printf("%s and %s \n", hundreds[getIndexByHundredDivision], tens[getIndexBySubtractingTheRest]);
            }
            else
            {
                printf("%s and %s %s \n", hundreds[getIndexByHundredDivision], tens[getIndexBySubtractingTheRest], ones[(i % 10) - 1]);
            }
        }
    }
}