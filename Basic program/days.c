#include <stdio.h>
int main()
{
    int week=0;
    printf("Enter a week number");
    scanf("%d", &week);
    if (week == 1)
    {
        printf("MONDAY");
    }
    else if (week == 2)
    {
        printf("TUESDAY");
    }
    else if (week == 3)
    {
        printf("WEDNESDAY");
    }
    else if (week == 4)
    {
        printf("THURSDAY");
    }
    else if (week == 5)
    {
        printf("FRIDAY");
    }
    else if (week == 6)
    {
        printf("SATURDAY");
    }
    else if (week == 7)
    {
        printf("SUNDAY");
    }
    else
    {
        printf("Invalid week number");
    }
    
}