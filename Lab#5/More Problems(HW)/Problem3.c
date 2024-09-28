/*Write a program that uses bitwise operators to perform encryption and decryption of a 
character*/

#include<stdio.h>
int main(){
	char original_char , encrypted_char , decrypted_char;
	char key = 0x6A; //Single character key (Hexadecimal value for 'D')
	
	//Input a character to encrypt
	printf("Enter the character to encrypt: ");
	scanf(" %c" , &original_char);
	
	//Perform encryption using XOR
	encrypted_char = original_char ^ key;
	printf("Encryped character is: %c (ASCII: %d)\n" , encrypted_char , encrypted_char);
	
	//Perform decryption(XOR again to get the original value back)
	decrypted_char = encrypted_char ^ key;
	printf("Decrypted character is: %c (ASCII: %d)\n" , decrypted_char , decrypted_char);
	
	return 0;
}
