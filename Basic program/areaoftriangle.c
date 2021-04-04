#include<stdio.h>
int main(){
    float Base=0,Height=0;
    float Area=0;
    printf("enter value of Base\n");
    scanf("%f",&Base);
    printf("enter value of Height\n");
    scanf("%f",&Height);
    Area=(Base*Height)/2;
    printf("Area of triangle=%.2f\n",Area);
    return 0;
}