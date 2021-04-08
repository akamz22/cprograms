#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    a=b=c=0;
    printf("initial value of a,b,c is %d%d%d\n ",a,b,c);
    a=++b + ++c;
    printf("a=%d b=%d c=%d\n",a,b,c);
    a=b++ + c++;
    printf("a=%d b=%d c=%d\n",a,b,c);
    a=++b + c++;
    printf("a=%d b=%d c=%d\n",a,b,c);
    a=b-- + c--;
    printf("a=%d b=%d c=%d\n",a,b,c);
    getch();


}
