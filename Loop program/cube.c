#include <stdio.h>
int main()
{
    int i, n = 0, cube = 0;
    printf("Enter  a number ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {

        cube = i * i * i;
        printf("Cube of number %d = %d\n",i,cube);
    }
    
    return 0;
}