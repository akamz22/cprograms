#include <stdio.h>
int main()
{ 
    /*
    printf("Enter number of elements in array \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }*/
    int a[10] = {8, 9, 17, 5, 14, 12, 16, 27, 15};
    int i = 0, j = 0, temp = 0;
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Printing Sorted Element List ...\n");
    for (j = 1; j < 10; j++)
    {
        printf("%d\n", a[j]);
    }

    return 0;
}