/*3. Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else.*/

#include <stdio.h>
int main()
{
  char character;
  printf("Enter the Character :");
  scanf(" %c" , &character);
  
  if (character>=97&&character<123)
  {
    printf("Character is small alphabet");
  }
  else if(character>=65&&character<91)
  {
    printf("Character is capital alphabet");
  }
  else if(character>=48&&character<58)
  {
    printf("Character is a digit");
  }
  else if((character>=32&&character<=47) || (character>=58&character<=64) || (character>=91&&character<=96) || (character>=123&&character<=126))
  { 
    printf("Character is a special character");
  }
  else
  {
    printf("Invalid Input");
  }

return 0;

}

  
  