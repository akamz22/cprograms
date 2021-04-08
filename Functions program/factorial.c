//Peogram to find factorial of a number.
#include<stdio.h>
int fact();
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Factorial of number is %d",fact(num));
    return 0;
}
int fact(int a)
{
    int fact=1,i;
    for ( i = 1; i <=a; i++)
    {
        fact=fact*i;
    }
   return fact; 
}