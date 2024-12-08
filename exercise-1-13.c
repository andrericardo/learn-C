#include <stdio.h>

/*
Page 34.
Write a program to print a histogram of the lengths of words in
its input. It is easy to draw histogram with the bars horizontal; a vertical
orientation is more challenging.
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
            putchar('*');
        }
    }
    return 0;
}