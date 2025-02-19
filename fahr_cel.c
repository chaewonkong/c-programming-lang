#include <stdio.h>
// fahrenheit to celsius table

int main()
{
    float fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        cel = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f\t %.1f\n", fahr, cel);
        fahr = fahr + step;
    }

    return 0;
}