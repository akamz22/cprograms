#include <stdio.h>
int sumofelements(int *A, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i];//(*(A+i))
    }
    return sum;
}
int main()
{
    int A[]={2,3,4,5,6},i;
    int size=sizeof(A)/sizeof(&A[0],size);//(A,size)
    int total=sumofelements(A,size);
    printf("Sum of elements = %d\n",total);
    return 0;
}