// Write a recursive function linearSearch that takes an array, its size, the target element
// to search for, and the current index. It checks if the target is at the current index and
// continues searching in the subsequent indices until it either finds the target or exhausts
// the array.

#include <stdio.h>


int linearSearch(int arr[], int size, int target, int index) {
    
    if (index == size) {
        return -1;  // Return -1 to indicate that the target is not in the array
    }

    // If the current element matches the target, return the index
    if (arr[index] == target) {
        return index;
    }

    // Recursive call to search in the next index
    return linearSearch(arr, size, target, index + 1);
}

int main() {
  
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]); // Number of elements in the array
    int target = 10;

    // Calling the recursive linearSearch function starting from index 0
    int result = linearSearch(arr, size, target, 0);

    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
