//Write a program in C to read 10 numbers from keyboard and find their sum and average.
#include <stdio.h>
void main()
{
   int i,n,sum=0;
   printf("Input Value of terms : ");
   scanf("%d",&n);
   printf("\nThe first %d natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum+=i;
   }
   printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);

}