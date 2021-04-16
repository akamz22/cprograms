//size_t strlen(const char *_Str)
#include<stdio.h>
#include<string.h>
unsigned int astrlen(char str[]);
int main()
{
    char str[50];
    int l;
    printf("Enter a string : ");
    gets(str);
    //l=strlen(str);
    printf("Length of string is %u",astrlen(str));
    return 0;
}
//Array version
unsigned int astrlen(char str[])
{
    int i=0;
    while (str[i]!='\0')
  i++;
  return i;
    
}

