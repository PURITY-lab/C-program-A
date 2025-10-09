//ATM withdrawal program 
/*
Name: ONGERI PURITY MOGUTE 
Reg No: CT101/G/26502/25
*/
#include <stdio.h>

int main() {
    float balance, withdraw;
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;

        if (balance > 0)
            printf("Balance after withdrawal: %.2f\n", balance);
        else
            printf("Insufficient funds! Balance is now %.2f\n", balance);
    }
    return 0;
}