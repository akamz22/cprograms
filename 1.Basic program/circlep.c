#include<stdio.h>
int main(){
    float radius, perimeter, p=3.14;
    printf("Enter the value of radius");
    scanf("%f",&radius);
    perimeter=2*p*radius;
    printf("perimeter of circle %2f\n",perimeter);
    return 0;
}