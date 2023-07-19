#include <stdio.h>
#include <stdlib.h>

/**
 * print_o - prints opcodes
 * @n: number of bytes to print
 * @p: main function address
 * Return: null
 */

void print_o(unsigned int n, char *p)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		printf("%.2hhx", p[i]);
		if (count < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument bector
 * Return: integer status
 */

int main(int argc, char *argv[])
{
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_o((char *)&main, b);

	return (0);
}
