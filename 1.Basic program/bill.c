#include <stdio.h>
int main()
{
    int unit = 0;
    float Total_bill;
    printf("Enter the total unit  ");
    scanf("%d", &unit);
    if (0 <= unit && unit <= 50)
    {
        Total_bill = (unit * 0.50);
    }
    else if (51 <= unit && unit <= 150)
    {
        Total_bill = (50 * 0.50) + ((unit - 50) * 0.75);
    }
    else if (151 <= unit && unit <= 250)
    {
        Total_bill = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
    }
    else if (unit >= 250)
    {
        Total_bill = (unit * 1.50);
    }
    printf("your total bill = %.2f", Total_bill + (unit * 20 / 100));
    return 0;
}