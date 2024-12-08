#include <stdio.h>

/*
Page 21.
Write a program that prints its input one word per line.
*/
int main()
{
    int c;
    int inspace;
    inspace = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (inspace == 0)
            {
                inspace = 1;
                putchar('\n');
            }
        }
        else
        {
            inspace = 0;
            putchar(c);
        }
    }
    return 0;
}