#include <stdio.h>

/*
Write a program to copy its input to its output, replacing each
tab by \t, each backspace by \b, and each backslash by \\. This makes tabs
and backspaces visible in an unambiguous way.
*/
int main()
{
    double count;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar("\\");
            putchar("t");
            continue;
        }
        if (c == '\b')
        {
            putchar("\\");
            putchar("b");
            continue;
        }
        if (c == '\\')
        {
            putchar("\\");
            putchar("\\");
            continue;
        }

        putchar(c);
    }
    printf("%.0f\n", count);
}