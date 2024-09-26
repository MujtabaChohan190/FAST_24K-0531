/*Create a program that checks if a person is eligible to vote based on their age and citizenship 
status.*/

#include <stdio.h>
int main(){
	int age;
	char Nationality;
	printf("Enter your age");
	scanf("%d" , &age);
	printf("Enter your Nationality(P for Pakistani ).\n");
	scanf(" %c" , &Nationality);
	
	if (age>=18 && Nationality == 'P'){
		printf("You are Eligible to vote!.\n");
	
	}else {
		printf("You are not Pakistani , so you are not eligible for vote");
	}
	 return 0;  
}
