#include <stdio.h>
enum weekdays
{
    sunday = 1,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
};
int main()
{
    enum weekdays w;
    w = mon;
    printf("The value of w is %d", w);
    return 0;
}