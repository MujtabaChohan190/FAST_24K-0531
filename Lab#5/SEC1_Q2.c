/*2. Create a program that determines if a number is positive, negative, or zero, and if it’s positive, 
checks if it’s an even or odd number.*/

#include<stdio.h>
int main(){
	int num;
	printf("Enter the Number:");
	scanf("%d" , &num);
	
	if (num>0){
		printf("Number is positive.\n");
		if (num%2==0){
			printf("Number is positive and even.\n");
		}else {
			printf("Number is positive and odd.\n");
		}
	}else if (num<0){
		printf("The number is negative.\n");
	}else {
		printf("The number is zero.\n");
	}
	    
    return 0;
	
	
	  
}
