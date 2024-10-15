#include<stdio.h>

int main() {
    int n, i;
    
    // Input: size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input: elements of the array
    printf("Enter the elements of the array (values between 0 and %d):\n", n-1);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Traverse the array and find duplicates
    printf("Numbers that occur more than once in the array:\n");
    int found = 0; // Flag to track if duplicates are found
    for(i = 0; i < n; i++) {
        int index = arr[i] % n; // Get the index corresponding to the element
        
        // If the value at arr[index] is >= n, it means it's already seen
        if(arr[index] >= n) {
            printf("Number %d occurs more than once.\n", index);
            found = 1;
        }
        
        arr[index] += n; // Mark the element by adding n
    }

    if (!found) {
        printf("No duplicates found.\n");
    }

    return 0;
}

