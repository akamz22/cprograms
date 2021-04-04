#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  printf("Enter limit of pattern");
  scanf("%d",&n);
  for ( i = 1; i <=n ; i++)
  {
      for ( j = 1; j <= i; j++)
      {
          printf("%d",j);
      }
      printf("\n");
  }
    
}
//output
// 1
// 12
// 123
// 1234
// 12345
//.......
//.........