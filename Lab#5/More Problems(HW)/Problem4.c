/*Develop a program that uses logical operators to determine if a person is eligible for a loan based on age, income, and credit score.*/

#include<stdio.h>
int main(){
	int age , credit_score;
	float income;
	printf("Enter the age: ");
	scanf("%d" , &age);
	printf("Enter the income: ");
	scanf("%f" , &income);
	printf("Enter the credit score: ");
	scanf("%d" , &credit_score);
	
	//Logical condition to determine eligibility
	if((age>=21 && age<=65) && (income>=30000.00) && (credit_score>=500)){
		printf("You are eligible for loan!\n");
	}else{
		printf("You are not eligible for loan.\n");
	} 	
	return 0;	
}
