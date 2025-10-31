/*
   Name: Michael Bildad Mubia 
   Reg No: CT101/G /26492/25 
   Description: A C Program to display the chain
*/
// chain_3d.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int BRANCHES = 3;
    const int FLOORS = 5;
    const int ROOMS = 10;
    int chain[BRANCHES][FLOORS][ROOMS];
    srand((unsigned) time(NULL));

    // Fill with random occupancy
    for (int b = 0; b < BRANCHES; ++b) {
        for (int f = 0; f < FLOORS; ++f) {
            for (int r = 0; r < ROOMS; ++r) {
                chain[b][f][r] = rand() % 2;
            }
        }
    }

    // Calculate totals
    int totalOccupied = 0;
    for (int b = 0; b < BRANCHES; ++b) {
        int branchOccupied = 0;
        for (int f = 0; f < FLOORS; ++f) {
            for (int r = 0; r < ROOMS; ++r) {
                branchOccupied += chain[b][f][r];
            }
        }
        totalOccupied += branchOccupied;
        printf("Branch %d: Occupied rooms = %d out of %d\n",
               b + 1, branchOccupied, FLOORS * ROOMS);
    }

    printf("\nTotal occupied rooms across all branches: %d out of %d\n",
           totalOccupied, BRANCHES * FLOORS * ROOMS);

    return 0;
}