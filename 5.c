//RADIUS AND HEIGHT 
/*
Name:Ongeri Purity Mogute 
Reg No:CT101/G/26502/25
Description: Prompting the user to enter radius and height 
*/
#include <stdio.h>
#define PI 3.1416   // define constant for π

int main() {
    float radius, height, volume, surfaceArea;

    // Input
    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

    // Calculations
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Output
    printf("\nVolume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}