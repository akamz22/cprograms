#include <stdio.h>

int main()
{

    int var1, i;
    char var2[10];

    printf("Address of var1 variable: %x\n", &var1);
    printf("Address of var2 variable: %x\n", &var2[0]);
    for ( i = 0; i < 10; i++)
    {
        printf("Address of var2 %d variable: %x\n", i,&var2[i]);

    }
    
    
    return 0;
}