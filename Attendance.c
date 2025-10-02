//ATTENDANCE 
/*
Name: ONGERI PURITY MOGUTE 
Reg No: CT101/G/26502/25
*/
#include <stdio.h>

int main() {
    float attendance;
    float average_marks;

    // Prompt the user for attendance percentage
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    // Prompt the user for average marks
    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    // Check for eligibility
    if (attendance >= 75.0 && average_marks >= 40.0) {
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }

    return 0;
}