#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table
    for farh = 0, 20, ..., 300; floating-point version */

int main()
{
    printf("Fahr Celsius\n");

    float fahr, celsius;

    fahr = LOWER;
    while (fahr <= UPPER ) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }

    return 0;
}