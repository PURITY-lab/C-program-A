//
/*
Name: ONGERI PURITY MOGUTE 
Reg:CT101/G/26502/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    srand(time(0));

    for(int b = 0; b < 3; b++) {
        for(int f = 0; f < 5; f++) {
            for(int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
                if(chain[b][f][r] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}