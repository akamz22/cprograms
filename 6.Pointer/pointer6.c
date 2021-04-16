#include<stdio.h>
int main()
{
    int A[]={2,3,4,4,5};
    int i;
     for (i = 0; i < 5; i++)
     {
            printf("Address = %p\n",&A[i]);
            printf("Address = %p\n",A+i);
            printf("Value = %d\n",A[i]);
            printf("Value = %d\n",*(A+i));
     }
     
}