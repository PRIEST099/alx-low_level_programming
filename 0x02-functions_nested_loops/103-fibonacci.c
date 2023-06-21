#include<stdio.h>
/**
 * main - prints fibbonaci even numbers sum
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, a, b, temp;

	a = 1;
	b = 2;
	sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		temp = a;
		a = b;
		b = temp + b;
	}
	printf("%d\n", sum);
	return (0);
}
