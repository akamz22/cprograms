#include <stdio.h>
int main()
{
    char *C2;
    char C[] = "Hello World!";
    printf("%s\n", C);
    C2 = C;
    printf("%c\n",C2[1]);
    C2[0]='A';
    puts(C2);
}