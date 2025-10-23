//Fare 
/*
Name: ONGERI PURITY MOGUTE 
Reg No: CT101/G/26502/25
*/
#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);
    printf("Total fare: KSh. %.2f\n", calculateFare(distance));
    return 0;
}