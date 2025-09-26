/*
   Name: MICHAEL MUBIA MATHENGE 
   REG NO: CT101/G/26492/25
   DESCRIPTION: A C PROGRAM SHOWING MY HEIGHT BANK BALANCE AND PHONE NUMBER 
*/

#include <stdio.h>

int main() {
    //Declare variables
    float height;               
    double bank_balance;        
    long long phone_number;     

    // prompt user to input height 
    printf("Enter your height (in feet): ");
    scanf("%f", &height);
    
    //prompt user to input bank balance 
    printf("Enter your bank balance: ");
    scanf("%lf", &bank_balance);
    
    //prompt user to input phone number 
    printf("Enter your phone number: ");
    scanf("%lld", &phone_number);

    // Display the entered values
    printf("\nHeight: %.2f feet\n", height);
    printf("Bank Balance: Ksh. %.2lf\n", bank_balance);
    printf("Phone Number: %lld\n", phone_number);

    return 0;
}