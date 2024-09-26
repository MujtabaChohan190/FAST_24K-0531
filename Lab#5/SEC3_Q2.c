/*Use the ternary operator to check if a number is positive, negative, or zero.*/

#include <stdio.h>
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d" , &num);
	
	// Using nested ternary operators to check if the number is positive, negative, or zero
	(num>0) ?
	printf("The number is Positive.\n"):
	   (num<0) ?
	      printf("The number is negative.\n"):
	      printf("The number is zero.\n");
	      
	return 0;
	
	
}

