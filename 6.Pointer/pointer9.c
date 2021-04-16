#include <stdio.h>
void doubletheelements(int *A, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        A[i] = 2 * A[i];
    }
}
int main()
{
    int A[] = {2, 3, 4, 5, 6}, i;
    int size = sizeof(A) / sizeof(&A[0], size); //(A,size)
    doubletheelements(A, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", A[i]);
    }
    return 0;
}