#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    int i;
    int result;
    printf("%d\t%d\t", a, b);
    for ( i = 1; i <= 7; i++)
    {
        result = a * b;
        printf("%d\t", result);
        a = b;
        b = result;
    }
}
