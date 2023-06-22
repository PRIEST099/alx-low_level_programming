#include "main.h"

/**
 * print_triangle - prints a reverse right angled triangle
 * @size: paramenter for number of rows
 * Return: null
 */

void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
