/*5. Write a program in C to calculate and print the Electricity bill of a given
customer. The customer id., name and unit consumed by the user should be
taken from the keyboard and display the total amount to pay to the customer.
The charges are as follow:

Unit Charge/Unit
Up to 199 @16.20
200 and above but less than 300 @20.10
300 and above but less than 500 @27.10
500 and above @35.90
If the bill exceeds Rs. 18000 then a surcharge of 15% will be charged on top of the bill.*/

#include <stdio.h>
int main()
{

    int Customer_ID, Unit_Consumed, Amount_Charge, Surcharge_Amount, Net_Amount;

    printf("Enter Customer ID:");
    scanf("%d", &Customer_ID);

    printf("Enter Unit Consumed:");
    scanf("%d", &Unit_Consumed);

    if (Unit_Consumed >= 0 && Unit_Consumed <= 199)
    {
        Amount_Charge = 16.20 * Unit_Consumed;
    }
    else if (Unit_Consumed >= 200 && Unit_Consumed < 300)
    {
        Amount_Charge = 20.10 * Unit_Consumed;
    }
    else if (Unit_Consumed >= 300 && Unit_Consumed < 500)
    {
        Amount_Charge = 27.10 * Unit_Consumed;
    }
    else if (Unit_Consumed >= 500)
    {
        Amount_Charge = 35.90 * Unit_Consumed;
    }

    Surcharge_Amount = (Amount_Charge > 18000) ? (Amount_Charge / 100) * 15 : 0;

    Net_Amount = Amount_Charge + Surcharge_Amount;


    printf("Customer ID : %d\nUnits Consumed : %d", Customer_ID , Unit_Consumed);
    printf("\nAmount Charge : Rs %d \nSurCharge Amount : %d \nNet Amount Paid by Customer: %d" , Amount_Charge, Surcharge_Amount, Net_Amount);

    return 0;
}


