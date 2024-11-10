/*Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/

#include<stdio.h>
void swapIntegers(int *a , int *b);
void swapIntegers(int *a , int *b){
    int temp;
    temp = *a; //Dereference a to get the value at the address of a
    *a = *b;
    *b = temp; 
}
int main(){
    int x;
    int y;
    printf("Input the first number: ");
    scanf("%d", &x);
    printf("Input the second number: ");
    scanf("%d", &y);

    printf("The two values before swap are %d and %d\n", x , y);
    swapIntegers(&x , &y); //Parameters are taking the address of variable
    printf("The two values after swap are %d and %d", x , y);

    return 0;
}
