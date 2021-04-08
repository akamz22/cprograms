#include<stdio.h>
int main()
{
int myArray[]={76,24,39,62,74};
int i=0,sum=0;
while (i<=5)
{
    sum=sum+myArray[i];
    i++;
}
printf("Average is %d",sum/5);

return 0;
}

