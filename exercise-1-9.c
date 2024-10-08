#include <stdio.h>

int main()
{

    int current, previous;
    previous = EOF;
    while ((current = getchar()) != EOF)
    {
        if (current == ' ')
        {
            if (previous != ' ')
            {
                putchar(current);
            }
        }

        if (current != ' ')
        {
            putchar(current);
        }
        previous = current;
    }
}