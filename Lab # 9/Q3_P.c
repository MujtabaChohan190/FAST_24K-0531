/*Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime.*/

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) { // Fixed condition
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int number;
    printf("Input the number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("The number %d is prime\n", number);
    } else {
        printf("The number %d is not prime\n", number);
    }

    return 0;
}
