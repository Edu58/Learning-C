#include <stdio.h>
#include <stdlib.h>

/* Print a table of Celsius-Fahrenheit conversions. */
int main() {
    int fahr, celcius;
    int upper=100, lower=0, step=10;

    fahr = lower;
    while(fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }
}