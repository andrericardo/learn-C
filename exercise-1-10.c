#include <stdio.h>

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