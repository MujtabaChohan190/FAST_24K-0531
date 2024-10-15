/*Write a program in C to read n number of values in an array and display it in reverse order
Input: {1,2,3,4,5,6,7,8,9}
Output: 9 8 7 6 5 4 3 2 1*/

#include<stdio.h>
int main(){
	int n , i;
	
	printf("Enter the number of elements in array: ");
	scanf("%d" , &n);
	
	int arr[n];
	
	//Input elements of array
	
	printf("Enter the elements of the array:\n");
	for(i=0 ; i<n ; i++)
	scanf("%d" , &arr[i]);
	
	//Display the elements of array in reverse order
	
	printf("Array elements in reverse order:\n");
	for(i=n-1 ; i>=0 ; i--){
		printf("%d" , arr[i]);
		
	}
	
	//To move the cursor to the next line after printing all elements
	printf("\n");
	return 0;
	
}


