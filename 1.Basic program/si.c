#include<stdio.h>
int main(){
    int amt=143500, r=10, time=31, si;
    si=amt*r*time/100;
    printf("SI calculator start\a");
    printf("Total payable amount after %d year is %d\n",time,amt+si);
    printf("\n\n**SI calculator end**");
    
    return 0;

}