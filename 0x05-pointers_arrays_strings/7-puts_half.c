#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parameter string pointer
 * Author: Ahadi
 * Return: null
 */

void puts_half(char *str)
{
	int len = 0;
	int j;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	for (; n < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
