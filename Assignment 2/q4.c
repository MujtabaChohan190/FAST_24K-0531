#include <stdio.h>
#include <string.h>

// Function for identifying anagrams
int are_anagrams(char str1[], char str2[]) {
    int count1[256] = {0}; // To keep track of character frequency
    int count2[256] = {0};

    // Check if lengths are the same
    if (strlen(str1) != strlen(str2)) {
        return 0; // Not anagrams if lengths differ
    }

    // Check if character frequency is the same
    for (int i = 0; str1[i] != '\0'; i++) {
        count1[(int)str1[i]]++;
        count2[(int)str2[i]]++;
    }

    // Compare character frequencies
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Not anagrams if character count differs
        }
    }
    return 1; // They are anagrams
}

int main() {
    int num_strings, max_char;

    // Get user input for number of strings and max characters
    printf("Enter the number of strings: ");
    scanf("%d", &num_strings);
    printf("Enter the maximum number of characters per string: ");
    scanf("%d", &max_char);

    // Clear input buffer
    getchar();

    char strings[num_strings][max_char + 1];
    int grouped[num_strings]; // To mark which strings have been grouped

    // Initialize the grouped array
    for (int i = 0; i < num_strings; i++) {
        grouped[i] = 0;
    }

    // Input the strings
    for (int i = 0; i < num_strings; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], max_char + 1, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove newline
    }

    // Grouping and printing anagrams as per specified pattern
    printf("[");
    int first_group = 1; // Track if it's the first group for comma separation

    for (int i = 0; i < num_strings; i++) {
        if (grouped[i] == 0) { // If not already grouped
            if (first_group == 0) { //After printing the first group, we set first_group to 0, which signals that subsequent groups should have a comma before them.
                printf(", ");
            }
            first_group = 0; // After printing the first group, set this to 0

            printf("[");
            printf("%s", strings[i]);
            grouped[i] = 1; // Mark as grouped

            for (int j = i + 1; j < num_strings; j++) {
                if (are_anagrams(strings[i], strings[j]) == 1) {
                    printf(", %s", strings[j]); // Print anagram if found
                    grouped[j] = 1; // Mark as grouped
                }
            }
            printf("]");
        }
    }
    printf("]\n");

    return 0;
}
