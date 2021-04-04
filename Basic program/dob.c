#include<stdio.h>
#include<stdlib.h>

int main() {
 int d, m, y, year, month, day, i;
 
 printf("Enter date of birth (DD MM YYYY) :");
 scanf("%d %d %d", &d, &m, &y);
 if( (d > 31) || (m > 12) || (y < 1900 || y >= 2100) )
 {
 printf("INVALID INPUT. Please enter a valid date between 1900 and 2100");
 exit(0);
 }

 year = y-1900;
 year = year/4;
 year = year+y-1900;
 
 switch(m)
 {
 case 1:
 case 10:
 month = 1;
 break;
 case 2:
 case 3:
 case 11:
 month = 4;
 break;
 case 7:
 case 4:
 month = 0;
 break;
 case 5:
 month = 2;
 break;
 case 6:
 month = 5;
 break;
 case 8:
 month = 3;
 break;
 case 9:
 case 12:
 month = 6;
 break;
 }
 
 year = year + month;
 year = year + d;
 /* Need to make sure extra day is not needed in leap year for dates before March */
 if(( y > 1900 ) && ( y % 4 == 0 ) && ( m < 2 ) )
 year--;
 day = year % 7;
 
 switch(day)
 {
 case 0:
 printf("Day is SATURDAY\n");
 break;
 case 1:
 printf("Day is SUNDAY\n");
 break;
 case 2:
 printf("Day is MONDAY\n");
 break;
 case 3:
 printf("Day is TUESDAY\n");
 break;
 case 4:
 printf("Day is WEDNESDAY\n");
 break;
 case 5:
 printf("Day is THURSDAY\n");
 break;
 case 6:
 printf("Day is FRIDAY\n");
 break;
 }
 
 return 0;
}