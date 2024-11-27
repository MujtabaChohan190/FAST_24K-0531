// Write a recursive function linearSearch that takes an array, its size, the target element
// to search for, and the current index. It checks if the target is at the current index and
// continues searching in the subsequent indices until it either finds the target or exhausts
// the array.

#include <stdio.h>
void print(int arr[], int n, int search)
{
  if (n == 0)
  {
    if (arr[n] == search)
    {
      printf("\nThe number is at index %d", n);
    }
    return;
  }
  else
  {
    print(arr, n - 1, search);
    if (arr[n] == search)
    {
      printf("\nThe number is at index %d", n);
    }
    else
      return;
  }
}

int main()
{
  int n, search;
  printf("Enter size of array ");
  scanf("%d", &n);
  int arr[n];
  printf("\nEnter array elements ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the  number You want to search in the array ");
  scanf("%d", &search);
  print(arr, n - 1, search);
  return 0;
}
