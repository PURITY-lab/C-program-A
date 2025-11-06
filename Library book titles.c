//
/*
Name: ONGERI PURITY MOGUTE 
Reg:CT101/G/26502/25
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fp, "%s", title);
    printf("Book title successfully stored!\n");

    fclose(fp);
    return 0;
}