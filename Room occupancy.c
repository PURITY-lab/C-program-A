//
/*
Name: ONGERI PURITY MOGUTE 
Reg:CT101/G/26502/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0)); // for random values

    for(int i = 0; i < 5; i++) {
        occupied = vacant = 0;
        for(int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; // random 0 or 1
            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", i + 1, occupied, vacant);
    }

    return 0;
}