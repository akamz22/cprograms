#include <stdio.h>
void main()
{
    int i = 0, num[4];
    float sum = 0, avg = 0;
    for (i = 0; i < 4; i++)
    {
        printf("Enter the number : \n");
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 4; i++)
    {
        sum = sum + num[i];
    }
    avg = sum / 4;
    printf("Average is %2f", avg);
}
