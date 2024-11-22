#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    FILE *file;
    Student students[3];
    int i;

    // Take input for 3 students
    for (i = 0; i < 3; i++) {
        printf("Enter name, age, and marks for student %d:\n", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline
        scanf("%d", &students[i].age);
        scanf("%f", &students[i].marks);
        getchar(); // Clear newline character
    }

    // Write to file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open students.txt\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        fprintf(file, "%s, %d, %.2f\n", students[i].name, students[i].age, students[i].marks);
    }
    fclose(file);

    // Read and display file contents
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open students.txt\n");
        return 1;
    }

    printf("Student Records:\n");
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file)) {
        fputs(buffer, stdout); // Display file content
    }

    fclose(file);
    return 0;
}
