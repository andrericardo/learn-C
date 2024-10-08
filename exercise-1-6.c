#include <stdio.h>

int main()
{
    int c;
    c = getchar() != EOF;
    printf("%d\n",c);

    printf("EOF: %d\n",EOF);
}