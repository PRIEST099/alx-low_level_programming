#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: null
 */
int print_last_digit(int a)
{
	int rem;

	rem = a % 10;
	if (rem < 0)
	{
		rem = -rem;
	}
	_putchar(rem + '0');
	return (rem);
}
