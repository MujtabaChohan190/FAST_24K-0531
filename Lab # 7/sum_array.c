/*1. Write a C Program that takes an user input array and prints the sum of its elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45*/

#include<stdio.h>
int main(){
    int input[9];
    int num;
    int sum = 0;
    for( int i=0 ; i<=8 ; i++){
        printf("Enter the number: ");
        scanf("%d" , &num);
        input[i] = num;
        sum = sum + input[i];
       
    }
    printf("The sum of input array is : %d" , sum);
    return 0;
}
