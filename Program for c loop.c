//program for loop
/*
Author:Diana
DATE:8/10/2024
#include<stdio.h>
*/
int main()
{
	int i, sum = 0, limit, start;

	printf("Enter Start:", start);
	scanf("%d", &start);

	printf("Enter limit:", limit);
	scanf("%d", &limit);

	for (i = start; i <= limit; i = i + 1)
	{
		printf("%d \n", i);
		sum = sum + i;
	}
	printf("The sum is:%d", sum);
	
	return 0;
}