//LOAN QUALIFICATION 
/*
Name:Ongeri Purity Mogute 
Reg No:CT101/G/26502/25
Description: LOAN PROGRAM 
*/
#include <stdio.h>

int main() {
    // Declare variables for age (integer) and income (float for potential decimal input, though int would also work for Shillings)
    int age;
    float annual_income;

    // --- Input Section ---
    printf("--- Loan Qualification Checker ---\n");

    // Get the customer's age
    printf("Please enter your age (in years): ");
    // Use %d for integer input
    if (scanf("%d", &age) != 1) {
        printf("Invalid input for age. Please enter a number.\n");
        return 1; // Exit with error
    }

    // Get the customer's annual income
    printf("Please enter your annual income (in Shillings, e.g., 25000): Sh");
    // Use %f for float input
    if (scanf("%f", &annual_income) != 1) {
        printf("Invalid input for income. Please enter a number.\n");
        return 1; // Exit with error
    }

    // --- Qualification Logic ---
    
    if (age >= 21 && annual_income >= 21000.0) {
        
        printf("\nCongratulations you qualify for a loan.\n");
    } else {
        
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0; 
}