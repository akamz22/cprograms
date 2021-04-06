//Write a C program to find cube of any number using function.
#include <stdio.h>
#include <stdlib.h>
int  cube(int x);
int  main()
{
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    cube(a);
    return 0;
}
int cube(int x)
{
    int cub;
    cub = (x * x * x);
    printf("%d", cub); 
    return 0;
}
