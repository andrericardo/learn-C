#include <stdio.h>

int main()
{
    double count;
    int c;
    while((c = getchar()) != EOF)
    {
        if (c == '\t' || c == '\n') {
            count++;
        }
    }
    printf("%.0f\n", count);
}