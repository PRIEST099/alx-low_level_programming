#include "main.h"

/**
 * print_most_numbers - function that prints most numbers apart from 2 and 4
 * Return: null
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
		else
			continue;
	}
	_putchar('\n');
}
