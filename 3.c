//BANK BALANCE 
/*
Name:Ongeri Purity Mogute 
Reg No:CT101/G/26502/25
Description: Prompting the user to enter bank balance 
*/
#include <stdio.h>

int main() {
    double balance;
    printf("Enter bank balance: ");
    scanf("%lf", &balance);
    printf("Bank Balance = %.2f\n", balance);
    return 0;
}