#include <stdio.h>
enum
{
    success,
    fail
} status;
int main()
{
    status = success;
    printf("The value of status : %d", status);
    return 0;
}
