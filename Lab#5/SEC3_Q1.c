/*Write a program using a ternary operator to find the maximum of two numbers.*/

#include <stdio.h>
int main(){
	int num1 , num2 , max;
	printf("Enter the first number:");
	scanf ("%d" , &num1);
	printf("Enter the second number:");
	scanf("%d", &num2);
	
	// Using the ternary operator to find the maximum of two numbers
    max = (num1 > num2) ? num1 : num2;
    
    printf("The maximum of two numbers is: %d\n" , max);
	
	return 0;	
}
