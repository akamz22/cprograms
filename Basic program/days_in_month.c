#include <stdio.h>
int main()
{
    int month, year;
    printf("Enter a month number");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Number of days = 31 ");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Number of days = 30");
    }

    else
    {
        printf("Enter the year number");
        scanf("%d", &year);
        if (year % 4 == 0)
            printf("Number of days = 29");
        else
        {
            printf("Number of days = 28");
        }
    }
    return 0;
}