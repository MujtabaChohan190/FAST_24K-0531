/*Write a program to find the greatest of three numbers using nested if-else statements.*/
#include<stdio.h>
int main(){
	int num1 , num2 , num3;
	//Enter three numbers
	printf("Enter three numbers: ");
	scanf("%d %d %d" , &num1 , &num2 , &num3);
	
	//Check which number is greatest
	if(num1>num2){
		if(num1>num3){
			printf("The greatest number is: %d\n" , num1);
		}else{
			printf("The greatest number is : %d\n" , num3);
		}
	}else{
		if(num2>num3){
			printf("The greatest number is : %d\n" , num2);
		}else{
			printf("The greatest number is : %d\n" , num3);
		}
	}
	return 0;
}
	



