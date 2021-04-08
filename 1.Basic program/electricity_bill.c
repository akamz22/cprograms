#include <stdio.h>
int main()
{
    float unit = 0, Total_bill;
    printf("Enter the total unit  ");
    scanf("%f", &unit);
    if (0 <= unit && unit <= 50)
    {
        Total_bill = (unit * 0.50) + (unit * 20 / 100);
        printf("your total bill=%f", Total_bill);
    }
    else if (51 <= unit && unit <= 150)
    {
        Total_bill = (50 * 0.50) + ((unit - 50) * 0.75) + (unit * 20 / 100);
        printf("your total bill=%f", Total_bill);
    }

    else if (151 <= unit && unit <= 250)
    {
        Total_bill = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20) + (unit * 20 / 100);
        printf("your total bill=%f", Total_bill);
    }
    else if (unit >= 250)
    {
        Total_bill = (unit * 1.50) + (unit * 20 / 100);
        printf("your total bill=%f", Total_bill);
    }

    return 0;
}