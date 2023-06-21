#include<stdio.h>
/**
 * main - prints the sum of fibbonacci seriews
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a, b, temp;
	int i;

	a = 1;
	b = 2;
	i = 2;
	printf("%ld, %ld", a, b);
	while (i < 98)
	{
		temp = a + b;
		printf(", %ld", temp);
		a = b;
		b = temp;
		i++;
	}
	printf("\n");
	return (0);
}

