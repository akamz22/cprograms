#include <stdio.h>
enum months
{
    jan = 1,
    feb,
    mar,
    apr,
    may,
    june,
    july,
    aug,
    sep,
    oct,
    nov,
    dec

};
int main()
{
    enum months;
    for (int i = jan; i <= dec; i++)
    {
        printf("The value of month is %d\n", i);
    }

    return 0;
}