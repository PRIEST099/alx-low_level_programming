#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numers with separators
 * @separator: the separator to use
 * @n: number of passed arguments
 * Return: null
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
