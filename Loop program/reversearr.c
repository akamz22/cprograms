#include <stdio.h>

int main()
{

    int n = 0, i;
    int max = 0;
    printf("Enter the number of elements in an array... \n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements... ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed element are ");
    for (i = n-1; i >= 0; i--)
    {
        printf(" = %d  ", arr[i]);
    }

    return 0;
}
