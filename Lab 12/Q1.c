// Create a program to calculate the average marks of a class of students using a structure.
// The program should ask for the number of students and input their details dynamically.

#include <stdio.h>
#include <stdlib.h>

// Define a structure for student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    float sum = 0.0, average;

    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit if memory allocation fails
    }

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // To take a full name with spaces
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        sum += students[i].marks; // Add marks to the sum
    }

    // Calculate average marks
    average = sum / n;

    // Output student details and the average
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    printf("\nAverage Marks: %.2f\n", average);

    // Free allocated memory
    free(students);

    return 0;
}
