// Write a program to dynamically allocate memory for an array of integers. Input the size
// of the array and the elements from the user, then calculate and display the sum of the
// elements. Free the allocated memory before the program ends.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;  // Pointer to the array
    int size;
    int sum = 0;

    // Ask for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit the program if memory allocation fails
    }

    // Input the elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add the element to the sum
    }

    // Display the sum of the elements
    printf("The sum of the elements in the array is: %d\n", sum);

    // Free the allocated memory
    free(arr);

    return 0;
}
