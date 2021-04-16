#include<stdio.h>
#include<string.h>

int main()
{
    char name[20]={'A','S','H','W','I','N','I','\0'};
    char namelite[20];
    char sname[20]={'K','U','M','A','R'};
   
    /*printf("%s ",name);
    printf("%s\n",sname);
    printf("Enter the name ");
    scanf("%s",&name);
    printf("Enter the surname ");
    scanf("%s",&sname);
    printf("%s %s",name,sname);*/
   /* for (int i = 0; i<10; i++)
    {
        printf("%s %s \n",name,sname);
    }*/
    /*printf("Enter string");
    gets(name);
    printf("You entered string =" );
    puts(name);*/
   ;
    
    printf("%d\n",strlen(name));
    strcpy(namelite,name);
    printf("%s\n",namelite);
    strcat(name, sname);
    printf("%s ",name);

    return 0;
}

