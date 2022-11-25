#include <stdio.h>

/* Celsius to farh table */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = upper;

    /* heading above the table */
    printf("%6s %3s\n", "Celsius", "Farh");
    printf("----------------\n");

    while(celsius >= lower) {
        fahr = (5.0/9.0)*celsius+32.0;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius - step;
    }
}
