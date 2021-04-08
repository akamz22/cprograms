#include <stdio.h>
#include <math.h>
void type(float a, float b, float c);
void area(float a, float b, float c);
void main()
{
    float a, b, c;
    printf("Enter sides of triangle : ");
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        type(a, b, c);
        area(a, b, c);
    }
    else
        printf("No triangle is possible with these sides");
}
void type(float a, float b, float c)

{
    //  printf("a=%f, b=%f, c= %f\n",a,b,c);

    if ((a * a) + (b * b) == (c * c) || (b * b) + (c * c) == (a * a) || (c * c) + (a * a) == (b * b))
    {
        printf("Right angled triangle\n");
    }
    else if (a == b && b == c)
    {
        printf("Isosceles triangle\n");
    }
    else if (a == b && b == c && c == a)
    {
        printf("Equilateral triangle\n");
    }
    else
        printf("scalene triangle\n");
    //return 0;
}

// Function to Calculate Area of Triangle
void area(float a, float b, float c)
{
    float s, area;
    s = (a + b + c) / 2;
    //printf("a=%f, b=%f, c= %f\n",a,b,c);
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    area = s * ((s - a) * (s - b) * (s - c));
    printf("Area of triangle is : %f\n", area);
    //return 0;
}
