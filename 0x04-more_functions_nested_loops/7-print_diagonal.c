#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the number of rows
 * Return: null
 */

void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
