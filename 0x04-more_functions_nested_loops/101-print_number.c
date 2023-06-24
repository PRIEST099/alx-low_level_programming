#include "main.h"

/**
 * print_number - prints an integer
 * @n: parameter passed to be printed
 * Return: null
 */

void print_number(int n)
{
	unsigned int real;

	if (n < 0)
	{
		real = -n;
		_putchar('-');
	}
	else
	{
		real = n;
	}

	if (real / 10)
	{
		print_number(real / 10);
	}
	_putchar((real % 10) + '0');
}
