/*2. Create a calculator asking for operator (+ or – or * or /) and operands and
performs calculation according to the user input using switch statement.*/

#include <stdio.h>
int main() 
{
  int num1;
  printf("Enter the first operand:");
  scanf("%d" , &num1);
  int num2;
  printf("Enter the second operand:");
  scanf("%d" , &num2);

  float calculation;
  
  char operator;
  printf("Enter the operator:");
  scanf(" %c" , &operator);

  switch(operator) 
  {
   
  case '+':
  calculation = num1 + num2;
  printf("Calculated value : %f", calculation);
  break;
  
  case '-':
  calculation = num1 - num2;
  printf("Calculated value : %f", calculation);
  break;
  
  case '*':
  calculation = num1 * num2;
  printf("Calculated value : %f", calculation);
  break;
  
  case '/':
  calculation = num1 / num2;
  printf("Calculated value : %f", calculation);
  break;
  
  default:
  printf("Invalid Operator\n");
  }

  return 0;
}


  
  
   
  
   

