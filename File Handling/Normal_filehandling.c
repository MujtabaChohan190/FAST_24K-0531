#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char buffer[100]; // Buffer to store a line

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1; // Exit if file doesn't exist
    }

    // Open the output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(inputFile); // Close already opened file
        return 1;
    }

    // Read one line from input file
    if (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        // Write the line to the output file
        fputs(buffer, outputFile);
    }

    printf("Content copied successfully!\n");

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
