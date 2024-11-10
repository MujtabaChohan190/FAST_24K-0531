#include <stdio.h>
#include <string.h>

void reverseString(char str[], char reversed[]) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }

    // Null-terminate the reversed string
    reversed[length] = '\0';
}

int main() {
    char str[100], reversed[100];

    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverseString(str, reversed);

    // Display the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}

