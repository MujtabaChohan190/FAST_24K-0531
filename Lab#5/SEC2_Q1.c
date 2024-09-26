/*Write a program that checks if a number is divisible by both 3 and 5 using logical operators.*/

#include<stdio.h>
int main(){
	int num;
	printf("Enter the number");
	scanf("%d", &num);
	
	if (num%3==0 && num%5==0){
		printf("Number is divisible by both 3 and 5.\n");				
	}else{
		printf("Number not divisbke by 3 and 5");
	}
	return 0;
}

