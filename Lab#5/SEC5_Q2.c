#include <stdio.h>

int main() {
    int num, sum;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop until the result is a single digit
    while (num >= 10) {
        sum = 0;

        // Calculate the sum of digits of the current number
        while (num != 0) {
            sum += num % 10;  // Add the last digit to sum
            num /= 10;        // Remove the last digit
        }

        // Update the number to be the sum of its digits , it will then go to outer loop and check if sum is in single digits
        num = sum;
    }

    // Display the final result (single digit)
    printf("The single digit sum is: %d\n", num);

    return 0;
}
