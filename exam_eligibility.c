/*
    Name: Michael Mubia Mathenge 
    Reg No: CT101/G/26492/25 
    Program: exam_eligibility.c
    Description: Checks if a student is eligible for final exams.
 */
 
 #include <stdio.h>
 
int main() {
    //Variables declaration 
    float attendance_percent;
    int average_marks;

    // Prompt user for inputs
    printf("Enter student's attendance percentage: ");
    scanf("%f", &attendance_percent);

    //prompt user for input 
    printf("Enter student's average marks: ");
    scanf("%d", &average_marks);

    // Check eligibility 
    if (attendance_percent >= 75.0 && average_marks >= 40) {
        printf("\nStudent is eligible for final exams.\n");
    } 
    else {
        // Output for not eligible 
        printf("\nNot eligible.\n"); 
    }

    return 0;
}