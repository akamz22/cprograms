#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\n\n");
    printf("Enter three angles of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b+c==180))
    {
        printf("Triangle valid");
    }
    else
    {
      printf("Triangle not valid");
    }
    
    
    return 0;
}