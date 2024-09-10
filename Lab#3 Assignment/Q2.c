#include<stdio.h>
int main()
{
    int a,b,temp=0;
    printf("Enter 1st and 2nd number");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("\nThe Swapped Numbers are: %d , %d" , a, b);
    return 0;

}