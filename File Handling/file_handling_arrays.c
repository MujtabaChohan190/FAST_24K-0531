#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char lines[5][100]; // Array to store 5 lines
    int i;

    // Open files
    inputFile = fopen("data.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open data.txt\n");
        return 1;
    }
    outputFile = fopen("copy.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open copy.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read up to 5 lines
    for (i = 0; i < 5; i++) {
        if (fgets(lines[i], sizeof(lines[i]), inputFile) == NULL) {
            break; // Stop if no more lines
        }
    }

    // Write lines to output file
    for (int j = 0; j < i; j++) {
        fputs(lines[j], outputFile);
    }

    printf("Lines copied successfully!\n");

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
