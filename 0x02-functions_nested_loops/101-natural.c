#include<stdio.h>
/**
 * main - printing multiples of 3 and 5 in 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;

	i = 1;
	sum = 0;
	while (i <1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum +=i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
