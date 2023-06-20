#include<stdion>
/**
 * main - prints the sum of fibbonacci seriews
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, i, temp;

	a = 1;
	b = 2;
	i = 2;
	printf("%d, %d", a, b);
	while (i < 98)
	{
		temp = a + b;
		printf(", %d", temp);
		a = b;
		b = temp;
		i++;
	}
	printf("\n");
	return (0);
}

