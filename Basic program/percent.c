#include<stdio.h>
int main(){
    int sum, sub1, sub2, sub3, sub4, sub5; 
    float Average_marks=0;
    //Accept marks in 5 subjects
    printf("Enter marks in sub1\n");
    scanf("%d",&sub1);
    printf("Enter marks in sub2\n");
    scanf("%d",&sub2);
     printf("Enter marks in sub3\n");
    scanf("%d",&sub3);
     printf("Enter marks in sub4\n");
    scanf("%d",&sub4);
     printf("Enter marks in sub5\n");
    scanf("%d",&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    Average_marks=(sum)/5;
    printf("Average marks of 5 subjects %2f\n", Average_marks);
    return 0;
     
}