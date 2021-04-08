#include <stdio.h>
void main()
{
	int i, n, sum = 0;
	float avg = 0;
	printf("Input the 10 numbers : \n");
	for (i = 1; i <= 10; i++)
	{
		printf("Number- %d :", i);

		scanf("%d", &n);
		sum =sum + n;
	}
	avg = sum / 10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %f\n", sum, avg);
}