#include <stdio.h>
void main() {
    
    int principle_amount , time_period = 0;
    float tax_rate , Simple_Interest = 0 ;

    printf("Enter the rupees amount between the range of  100 Rs. To 1,000,000 Rs :");
    scanf("%d", &principle_amount);

    printf("Enter the Rate of interest in between (5-10) percent :");
    scanf("%f", &tax_rate);

    printf("Enter the time period between the range of 1 to 10 years :");
    scanf("%d", &time_period);

    if (principle_amount < 100 || principle_amount > 1000000 || tax_rate < 5 || tax_rate > 10 || time_period < 1 || time_period > 10)
    {
        printf("Error! Pls enter the values within the limit defined");
    }
    else
    {
        Simple_Interest = (principle_amount * tax_rate * time_period)/100;
        printf("\nYour Interest becomes : %.2f" , Simple_Interest);
    }

}