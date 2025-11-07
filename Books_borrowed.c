/*
  Name: Michael Mubia 
  Reg No: CT101/G/26492/25 
  Description: A C program for a file . 
*/
#include <stdio.h>
#include <stdlib.h> // For exit()
#include <string.h> // For string operations

void track_borrowed_book() {
    FILE *file_ptr;
    char book_title[100];
    const char *filename = "borrowed_books.txt";

    // Open the file in append mode ("a")
    // If the file does not exist, it will be created.
    // The "a" mode ensures new data is added to the end.
    file_ptr = fopen(filename, "a");

    if (file_ptr == NULL) {
        printf(" Error: Could not open or create file %s\n", filename);
        // Use exit(1) to indicate an error
        exit(1);
    }

    printf(" Enter the title of the borrowed book: ");
    // Use fgets to read the title, including spaces, up to 99 characters.
    // stdin is the standard input stream (keyboard).
    if (fgets(book_title, sizeof(book_title), stdin) == NULL) {
        printf(" Error reading input.\n");
        fclose(file_ptr);
        return;
    }

    // Remove the newline character that fgets adds, if it exists
    book_title[strcspn(book_title, "\n")] = 0;

    // Write the title to the file followed by a newline character
    fprintf(file_ptr, "%s\n", book_title);

    // Close the file to ensure the data is written to disk
    fclose(file_ptr);

    // Display a confirmation message
    printf(" Success! Title '%s' has been stored in %s.\n", book_title, filename);
}

// Simple main function to demonstrate the program
int main() {
    track_borrowed_book();
    return 0;
}