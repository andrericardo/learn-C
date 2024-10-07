# include <stdio.h>

/* print Fahrenheit-Celsius table
    for farh = 0, 20, ..., 300; floating-point version */

int main()
{
    printf("Celsius\n");

    float fahrenheit, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step = 10;
    
    celsius = lower;
    while (celsius <= upper ) {
        fahrenheit = ((9.0/5.0) * celsius)+32.0;
        printf("%6.1f %3.0f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }

    return 0;
}