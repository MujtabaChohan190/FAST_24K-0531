/*Write a C Program to find the minimum and maximum number in an array.
Input: {4,1,6,8,10,21,8,9,2,6}
Output:
Minimum Number = 1
Maximum Number = 21*/

#include<stdio.h>
int main(){
	int n , i = 0;	
	
	//Making Generic Array
	
	printf("Enter the number of elements in array: ");
	scanf("%d" , &n);
	
	int arr[n];
	
	
	//Inputting elements in array
	
	printf("Enter the elements of an array:\n");
	for(i=0 ; i<n ; i++){
		scanf("%d" , &arr[i]);
	}
	
	// Initialize min and max to the first element of the array
	
    int min = arr[0];
    int max = arr[0];
    
    //// Finding the minimum and maximum numbers in the array
    
    for(i=0 ; i<n ; i++){
    	if(arr[i]<min){
    		min = arr[i];
		}
		if(arr[i]>max){
			max = arr[i];
		}
	}
	
	// Output: Display the minimum and maximum numbers
    printf("Minimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);
    
    return 0;
	
	
}
