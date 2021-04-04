#include <stdio.h>
int main()
{
	int i, fact = 1, num;
	printf("enter the num");
	scanf("%d", &num);
	for (i = 1; i <= num; i = i + 1)
	{
		fact = fact * i;
	}
	printf("the factorial is = %d", fact);
	return 0;
}