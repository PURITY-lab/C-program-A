//Data bundles purchase 
/*
Name: ONGERI PURITY MOGUTE 
Reg No: CT101/G/26502/25
*/
#include <stdio.h>

int main() {
    int choice;
    
    // Displays the menu.
    printf("Select a data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");
    
    // Asks the user to enter their choice.
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    // Uses a switch statement to display the selected bundle and its cost,
    // or an "Invalid choice" message.
    switch (choice) {
        case 1:
            printf("You selected 100MB @ 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB @ 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB @ 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB @ 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}