#include <stdio.h>

int main()
{

    float TaxRate, Salary, Tax, FinalSalary;

    printf("\nEnter Tax Rate :");
    scanf("%f", &TaxRate);

    printf("\nEnter your Salary :");
    scanf("%f", &Salary);

    if (TaxRate >= 1)
    {
        printf("\nInvalid Tax Rate");
    }
    else
    {
        Tax = Salary * TaxRate;
        FinalSalary = Salary - Tax;

        printf("\nYour Tax amount is : %.2f \nYour Salary after the paying the Tax is : %.2f", Tax, FinalSalary);
    }

    return 0;
}