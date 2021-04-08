#include <stdio.h>
int commonfunction(int e, int g);
// {
//     //printf("value of e is %d\n",e);
//     //printf("value of g is %d\n",g);
//     int c = e + g;
//     //printf("Addition value of %d and %d is %d\n",e,g,c);
//     return c;
// }
void main()
{
    int k, number1, number2;
    printf("Enter the value of number1 = ");
    scanf("%d", &number1);
    printf("Enter the value of number2 = ");
    scanf("%d", &number2);

    //j = commonfunction(10, 20);
    k = commonfunction(number1, number2);
    printf("Addition value of number1 and number2 = %d ", k);
}
int commonfunction(int e, int g)
{
    //printf("value of e is %d\n",e);
    //printf("value of g is %d\n",g);
    int c = e + g;
    //printf("Addition value of %d and %d is %d\n",e,g,c);
    return c;
}


