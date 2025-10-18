/*
   Name: Michael Mubia Mathenge
   Reg No: CT101/G/26492/25
   Description: A C program that converts Fahrenheit to Celsius.
*/

#include<stdio.h>

int main(){
    float fahrenheit;
    float celsius;

    printf("Enter the temperature (in fahrenheit): ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Fahrenheit is equivalent to %.2f Degrees Celsius.\n",fahrenheit,celsius);

    return 0;
}
