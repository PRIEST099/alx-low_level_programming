#include "main.h"
/**
 * print_alphabet_x10 - printa letters ten times
 * Return: null
 */
void print_alphabet_x10(void)
{
	int c, l;

	for (c = 0; c < 10; c++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
