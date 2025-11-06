//
/*
Name: ONGERI PURITY MOGUTE 
Reg:CT101/G/26502/25
*/
//An array is a collection of elements of the same data type stored in contagious memory locations and is accessed using an index.
#include <stdio.h>

int main() {
    int scores[2][4] = {
        {65, 92, 135, 70},
        {84, 72, 159, 67}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}