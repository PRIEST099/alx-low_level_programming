#include "main.h"

/**
 * _puts - prints a string with a newline at the end
 * @str: parameter string
 * Author: Ahadi
 * Return:  null
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
