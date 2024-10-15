/*Write a C Program that takes an user input array and prints the sum of its elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45*/

#include<stdio.h>
int main(){
	int n , i;
	int sum = 0;
	
	printf("Enter the number of elements: ");
	scanf("%d" , &n);
	int arr[n];
	
	printf("Enter the elements of array:\n");
	for(i=0 ; i < n ; i++){
		scanf("%d" , &arr[i]);
		sum = sum + arr[i];
		
	}
	printf("Sum of array elements is: %d\n" , sum);
	return 0;
}


