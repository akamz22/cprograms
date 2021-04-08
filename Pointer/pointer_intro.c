#include<stdio.h>
void main()
{
    int *ptr,i=100;
    ptr=&i;
    printf("%d\n",i);   
    printf("%u\n",ptr);
    printf("%u\n",&i);
    printf("%u\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&i));
}

//18,446,744,073,709,551,616 