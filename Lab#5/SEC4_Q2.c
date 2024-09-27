#include <stdio.h>
int main(){
	int num , count = 0;
	
	printf("Enter the number: ");
	scanf("%d" , &num);
	
	//Loop until the number becomes 0
	while (num!=0){
		// use bitwise AND to check if LSB is 1 
		if(num & 1){
			count++;	
		}
		num =  num >> 1;
		
	}
	printf("Number of 1's in binary representation is: %d\n" , count);
	return 0;
}
