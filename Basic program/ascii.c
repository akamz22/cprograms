#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an aphabet \n");
    scanf("%c", &ch);
    
   
    /* Condition for vowel */
    if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117 || 
       ch==65 || ch==69  || ch==73  || ch==79  || ch==85)
    {
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        /* Condition for consonant */
        printf("'%c' is Consonant.", ch);
    }


    else

        printf("Invalid alphabet");

    return 0;



}

