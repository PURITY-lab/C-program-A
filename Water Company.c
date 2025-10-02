//WATER COMPANY BILLING SYSTEM 
/*
Name: ONGERI PURITY MOGUTE 
Reg No: CT101/G/26502/25
*/
#include <stdio.h>

// Define constants for the rate tiers
#define RATE_TIER1 20.0  // 0-30 units
#define RATE_TIER2 25.0  // 31-60 units
#define RATE_TIER3 30.0  // Above 60 units

int main() {
    int units_consumed;
    float total_bill = 0.0;

    // Prompt and read input
    printf("--- Water Company Billing System ---\n");
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units_consumed);

    // Use a robust if-else if-else structure to calculate the bill based on tiers
    if (units_consumed >= 0 && units_consumed <= 30) {
        // Tier 1: 0-30 units
        total_bill = (float)units_consumed * RATE_TIER1;

    } else if (units_consumed <= 60) {
        // Tier 2: 31-60 units
        float cost_tier1 = 30 * RATE_TIER1;
        int units_in_tier2 = units_consumed - 30;
        float cost_tier2 = (float)units_in_tier2 * RATE_TIER2;
        
        total_bill = cost_tier1 + cost_tier2;

    } else { // units_consumed > 60
        // Tier 3: Above 60 units
        float cost_tier1 = 30 * RATE_TIER1;
        float cost_tier2 = 30 * RATE_TIER2; // Total of 30 units in this tier
        
        int units_in_tier3 = units_consumed - 60;
        float cost_tier3 = (float)units_in_tier3 * RATE_TIER3;
        
        total_bill = cost_tier1 + cost_tier2 + cost_tier3;
    }

    // Display the result
    printf("\nTotal units consumed: %d\n", units_consumed);
    printf("Your total water bill is: %.2f KES\n", total_bill);

    return 0;
}