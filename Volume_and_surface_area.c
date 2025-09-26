//Simple c program (MICHAEL MUBIA)
/*
Name: MICHAEL MUBIA MATHENGE 
Reg no:CT101/G/26492/25
Date:23/9/2025
Description: Volume and surface area program
V=πr×r×h
S.A=(2πr×r)+(2πrh)
*/
#include <stdio.h>
#define PI 3.142

int main() {
    float radius, height, volume, surfaceArea;

    // Prompt user to enter radius 
    printf("Enter the radius of the cylinder:");
    scanf("%f",&radius);
        
    //prompt user to enter height 
    printf("Enter the height of the cylinder:");
    scanf("%f",& height);
    
    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display output 
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

        return 0;
    }
