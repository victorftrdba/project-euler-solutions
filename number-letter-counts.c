#include <stdio.h>
#include <string.h>

#define HUNDRED_AND 10
#define HUNDRED 7
#define ONE_THOUSAND 11

char *first[10] = {"", "one", "two", "three", "four", "five",
                   "six", "seven", "eight", "nine"};
char *teens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                   "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char *tens[10] = {"", "ten", "twenty", "thirty", "forty", "fifty",
                  "sixty", "seventy", "eighty", "ninety"};

int get_letters_int(int x)
{
    if (x < 10)
        return strlen(first[x]);
    else if (x < 20)
        return strlen(teens[x % 10]);
    else if (x % 10)
        return strlen(tens[x / 10]) + strlen(first[x % 10]);
    else
        return strlen(tens[x / 10]);
}

int main(void)
{
    long sum = 0;

    for (int i = 0; i < 1000; i++)
    {
        if (i < 100)
        {
            sum += get_letters_int(i);
        }
        else if (i < 1000)
        {
            if (i % 100)
            {
                sum += strlen(first[i / 100]) + HUNDRED_AND + get_letters_int(i % 100);
            }
            else
            {
                sum += strlen(first[i / 100]) + HUNDRED;
            }
        }
        else
        {
            sum += ONE_THOUSAND;
        }
    }
    printf("Result: %ld\n", sum);
}