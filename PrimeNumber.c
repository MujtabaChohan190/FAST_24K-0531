#include<stdio.h>
int main(){
	int i = 2;
	int n;
	int prime = 0;
	printf("Enter number to check if its prime number: ");
	scanf("%d" , &n);
	
    for(i=2;i<n;i++){
    	if(n%i==0){
    		prime = 1;
		}
	}
    if(prime)
	{
		printf("%d is not prime number.\n" , n);
			
	}else{
		printf("%d is prime number.\n" , n);
   }
		
			
	
	return 0;
	
}
