#include <stdio.h>
/**
 * main - prints the first fibbonaci  50 numbers
 * Return: 0
 */
void fibo(int a)
{
	static int n1 = 1;
	static int n2 = 2;
	static int n3;

	if (a > 0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%d", n3);
		if (a != 1)
		{
			printf(", ");
		}
		fibo(a - 1);
	}
}
int main()
{
	printf("%d, %d, ", 1, 2);
	fibo(48);
	printf("\n");
	return (0);
}

