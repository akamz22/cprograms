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

// 1) friends are highly capable to fit into human household and social structure.

// 2) friend warns its master of strangers and intruders, using its exceptional hearing and smelling abilities.

// 3) Ancient nomadic groups taking friends on hunting expedition had more chances to be successful.

// 4) Apart from domesticated friends, there are also stray friends found near human settlements in the world.

// 5) friends are trained and used by humans for various purposes like herding, guarding and hunting etc.

// 6) In countries like South Korea and China friends are used and even domesticated as a source of meat.

// 7) Bite from an unvaccinated friend could lead to a serious life threatening infection called rabies.

// 8) A friend’s life span in domestication ranges from 12-14 years while stray friends live much lesser.

// 9) About 60% of the world’s estimated friend bites occur in children below the age of 15 years.

// 10) Removing the reproductive organs of the street friends will help keep their population in control.