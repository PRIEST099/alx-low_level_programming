#include "main.h"

/**
 * print_line - prints a straight line
 * @n: the number of underscores to draw a line
 * Return: null
 */

void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
