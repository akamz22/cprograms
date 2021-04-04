#include <stdio.h>
int main(void)
{
  int n, count = 0;
  printf("Enter a number");
  scanf("%d", &n);
  do
  {
    n = n / 10;
    count = count + 1;

  } while (n > 0);
  printf("number of digits=%d\n", count);

  return 0;
}