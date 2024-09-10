#include <stdio.h>
int main() 
{
   int x1 = 5;
   int x2 = 3;
   int y1 = 4;
   int y2 = 2;
   float slope = 0 ;

   slope = (y2 - y1) / (x2- x1);

   printf("\nThe calcualated slope is : %.3f" , slope);

   return 0;

}