#include <stdio.h>
int main(){
	int a = 5; // 0101 in binary
	int b = 9; // 1001 in binary
	
	printf("Before Swapping a = %d, b = %d\n", a , b);
	
    // Swapping Numbers
    a = a ^ b; // Step 1 : a becomes 1100 after xor of a and b
    b = a ^ b;// Step 2 : b becomes 5 (original value of a) 
    a = a ^ b; // Step 3 : a becomes 9 (original value of b)
    
    printf("After swapping a = %d , b = %d\n" , a , b);
    
    return 0;
    
}
