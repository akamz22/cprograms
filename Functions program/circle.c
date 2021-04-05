//Write a C program to find diameter, circumference and area of circle using functions.
#include <stdio.h>
#include <stdlib.h>
int diameter(int x);
int circumference(int y);
int area(int z);
int main()
{
    int r;
    printf("Enter the radius of circle : ");
    scanf("%d", &r);
    diameter(r);
    circumference(r);
    area(r);
    return 0;
}
int diameter(int x)
{
    int dim;
    dim = 2 * x;
    printf("Diameter of the circle is : %d\n", dim);
    return 0;
}
int circumference(int y)
{
    int circumference;
    circumference = 2 * 3.14 * y;
    printf("Circumference of the circle is : %d\n", circumference);
    return 0;
}
int area(int z)
{
    int area;
    area = (3.14 * z * z);
    printf("Area of the circle is : %d\n", area);
    return 0;
}
