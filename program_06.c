#include <stdio.h>
    int main() {
    float celcius, fahrenheit;
    printf("Enter temperature in celcius:\n");
    scanf("%f",&celcius);
    fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in fahrenheit is: %f",fahrenheit);
    return 0;   
    }