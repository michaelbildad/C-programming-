/*
   Name: Michael Mubia Mathenge 
   Reg No: CT101/G/26492/25 
   Description: A While loop program for ATM withdrawal 
*/
#include <stdio.h>

int main (){

    double balance = 5000.00; // Initial balance
    double withdrawal_amount;

    printf("--- ATM Withdrawal ---\n");
    printf("Initial Balance: Ksh %.2f\n", balance);

    // Loop continues as long as the balance is greater than 0
    while (balance > 0) {
        printf("\nEnter amount to withdraw (or 0 to stop):Ksh ");
        
        // Check if input is a valid number and greater than 0
        if (scanf("%lf", &withdrawal_amount) != 1 || withdrawal_amount <= 0) {
            printf("Invalid or zero withdrawal amount. Stopping simulation.\n");
            break; 
        }

        if (withdrawal_amount > balance) {
            printf ("Insufficient funds. Current balance: Ksh %.2f\n", balance);
        } else {
            balance -= withdrawal_amount; // Process withdrawal
            printf("Withdrawal successful. New balance: Ksh %.2f\n", balance);
        }
    }

    if (balance <= 0) {
        printf("\nAccount balance is Ksh0.00 or less. No more withdrawals allowed.\n");
    }
    printf("--------------------------------------\n\n");
    
    return 0;
}

