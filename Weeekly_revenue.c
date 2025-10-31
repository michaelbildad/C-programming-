/*
   Name: Michael Bildad Mubia 
   Reg No: CT101/G /26492/25 
   Description: A C Program to display the weekly revenue 
*/
#include <stdio.h>

int main() {
    double revenue[7];
    double total = 0.0;
    for (int i = 0; i < 7; ++i) {
        printf("Enter revenue for day %d: ", i + 1);
        if (scanf("%lf", &revenue[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
        total += revenue[i];
    }

    double average = total / 7.0;
    printf("\nTotal weekly revenue:Ksh %.2f\n", total);
    printf("Average daily revenue:Ksh %.2f\n", average);

    return 0;
}