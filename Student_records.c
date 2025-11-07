/*
  Name: Michael Mubia 
  Reg No: CT101/G/26492/25 
  Description: A C program for a file . 
*/
#include <stdio.h>
#include <stdlib.h>

// i. Defines a structure to hold the student information.
struct Student {
    char name[50];
    char reg_number[20];
    int total_marks;
};

// Helper function to create a sample binary file for testing
void create_sample_binary_file() {
    FILE *file_ptr = fopen("results.dat", "wb"); // "wb" is write binary
    if (file_ptr == NULL) {
        perror("Error creating sample file");
        return;
    }

    struct Student s1 = {"Alice Smith", "U1001", 85};
    struct Student s2 = {"Bob Johnson", "U1002", 92};

    fwrite(&s1, sizeof(struct Student), 1, file_ptr);
    fwrite(&s2, sizeof(struct Student), 1, file_ptr);

    fclose(file_ptr);
}

void read_and_display_students() {
    FILE *file_ptr;
    struct Student student_record;
    const char *filename = "results.dat";

    // Open the file in read binary mode ("rb")
    file_ptr = fopen(filename, "rb");

    if (file_ptr == NULL) {
        printf(" Error: Could not open file %s. Please ensure it exists and is not corrupted.\n", filename);
        // For demonstration, we could call the creator and try again, but generally, this is a fatal error.
        exit(1);
    }

    printf("\n Reading Student Examination Results from %s:\n", filename);
    printf("--------------------------------------------\n");

    // ii. Reads all student records from the binary file.
    // fread returns the number of items successfully read. It will return 0 at EOF.
    while (fread(&student_record, sizeof(struct Student), 1, file_ptr) == 1) {
        // iii. Displays the name and marks of each student on the screen.
        printf("Name: %-30s | Total Marks: %d\n", student_record.name, student_record.total_marks);
    }

    // Close the file
    fclose(file_ptr);
    printf("--------------------------------------------\n");
    printf("All records have been read and displayed.\n");
}

int main() {
    // Create the file first so the main logic has something to read
    create_sample_binary_file();
    
    read_and_display_students();
    return 0;
}