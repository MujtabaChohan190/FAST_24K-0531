#include<stdio.h>

int main(){
	int i , n;
	int smallest;
	int second_smallest;
	
	//Enter the number of elements in array
	printf("Enter the number of elements you want in array: ");
	scanf("%d" , &n);
	
	if(n<2){
		printf("Array must have atleast 2 elements.\n");
		return 1;
	}
	
	int arr[n];
	
	//Enter the values of element
	
	printf("Enter the values of element in array: ");
	for(i=0 ; i<n ; i++){
		scanf("%d" , &arr[i]);	
	}
	//Initializing the second and largest array
	
	smallest = arr[0];
	second_smallest = 999;
	
	//Loop through the array
	
	for(i=1; i<n ; i++ ){
		if(arr[i]<smallest){
			second_smallest = smallest;
			smallest = arr[i];
		}else if(arr[i] < second_smallest && arr[i] != smallest){
			second_smallest = arr[i];
		}						
	}
	
    // Check if a second smallest element was found
    
    if(second_smallest == 999){
        printf("There is no second smallest element.\n");
    } else{
        printf("The second smallest element is %d\n", second_smallest);
    }
	return 0;
}
