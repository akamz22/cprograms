#include<stdio.h>
int main()

{

int a,b,c,d,e,sum,avg;  


printf("Enter the 5 numbers:");

scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

sum=a+b+c+d+e;

avg=(a+b+c+d+e)/5;

printf("\n Sum is %d",sum);

printf("\n Average is %d",avg);
return 0;

}

