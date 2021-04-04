#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    int ans;
    //ans = (a == 1 ? (b == 2 ? 3 : 5) : 0);
    if(a == 1){
        if(b == 2){
            printf("3");
        }else
        {
            printf("5");
        }  
    }else
    {
        printf("0");
    }
    
    //printf("ans=%d\n", ans);
    return 0;
}
