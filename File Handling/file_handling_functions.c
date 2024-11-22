#include <stdio.h>

void writeToFile(FILE *fp) {
    char buffer[100];
    printf("Enter a line of text: ");
    fgets(buffer, sizeof(buffer), stdin);
    fputs(buffer, fp);
}

void readFromFile(FILE *fp) {
    char buffer[100];
    printf("File Contents:\n");
    while (fgets(buffer, sizeof(buffer), fp)) {
        fputs(buffer, stdout);
    }
}

int main() {
    FILE *file;

    // Write to file
    file = fopen("log.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open log.txt\n");
        return 1;
    }
    writeToFile(file);
    fclose(file);

    // Read from file
    file = fopen("log.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open log.txt\n");
        return 1;
    }
    readFromFile(file);
    fclose(file);

    return 0;
}
