/*6. Given a positive integer denoting n, do the following:
a. If 1<=n<=9, print lowercase English words corresponding to the
numbers e.g. (one for 1, two for 2)
b. If n>9 print greater then 9.*/



#include <stdio.h>

int main() {
    int n;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if n is between 1 and 9 using switch-case
    switch (n) {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        default:
            // If n is greater than 9, print the message
            if (n > 9) {
                printf("Greater than 9\n");
            } else {
                printf("Invalid input\n");
            }
            break;
    }

    return 0;
}