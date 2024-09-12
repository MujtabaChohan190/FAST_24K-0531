/*1. Write a C program to check whether a number is multiple of 3 or not. If it is
then print “This number is multiple of 3”, otherwise print “This number is not
multiple of 3”.*/

#include<stdio.h>
int main() 
{
   int num;
   int remainder;
   printf("Enter the Number:");
   scanf("%d" , &num);
   remainder = num % 3;
   if (remainder == 0)
   {
      printf("The number is multiple of 3");
   }
   else
   {
     printf("The number is not multiple of 3");
   }

   return 0;
}



