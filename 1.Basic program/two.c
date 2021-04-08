#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    printf("Enter the value of a \n");
    scanf("%d",& a);
    printf("Enter the value of b \n");
    scanf("%d",& b);
    if (a > b)
    {
        printf("Greatest number is a ");
    }
    else
    {
        printf("Greatest number is b");
    }
    return 0;
}