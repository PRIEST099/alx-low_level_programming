#include <stdio.h>
#include <stdlib.h>

/**
 * print_o - prints opcodes
 * @n: number of bytes to print
 * Return: null
 */

void print_o(unsigned int n)
{
	unsigned char *p = (unsigned char *)print_o;
	unsigned int count = 0;

	while (count < n)
	{
		printf("%02x", *p);
		if (count + 1 != n)
			printf(" ");
		p++;
		count++;
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

	print_o(b);

	return (0);
}
