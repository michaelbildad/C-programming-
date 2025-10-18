/*
   Name: Michael Mubia Mathenge
   Reg No: CT101/G/26492/25
   Description: A C program that calculates the total fare in shillings.
*/

#include<stdio.h>

int main(){
    int distance;
    int fare;

    printf("Enter the distance traveled (in Kilometers): ");
    scanf("%d",&distance);

    fare = (distance * 50);

    printf("The total fare is Ksh %d",fare);

    return 0;
}
