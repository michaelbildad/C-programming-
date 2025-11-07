/*
  Name: Michael Mubia 
  Reg No: CT101/G/26492/25 
  Description: A C program for a file . 
*/
#include <stdio.h>
#include <stdlib.h>

// Helper function to create a sample sales file for testing
void create_sample_sales_file() {
    FILE *file_ptr = fopen("sales.txt", "w"); // "w" is write
    if (file_ptr == NULL) {
        perror("Error creating sample sales file");
        return;
    }

    fprintf(file_ptr, "150.75\n");
    fprintf(file_ptr, "20.00\n");
    fprintf(file_ptr, "45.25\n");
    fprintf(file_ptr, "100.00\n");
    fprintf(file_ptr, "3.99\n");

    fclose(file_ptr);
}

void process_daily_sales() {
    FILE *file_ptr = NULL; // Initialize to NULL for safety
    double transaction_amount;
    double total_sales = 0.0;
    const char *filename = "sales.txt";

    // Open the file in read mode ("r")
    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf(" Error: Could not open file %s. Please ensure the file exists.\n", filename);
        // No file to close, just return/exit.
        return;
    }

    // i. Reads all transactions from the file.
    // The loop continues as long as fscanf successfully reads a double value (returns 1).
    while (fscanf(file_ptr, "%lf", &transaction_amount) == 1) {
        // ii. Calculates and displays the total sales for the day.
        total_sales += transaction_amount;
    }

    // iii. Ensures the file is properly closed after reading.
    // This is done regardless of whether the loop finished successfully or if an error occurred
    // inside the loop, as long as fopen succeeded.
    if (file_ptr != NULL) {
        fclose(file_ptr);
    }

    printf("\n Daily Sales Transaction Summary from %s:\n", filename);
    printf("---------------------------------------------\n");
    // Print the result with two decimal places for currency
    printf("Total Sales for the day: Ksh %.2lf\n", total_sales);
    printf(" File successfully processed and closed.\n");
}

int main() {
    // Create the file first so the main logic has something to read
    create_sample_sales_file();
    
    process_daily_sales();
    return 0;
}