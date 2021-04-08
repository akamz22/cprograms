//print factorial of any number 
#include <stdio.h>
int main()
{
    int n, Fact = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n > 0)
    {
        Fact = Fact * n;
        n--;
    }
    printf("Factorial of a number : %d", Fact);
    return 0;
}
