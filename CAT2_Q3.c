//
/*
Name: ONGERI PURITY MOGUTE 
Reg:CT101/G/26502/25
*/
#include <stdio.h>
#include <stdlib.h>

void writeInput() {
    FILE *fp;
    int num, i;
    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d ", num);
    }

    fclose(fp);
}

void processNumbers() {
    FILE *inFile, *outFile;
    int num, count = 0, sum = 0;
    float avg;

    inFile = fopen("input.txt", "r");
    outFile = fopen("output.txt", "w");

    if (inFile == NULL || outFile == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }

    while (fscanf(inFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    avg = (float)sum / count;
    fprintf(outFile, "Sum = %d\nAverage = %.2f\n", sum, avg);

    fclose(inFile);
    fclose(outFile);
}

void displayFiles() {
    FILE *fp;
    char ch;

    printf("\nContents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error reading input.txt\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error reading output.txt\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}

int main() {
    writeInput();
    processNumbers();
    displayFiles();
    return 0;
}