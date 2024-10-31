#include <stdio.h>
#include <string.h>

// Compressing Function
void compress_word(char input[], char output[], int removed_char[]) {
    char current_char;
    int index = 0;
    int count = 0;

    // Array to track seen characters
    int seen[256] = {0}; // Assuming ASCII characters

    // Traverse the input string
    for (int j = 0; input[j] != '\0'; j++) {
        current_char = input[j];

        if (index == 0 || output[index - 1] != current_char) {
            if (seen[(unsigned char)current_char] == 0) {
                output[index] = current_char; // Add to the output
                seen[(unsigned char)current_char] = 1; // Mark this character as seen
                index++;
            } else {
                count++; // Increment count for removed chars
            }
        } else {
            count++; // Increment count if the character is the same as the last added
        }
    }

    output[index] = '\0'; // Null terminate the output string
    removed_char[0] = count; // Store the count of removed characters
}

// Main Function
int main() {
    // Declare the arrays
    char string_arr[100];  // Array to store a single input string (max length 100)
    char result[100];      // Array to store the compressed result
    int removed_char[1];   // Array to track removed characters

    // Input a single string
    printf("Enter a string: ");
    fgets(string_arr, sizeof(string_arr), stdin);
    string_arr[strcspn(string_arr, "\n")] = '\0'; // Remove the newline character

    // Process the string to compress it
    compress_word(string_arr, result, removed_char); // Pass the string to the compress function

    // Print the updated string and the number of removed characters
    printf("\nString after duplicates removal: %s\n", result);
    printf("Characters removed: %d\n", removed_char[0]);

    return 0;
}
