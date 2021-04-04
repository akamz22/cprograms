#include <stdio.h>
int main()
{
  int a, b, c;
  printf("\n\n");
  printf("Enter three sides of trianglr\n");
  scanf("%d%d%d", &a, &b, &c);
  if ((a + b > c && b + c > a && c + a > b))
  {
    printf("Triangle valid");
  }
  else
  {
    printf("Triangle not valid");
  }

  return 0;
}