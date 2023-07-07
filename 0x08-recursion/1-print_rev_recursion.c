#include "main.h"

/**
 * counter - countsw the length of the string
 * @s: parameter string for counting
 * Return: i
 */

int counter(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + counter(s + 1));
}

/**
 * _print_rev_recursion - prints reverse of string using recursion
 * @s: parameter sitring
 * Author: ahadi
 * Return: null
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);

	if (*(s + 1) == '\0')
	{
		if (*s == 'n' && *(s - 1) == '\\')
		{
			_putchar('\n');
			return;
		}
	}
	_putchar(*s);
}
