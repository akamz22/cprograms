

//program to print prime number between 1 to 100
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("%d\n1",num);
    int flag = 0;
    for (i = 2; i <= num/2; i++)
    {   
        if (num % i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Not prime number\n");
    else
        printf("prime");
    return 0;
}
