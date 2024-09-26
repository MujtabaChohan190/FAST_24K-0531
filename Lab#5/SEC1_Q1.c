#include<stdio.h>
int main(){
	int age;
	printf("Enter your age.");
	scanf("%d", &age);
	printf("You entered: %d\n", age);
	
	//Categorizing age into life stages
	
	if (age>=0){
		if (age<=12){
		   printf("You are a child.\n");
        } else if (age>=13 && age<=19){
        	printf("You are a Teenager.\n");
		} else if (age>=20 && age <=59){
			printf("You are an Adult.\n");
		} else if (age>=60){
			printf("You are a Senior.\n");
		}
			      
	} else{
		printf("Invalid age entered.\n");
	}
	
	return 0;    
	
}
