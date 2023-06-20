#include<stdio.h>
/**
 * main - prints fibbonacci
 * Return: alsways 0 (Success)
 */
int main(void)
{
	int a, b, temp, i;

	a = 1;
	b = 2;
	i = 2;
	printf("%d, %d, ", a, b);
	while (i < 50)
	{
		temp = a + b;
		printf("%d", temp);
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
