#include <stdio.h>
int main()
{
    enum fruits
    {
        mango = 2,
        apple = 1,
        papaya = 2
    };
    printf("Mango = %d, Papaya = %d", mango, papaya);
    return 0;
}