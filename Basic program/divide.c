#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    if (a % 11 == 0 && a % 5 == 0)

            printf("a is div by 5 and 11");

    else
    
        printf("not div by 5 and 11");
    
    return 0;
}