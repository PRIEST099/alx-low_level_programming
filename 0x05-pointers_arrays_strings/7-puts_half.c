#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parameter string pointer
 * Author: Ahadi
 * Return: null
 */

void puts_half(char *str)
{
	int i = 0, len = 0;
	int j;
	int n;

	while (str[i++])
	{
		len++;
	}

	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (j = n; j <= len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
