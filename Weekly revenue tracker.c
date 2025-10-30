//
/*
Name: ONGERI PURITY MOGUTE 
Reg:CT101/G/26502/25
*/
#include <stdio.h>

int main() {
    float revenue[7], total = 0, average;
    int i;

    // Input daily revenues
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal Weekly Revenue: %.2f", total);
    printf("\nAverage Daily Revenue: %.2f\n", average);

    return 0;
}