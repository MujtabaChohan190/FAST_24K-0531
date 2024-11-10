/*Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime.*/

#include<stdio.h>

int isPrime(int num);
int isPrime(int num){
    //Numbers less than 2 are not prime
    if(num<=1){
        return 0; //Not prime
    }
    for(int i = 2; i*i < num; i++){
        if(num % i == 0){
            return 0; //Not prime
        }
    }
    return 1; //The number is prime
}
int main(){
    int number;
    printf("Input the number: ");
    scanf("%d", &number);

    if(isPrime(number)){
        printf("The number %d is prime\n", number);
    }else{
        printf("The number %d is not prime\n", number);
    }

    return 0;
}