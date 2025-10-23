//convert to Celsius 
/*
Name: ONGERI PURITY MOGUTE 
Reg No: CT101/G/26502/25
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    printf("Temperature in Celsius: %.2f°C\n", convertToCelsius(f));
    return 0;
}