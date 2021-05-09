#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], srev[1000];
    int i, j;
    scanf("%s", &s);
    int l = strlen(s);
    j = l - 1;
    printf("%d\n", j);
    for (i = 0; i <= j;)
    {

        // if ((s[i] >= 32 && s[i] <= 64) || s[i] == 9 || s[i] == 10 || s[i] == 13 || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126))
        if (((s[i] >=97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 92))
         && ((s[j] >=97 && s[j] <= 122) || (s[j] >= 65 && s[j] <= 92)))
        {
            // printf("sj=%c si=%c\n",s[j], s[i]);
            // printf("sj=%d si=%d\n",j, i);
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;i++;
            // printf("%c",s[i]);
        }else if((s[i] >=97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 92)){
            j--;
        }else if((s[j] >=97 && s[j] <= 122) || (s[j] >= 65 && s[j] <= 92)){
            i++;
        }else{
            j--;
            i++;
        }
        // else
        // {
        //     s[i] = s[i];
        //     // j--;
        // }
        //else
    }
    for (i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}

