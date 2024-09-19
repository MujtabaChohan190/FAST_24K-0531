/*4. An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it&#39;s more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.*/

#include <stdio.h>
int main()
{

    float actual_cost, discount, discounted_Cost;

    printf("Enter the actual cost: ");
    scanf("%f", &actual_cost);

    if (actual_cost >= 500 && actual_cost <= 2000)
    {
        discount = actual_cost * 5/100;
    }
    else if (actual_cost > 2000 && actual_cost <= 4000)
    {
        discount = actual_cost* 10/100;
    }
    else if (actual_cost > 4000 && actual_cost <= 6000)
    {
        discount = actual_cost * 20/100;
    }
    else if (actual_cost > 6000)
    {
        discount = actual_cost * 35/100;
    }

    discounted_Cost = actual_cost - discount;

    printf("The Actual Cost is :%f\n The Discount applied is :%f\n The Final Cost is :%f", actual_cost, discount, discounted_Cost);

    return 0;
}