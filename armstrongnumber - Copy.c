#include <stdio.h>
#include <math.h>

int main()
{
	int i, sum=0, num;
	printf("All Armstrong number between 100 and 1000 are:\n");
	for (i = 100; i <= 1000; i++)
	{
		num = i;
		if (num == 100)
		{
			printf("%d ", num);
		}
		else
		{
			sum = pow(num % 10, 3) + pow((num % 100 - num % 10) / 10, 3) + pow((num % 1000 - num % 100) / 100, 3);}
			if (sum == i)
			{
				printf("%d ", i);
			}
	}
}

