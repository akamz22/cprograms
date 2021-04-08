#include <stdio.h>

int main()
{
    int arr[10] = {1, 1, 4, 5, 6, 4, 7, 4, 8, 3};
    int fre[10] = {0};
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        int temp = arr[i];
        fre[temp] = fre[temp] + 1; //++;
                                   // printf("%d", arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
    }
    printf("Ele = %d => Frequency = %d \n", arr[i], fre[arr[i]]);
    //Bucket Sort
}