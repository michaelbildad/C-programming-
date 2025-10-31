/*
   Name: Michael Bildad Mubia 
   Reg No: CT101/G /26492/25 
   Description: A C Program to display the rooms occupancy 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int FLOORS = 5;
    const int ROOMS = 10;
    int occupancy[FLOORS][ROOMS];
    srand((unsigned) time(NULL));

    // Assign random occupancy (0 or 1)
    for (int f = 0; f < FLOORS; ++f) {
        for (int r = 0; r < ROOMS; ++r) {
            occupancy[f][r] = rand() % 2; // 0 or 1
        }
    }

    // Display occupancy map and counts per floor
    for (int f = 0; f < FLOORS; ++f) {
        int occupied = 0;
        for (int r = 0; r < ROOMS; ++r) {
            occupied += occupancy[f][r];
        }
        int vacant = ROOMS - occupied;
        printf("Floor %d: Occupied = %d, Vacant = %d\n", f + 1, occupied, vacant);

        // Optional: show room-by-room status
        printf("  Rooms: ");
        for (int r = 0; r < ROOMS; ++r) {
            printf("%d", occupancy[f][r]);
            if (r < ROOMS - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}