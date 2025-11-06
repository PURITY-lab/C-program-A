//
/*
Name: ONGERI PURITY MOGUTE 
Reg:CT101/G/26502/25
*/
#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("----------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %d\n", s.regNo);
        printf("Marks: %.2f\n", s.marks);
        printf("----------------------------\n");
    }

    fclose(fp);
    return 0;
}
