/*
    Name: Michael Mubia Mathenge 
    Reg No: CT101/G/26492/25 
    Program: data_bundle.c
    Description: Allows the user to select a data bundle using a switch statement.
 */
 
 #include <stdio.h>
 
int main() {
    int choice;

    // Display the menu 
    printf("Select data bundle:\n"); 
    printf("1. 100MB @ 50 KES\n"); 
    printf("2. 500MB @ 200 KES\n"); 
    printf("3. 1GB @ 350 KES\n"); 
    printf("4. 2GB @ 600 KES\n"); 

    // Ask the user to enter their choice (1-4) 
    printf("Enter your choice (1-4): "); 
    scanf("%d", &choice);

    // Use a switch statement to process the choice 
    switch (choice) {
        case 1:
            printf("You selected 100MB. Cost: 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost: 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost: 350 KES\n"); 
            break;
        case 4:
            printf("You selected 2GB. Cost: 600 KES\n");
            break;
        default:
            // Display "Invalid choice" if outside 1-4 [cite: 85]
            printf("Invalid choice\n"); 
    }

    return 0;
}