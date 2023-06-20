#include<stdio.h>
/**
 * main - prints fibbonacci
 * Return: alsways 0 (Success)
 */
int main(void)
{
	long long int a, b, temp;
	int i;

	a = 1;
	b = 2;
	i = 2;
	printf("%lld, %lld, ", a, b);
	while (i < 50)
	{
		temp = a + b;
		printf("%lld", temp);
		if (i != 49)
		{
			printf(", ");
		}
		a = b;
		b = temp;
		i++;
	}
	printf("\n");
	return (0);
}
