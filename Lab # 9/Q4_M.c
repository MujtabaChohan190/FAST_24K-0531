#include <stdio.h>

// Function to perform basic arithmetic operations
float calculate(int num1, int num2, char operation) {
    switch (operation) {
        case '+':
            return num1 + num2;  
        case '-':
            return num1 - num2;  
        case '*':
            return num1 * num2;  
        case '/':
            if (num2 != 0) {
                return num1 / num2; 
            } else {
                printf("Error! Division by zero.\n");
                return 0;  // Return 0 if division by zero
            }
        default:
            printf("Invalid operation!\n");
            return 0;
    }
}

int main() {
    int num1, num2;
    char operation;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation); 

    // Call the calculate function and display the result
    float result = calculate(num1, num2, operation);
    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
