#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter an aphabet \n");
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')

        printf("Entered alphabet is vowel");
    else if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
    {

        printf("'%c' is Consonant.", alphabet);
    }

    else

        printf("Invalid alphabet");

    return 0;
}