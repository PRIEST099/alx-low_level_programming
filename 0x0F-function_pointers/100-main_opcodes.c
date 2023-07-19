#include <stdio.h>
#include <stdlib.h>

/**
 * print_o - prints opcodes
 * @a: main function address
 * @n: number of bytes
 * Return: null
 */

void print_o(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_o((char *)&main, n);
	return (0);
}

