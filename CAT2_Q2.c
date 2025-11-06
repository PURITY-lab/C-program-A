//
/*
Name: ONGERI PURITY MOGUTE 
Reg:CT101/G/26502/25
*/
#include <stdio.h>

int main() {
    float hours, wage, grossPay, tax, netPay;
    
    // Get user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);
    
    // Calculate gross pay with overtime
    if (hours > 40)
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);
    else
        grossPay = hours * wage;
    
    // Calculate tax
    if (grossPay <= 600)
        tax = grossPay * 0.15;
    else
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    
    // Net pay
    netPay = grossPay - tax;
    
    // Display results
    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTax: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", netPay);
    
    return 0;
}